// DQ (8/19/2005):
/*! \brief Fixups template specializations generated by ROSE from template instantiations.

    All specializations that are located in the source file shoud be output in the code generation.
 */

void markTemplateSpecializationsForOutput( SgNode* node );

//! Inherited attribute required for MarkTemplateSpecializationsForOutput class.
class MarkTemplateSpecializationsForOutputInheritedAttribute
   {
     public:
          bool insideDeclarationToOutput;

          MarkTemplateSpecializationsForOutputInheritedAttribute();
   };

// DQ (6/21/2005): This class controls the output of template declarations in the generated code (by the unparser).
class MarkTemplateSpecializationsForOutput
   : public SgTopDownProcessing<MarkTemplateSpecializationsForOutputInheritedAttribute>
   {
     public:
      //! Saved reference to SgFile (where the template instatiation data is held)
          SgSourceFile* currentFile;

      //! Constructor to provide access to file's backend specific template instantiation options
          MarkTemplateSpecializationsForOutput(SgSourceFile* file);
 
       // Required traversal function
       // void visit (SgNode* node);
      //! Required traversal function
          MarkTemplateSpecializationsForOutputInheritedAttribute
               evaluateInheritedAttribute ( SgNode* node, MarkTemplateSpecializationsForOutputInheritedAttribute inheritedAttribute );
   };

