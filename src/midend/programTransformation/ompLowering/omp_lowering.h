#include "astQuery.h"
//#include "sage3basic.h"

/*!
 * Translation (directive lowering) support for OpenMP 3.0 C/C++
 *
 *  Like other OpenMP related work within ROSE, 
 *  all things go to the OmpSupport namespace to avoid conflicts
 * Liao, 8/10/2009
 */
#ifndef OMP_LOWERING_H
#define OMP_LOWERING_H 
namespace OmpSupport
{

  // OpenMP version info.
  extern bool enable_accelerator;  

  //! makeDataSharingExplicit() can call some of existing functions for some work in OmpSupport namespace by Hongyi 07/16/2012
  //! TODO: add a function within the OmpSupport namespace, the function should transform the AST, so all variables' data-sharing attributes are explicitied represented in the AST. ROSE has dedicated AST nodes for OpenMP directives and the associated clauses, such as private, shared, reduction.


  int patchUpSharedVariables(SgFile* );
  // TODO:  patchUpDefaultVariables(SgFile* );

  int makeDataSharingExplicit( SgFile* );   


  // last edited by Hongyi on 07/24/2012. 

  //! The type of target runtime libraries (not yet in use)
  // We support Omni, GCC OpenMP and NANOS++ runtime libraries
  enum omp_rtl_enum 
  {
    e_gomp,
    e_omni,
    e_nanos,
    e_last_rtl
  };
  extern unsigned int nCounter; // translation generated variable counter, used to avoid name collision

  extern omp_rtl_enum rtl_type; 
  typedef std::map<const SgVariableSymbol *, SgVariableSymbol *> VariableSymbolMap_t;

  void commandLineProcessing(std::vector<std::string> &argvList);

  //! The top level interface to translate OpenMP directives
  void lower_omp(SgSourceFile*);


  //! Insert #include "xxx.h", the interface of a runtime library to the compiler
  void insertRTLHeaders(SgSourceFile*);

  //! Insert runtime init and terminate routines to main() entry
  void insertRTLinitAndCleanCode(SgSourceFile* ); 

  //! A driver to traverse AST trees and invoke individual translators for OpenMP constructs, (not in use)
  //! Postorder is preferred. 
  class translationDriver: public AstSimpleProcessing
  { 
    protected:
      void visit(SgNode*);
  }; //translationDriver

  //! Translate omp parallel
  void transOmpParallel(SgNode* node);

  //! Translate omp parallel under "omp target"
  void transOmpTargetParallel(SgNode* node);

  //! Translate omp sections 
  void transOmpSections(SgNode* node);

  //! Translate omp task
  void transOmpTask(SgNode* node);

  //! Translate omp for or omp do loops
  void transOmpLoop(SgNode* node);

  //! Translate omp for or omp do loops affected by the "omp target" directive, Liao 1/28/2013
  void transOmpTargetLoop(SgNode* node);

  //! Translate Fortran omp do
  //void transOmpDo(SgNode* node);

  //! Translate "omp target"
  void transOmpTarget(SgNode* node);

  //! Translate "omp target data"
  void transOmpTargetData(SgNode* node);


  //! Translate omp barrier
  void transOmpBarrier(SgNode* node);

  //! Translate omp flush 
  void transOmpFlush(SgNode* node);

  //! Translate omp taskwait
  void transOmpTaskwait(SgNode* node);

  //! Translate omp threadprivate
  void transOmpThreadprivate(SgNode* node);

  //! Translate the ordered directive (not the ordered clause)
  void transOmpOrdered(SgNode* node);
  //! Translate omp atomic
  void transOmpAtomic(SgNode* node);
  //! Translate omp critical 
  void transOmpCritical(SgNode* node);
  //! Translate omp master 
  void transOmpMaster(SgNode* node);
  //! Translate omp single 
  void transOmpSingle(SgNode* node);

 //! A helper function to generate implicit or explicit task for either omp parallel or omp task
 // It calls the ROSE AST outliner internally. 
  SgFunctionDeclaration* generateOutlinedTask(SgNode* node, std::string& wrapper_name, 
          std::set<SgVariableSymbol*>& syms, SgClassDeclaration*& struct_decl);
 
#ifdef USE_ROSE_NANOX_OPENMP_LIBRARY

  //! Create an empty object with type the struct to be passed to an OpenMP outlined function in Nanos
  //! Returns an expression containing the new object
  SgExpression* build_nanox_empty_struct( SgStatement* omp_stmt, SgScopeStatement* stmt_sc, 
                                          SgType* struct_type, std::string base_name );

  //! Create the function retrieving the empty struct to be passed to an OpenMP outlined function in Nanos
  //! Returns an expression containing a call to the function
  SgExpression* build_nanox_get_empty_struct( SgStatement* ancestor, SgScopeStatement* expr_sc, 
                                              SgType* struct_type, std::string base_name );

  //! Create the function that initializes an empty structure with the arguments to the outlined OpenMP parallel or task in Nanos
  SgExpression* build_nanox_init_arguments_struct_function( SgStatement* ancestor, std::string& wrapper_name, 
                                                            SgClassDeclaration* struct_decl, bool init_wsd );

  //! Create the function that retrieves the alignement of an struct
  SgExpression* build_nanox_get_alignof( SgStatement* ancestor, std::string& wrapper_name, 
                                         SgClassDeclaration* struct_decl );

  //! A helper function to generate explicit task for omp loop
  //! Inspired in method 'generateOutlinedTask'
  SgFunctionDeclaration* generateOutlinedLoop( SgNode* node, std::string& wrapper_name, std::set<SgVariableSymbol*>& syms, 
                                               std::set<SgInitializedName*>& readOnlyVars, std::set<SgVariableSymbol*>& pdSyms3, 
                                               SgClassDeclaration*& struct_decl,
                                               SgExpression * lower, SgExpression * upper, SgExpression * stride, SgExpression * chunk );

  //! A helper function to generate explicit task for omp section
  //! Inspired in method 'generateOutlinedTask'
  SgFunctionDeclaration* generateOutlinedSection( SgNode* section, SgNode* sections, std::string& wrapper_name, 
                                                  std::set<SgVariableSymbol*>& syms, std::set<SgInitializedName*>& readOnlyVars,
                                                  std::set<SgVariableSymbol*>& pdSyms3, SgClassDeclaration*& struct_decl );
#endif
  
  //! Translate OpenMP variables associated with an OpenMP pragma, such as private, firstprivate, lastprivate, reduction, etc. bb1 is the translation generated code block in which the variable handling statements will be inserted. Original loop upper bound is needed for implementing lastprivate (check if it is the last iteration). withinAcceleratorModel means if we only translate private() variables, used to support accelerator model
  void transOmpVariables(SgStatement * ompStmt, SgBasicBlock* bb1, SgExpression* orig_loop_upper = NULL, bool withinAcceleratorModel= false);

  //! Collect all variables from OpenMP clauses associated with an omp statement: private, reduction, etc 
  SgInitializedNamePtrList collectAllClauseVariables (SgOmpClauseBodyStatement * clause_stmt);

  //! Collect variables from a particular type of OpenMP clauses associated with an omp statement: private, reduction, etc 
  SgInitializedNamePtrList collectClauseVariables (SgOmpClauseBodyStatement * clause_stmt, const VariantT& vt);

  //! Collect variables from given types of OpenMP clauses associated with an omp statement: private, reduction, etc 
  SgInitializedNamePtrList collectClauseVariables (SgOmpClauseBodyStatement * clause_stmt, const VariantVector& vvt);

  //! Check if a variable is in a variable list of a given clause type
  bool isInClauseVariableList(SgInitializedName* var, SgOmpClauseBodyStatement * clause_stmt, const VariantT& vt);

  //! Check if a variable is in variable lists of given clause types
  bool isInClauseVariableList(SgInitializedName* var, SgOmpClauseBodyStatement * clause_stmt, const VariantVector& vvt);

  //! Replace references to oldVar within root with references to newVar, return the number of references replaced.
  int replaceVariableReferences(SgNode* root, SgVariableSymbol* oldVar, SgVariableSymbol* newVar);

  //! Replace variable references within root based on a map from old symbols to new symbols
  int replaceVariableReferences(SgNode* root,  VariableSymbolMap_t varRemap);
  // I decided to reuse the existing Outliner work instead of coding a new one
  //SgFunctionDeclaration* generateOutlinedFunction(SgNode* node);

  //! Add a variable into a non-reduction clause of an OpenMP statement, create the clause transparently if it does not exist
  void addClauseVariable(SgInitializedName* var, SgOmpClauseBodyStatement * clause_stmt, const VariantT& vt);

  //! Build a non-reduction variable clause for a given OpenMP directive. It directly returns the clause if the clause already exists
  SgOmpVariablesClause* buildOmpVariableClause(SgOmpClauseBodyStatement * clause_stmt, const VariantT& vt);

  //! Check if an OpenMP statement has a clause of type vt
  bool hasClause(SgOmpClauseBodyStatement* clause_stmt, const VariantT & vt);

  //! Get OpenMP clauses from an eligible OpenMP statement
  Rose_STL_Container<SgOmpClause*>  getClause(SgOmpClauseBodyStatement* clause_stmt, const VariantT & vt);

  //! Check if an omp for/do loop use static schedule or not, including: default schedule, or schedule(static[,chunk_size]) 
  bool useStaticSchedule(SgOmpClauseBodyStatement* omp_loop);

  //! Return a reduction variable's reduction operation type
  SgOmpClause::omp_reduction_operator_enum getReductionOperationType(SgInitializedName* init_name, SgOmpClauseBodyStatement* clause_stmt);

  //! Create an initial value according to reduction operator type
  SgExpression* createInitialValueExp(SgOmpClause::omp_reduction_operator_enum r_operator);

  //! Generate GOMP loop schedule start function's name
  std::string generateGOMPLoopStartFuncName (bool isOrdered, SgOmpClause::omp_schedule_kind_enum s_kind);

  //! Generate GOMP loop schedule next function's name
  std::string generateGOMPLoopNextFuncName (bool isOrdered, SgOmpClause::omp_schedule_kind_enum s_kind);

  //! Convert a schedule kind enum value to a small case string
  std::string toString(SgOmpClause::omp_schedule_kind_enum s_kind);

  //! Patch up private variables for omp for. The reason is that loop indices should be private by default and this function will make this explicit
  int patchUpPrivateVariables(SgFile*);

  //! Patch up firstprivate variables for omp task. The reason is that the specification 3.0 defines rules for implicitly determined data-sharing attributes and this function will make the firstprivate variable of omp task explicit.
  int patchUpFirstprivateVariables(SgFile*);

  //! Collect threadprivate variables within the current project, return a set to avoid duplicated elements. No input parameters are needed since it finds match from memory pools
  std::set<SgInitializedName*> collectThreadprivateVariables();

  //! Special handling when trying to build and insert a variable declaration into a BB within Fortran OpenMP code
  SgVariableDeclaration * buildAndInsertDeclarationForOmp(const std::string &name, SgType *type, SgInitializer *varInit, SgBasicBlock *orig_scope);
  //! Find an enclosing parallel region or function definition's body
  SgBasicBlock* getEnclosingRegionOrFuncDefinition (SgNode *);
} // end namespace OmpSupport  

#endif //OMP_LOWERING_H
