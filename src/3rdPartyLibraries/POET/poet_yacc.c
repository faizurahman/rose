/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 26 "poet_yacc.y"

/*
   POET : Parameterized Optimizations for Empirical Tuning
   Copyright (c)  2008,  Qing Yi.  All rights reserved.

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

 1. Redistributions of source code must retain the above copyright notice,
    this list of conditions and the following disclaimer.
 2. Redistributions in binary form must reproduce the above copyright notice,
    this list of conditions and the following disclaimer in the documentation
    and/or other materials provided with the distribution.
 3. Neither the name of UTSA nor the names of its contributors may be used to
    endorse or promote products derived from this software without specific
    prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISEDOF THE POSSIBILITY OF SUCH DAMAGE.
*/
/*********************************************************************/
/*  Yacc parser for reading POET specefications and building AST     */
/*********************************************************************/
#define YYDEBUG 1
#define YYERROR_VERBOSE
#include <poet_config.h>
#include <assert.h>

YaccState yaccState;

extern void* insert_input();
extern void set_input_debug();
extern void set_input_cond();
extern void set_input_annot();
extern void set_input_target();
extern void set_input_codeType();
extern void set_input_syntax();
extern void set_input_files();
extern void set_input_inline();

extern void* insert_output();
extern void set_output_target();
extern void set_output_syntax();
extern void set_output_file();
extern void set_output_cond();

extern void* insert_code();
extern void set_code_params();
extern void set_code_def();
extern void set_code_parse();
extern void set_code_lookahead();
extern void* set_code_attr();
extern void set_code_inherit();

extern void insert_source(void* code);
extern void* insert_xform();
extern void set_xform_params();
extern void set_xform_def();
extern void* set_local_static(void* id, void* code, LocalVarType t, void* restr, int insert);


extern void insert_eval();
extern void insert_cond();
extern void eval_define();

extern void insert_trace();
extern void* insert_parameter();
extern void set_param_type();
extern void set_param_default();
extern void set_param_parse();
extern void set_param_message();
extern void finish_parameter();
extern void* make_codeMatch();
extern void* make_annot();
extern void* make_codeMatchQ();
extern void* make_empty_list();
extern void* make_empty();
extern void* make_any();
extern void* make_seq(void*, void*);
extern void* make_typelist2();
extern void* make_inputlist2();
extern void* make_inputlist();
extern void* make_xformList();
extern void* make_sourceString();
extern void* make_sourceAssign();
extern void* make_codeRef();
extern void* make_traceVar();
extern void* negate_Iconst();
extern void* make_Iconst();
extern void* make_Iconst1();
extern void* make_tupleAccess();
extern void* make_type();
extern void* make_typeNot();
extern void* make_typeUop();
extern void* make_typeTor();
extern void* make_sourceQop();
extern void* make_sourceTop();
extern void* make_ifElse();
extern void* make_sourceBop();
extern void* make_sourceUop();
extern void* make_sourceStmt();
extern void* make_dummyOperator();
extern void* make_macroVar();
extern void* make_localPar();
extern void* make_varRef();
extern void* make_attrAccess();
extern void* make_sourceVector();
extern void* make_sourceVector2();
extern void* make_parseOperator();


/* Line 268 of yacc.c  */
#line 190 "poet_yacc.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ENDLIST = 258,
     ERROR = 259,
     SYNERROR = 260,
     PARAMETER = 261,
     DEFINE = 262,
     EVAL = 263,
     LBEGIN = 264,
     RBEGIN = 265,
     PRINT = 266,
     INPUT_ENDFILE = 267,
     INPUT_ENDL = 268,
     INPUT_CONT = 269,
     INHERIT = 270,
     COND = 271,
     ANNOT = 272,
     TO = 273,
     FROM = 274,
     TYPE = 275,
     POETTYPE = 276,
     SYNTAX = 277,
     MESSAGE = 278,
     LTAG = 279,
     RTAG = 280,
     ENDTAG = 281,
     PARS = 282,
     XFORM = 283,
     OUTPUT = 284,
     PARSE = 285,
     LOOKAHEAD = 286,
     MATCH = 287,
     CODE = 288,
     GLOBAL = 289,
     SOURCE = 290,
     ENDCODE = 291,
     ENDXFORM = 292,
     INPUT = 293,
     ENDINPUT = 294,
     SEMICOLON = 295,
     DEBUG = 296,
     RETURN = 297,
     CONTINUE = 298,
     BREAK = 299,
     FOREACH_R = 300,
     FOREACH = 301,
     FOR = 302,
     DOT4 = 303,
     DOT3 = 304,
     DEFAULT = 305,
     SWITCH = 306,
     CASE = 307,
     ELSE = 308,
     IF = 309,
     MOD_ASSIGN = 310,
     DIVIDE_ASSIGN = 311,
     MULT_ASSIGN = 312,
     MINUS_ASSIGN = 313,
     PLUS_ASSIGN = 314,
     ASSIGN = 315,
     QUESTION = 316,
     COMMA = 317,
     TOR = 318,
     OR = 319,
     AND = 320,
     NOT = 321,
     DARROW = 322,
     ARROW = 323,
     NE = 324,
     GE = 325,
     GT = 326,
     EQ = 327,
     LE = 328,
     LT = 329,
     MINUS = 330,
     PLUS = 331,
     STR_CONCAT = 332,
     MOD = 333,
     DIVIDE = 334,
     MULTIPLY = 335,
     DCOLON = 336,
     TILT = 337,
     UMINUS = 338,
     INSERT = 339,
     LEN = 340,
     SPLIT = 341,
     COPY = 342,
     ERASE = 343,
     TRACE = 344,
     EXP = 345,
     NAME = 346,
     STRING = 347,
     INT = 348,
     LIST1 = 349,
     LIST = 350,
     TUPLE = 351,
     MAP = 352,
     VAR = 353,
     REBUILD = 354,
     DUPLICATE = 355,
     RANGE = 356,
     REPLACE = 357,
     PERMUTE = 358,
     RESTORE = 359,
     SAVE = 360,
     CLEAR = 361,
     APPLY = 362,
     DELAY = 363,
     COLON = 364,
     CDR = 365,
     CAR = 366,
     ANY = 367,
     ICONST = 368,
     ID = 369,
     DOT2 = 370,
     DOT = 371,
     POND = 372,
     RBR = 373,
     LBR = 374,
     RB = 375,
     LB = 376,
     RP = 377,
     LP = 378
   };
#endif
/* Tokens.  */
#define ENDLIST 258
#define ERROR 259
#define SYNERROR 260
#define PARAMETER 261
#define DEFINE 262
#define EVAL 263
#define LBEGIN 264
#define RBEGIN 265
#define PRINT 266
#define INPUT_ENDFILE 267
#define INPUT_ENDL 268
#define INPUT_CONT 269
#define INHERIT 270
#define COND 271
#define ANNOT 272
#define TO 273
#define FROM 274
#define TYPE 275
#define POETTYPE 276
#define SYNTAX 277
#define MESSAGE 278
#define LTAG 279
#define RTAG 280
#define ENDTAG 281
#define PARS 282
#define XFORM 283
#define OUTPUT 284
#define PARSE 285
#define LOOKAHEAD 286
#define MATCH 287
#define CODE 288
#define GLOBAL 289
#define SOURCE 290
#define ENDCODE 291
#define ENDXFORM 292
#define INPUT 293
#define ENDINPUT 294
#define SEMICOLON 295
#define DEBUG 296
#define RETURN 297
#define CONTINUE 298
#define BREAK 299
#define FOREACH_R 300
#define FOREACH 301
#define FOR 302
#define DOT4 303
#define DOT3 304
#define DEFAULT 305
#define SWITCH 306
#define CASE 307
#define ELSE 308
#define IF 309
#define MOD_ASSIGN 310
#define DIVIDE_ASSIGN 311
#define MULT_ASSIGN 312
#define MINUS_ASSIGN 313
#define PLUS_ASSIGN 314
#define ASSIGN 315
#define QUESTION 316
#define COMMA 317
#define TOR 318
#define OR 319
#define AND 320
#define NOT 321
#define DARROW 322
#define ARROW 323
#define NE 324
#define GE 325
#define GT 326
#define EQ 327
#define LE 328
#define LT 329
#define MINUS 330
#define PLUS 331
#define STR_CONCAT 332
#define MOD 333
#define DIVIDE 334
#define MULTIPLY 335
#define DCOLON 336
#define TILT 337
#define UMINUS 338
#define INSERT 339
#define LEN 340
#define SPLIT 341
#define COPY 342
#define ERASE 343
#define TRACE 344
#define EXP 345
#define NAME 346
#define STRING 347
#define INT 348
#define LIST1 349
#define LIST 350
#define TUPLE 351
#define MAP 352
#define VAR 353
#define REBUILD 354
#define DUPLICATE 355
#define RANGE 356
#define REPLACE 357
#define PERMUTE 358
#define RESTORE 359
#define SAVE 360
#define CLEAR 361
#define APPLY 362
#define DELAY 363
#define COLON 364
#define CDR 365
#define CAR 366
#define ANY 367
#define ICONST 368
#define ID 369
#define DOT2 370
#define DOT 371
#define POND 372
#define RBR 373
#define LBR 374
#define RB 375
#define LB 376
#define RP 377
#define LP 378




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 478 "poet_yacc.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2261

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  124
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  283
/* YYNRULES -- Number of rules.  */
#define YYNRULES  502
/* YYNRULES -- Number of states.  */
#define YYNSTATES  851

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   378

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     9,    10,    17,    18,    25,
      26,    32,    33,    39,    44,    45,    46,    54,    55,    56,
      63,    64,    65,    72,    73,    80,    84,    85,    89,    90,
      91,    96,   100,   104,   105,   110,   114,   115,   120,   121,
     126,   127,   132,   133,   138,   139,   143,   144,   145,   150,
     151,   156,   157,   162,   163,   168,   172,   174,   175,   176,
     180,   186,   187,   192,   196,   197,   202,   203,   208,   209,
     214,   218,   219,   224,   225,   230,   232,   234,   236,   240,
     243,   246,   247,   250,   251,   254,   256,   257,   262,   266,
     267,   268,   272,   273,   278,   279,   284,   285,   290,   294,
     295,   296,   305,   309,   313,   315,   320,   324,   330,   332,
     334,   336,   338,   340,   342,   344,   346,   348,   350,   353,
     355,   356,   361,   364,   365,   370,   372,   373,   378,   379,
     383,   385,   388,   391,   392,   397,   398,   403,   404,   409,
     410,   415,   416,   421,   422,   427,   428,   429,   433,   434,
     439,   440,   445,   447,   450,   453,   455,   456,   461,   462,
     467,   470,   471,   476,   477,   482,   483,   488,   489,   494,
     495,   500,   501,   506,   507,   511,   513,   514,   519,   520,
     521,   525,   526,   531,   532,   537,   539,   541,   543,   544,
     545,   553,   554,   555,   564,   565,   566,   575,   577,   579,
     580,   585,   588,   591,   593,   595,   598,   600,   601,   606,
     607,   612,   613,   618,   619,   623,   625,   626,   631,   632,
     637,   638,   639,   643,   645,   647,   648,   653,   655,   656,
     661,   663,   664,   665,   669,   675,   676,   683,   684,   689,
     691,   692,   697,   701,   702,   707,   709,   711,   712,   717,
     719,   723,   727,   728,   732,   734,   736,   737,   738,   739,
     749,   751,   752,   753,   757,   758,   759,   760,   761,   775,
     776,   777,   787,   788,   789,   790,   791,   805,   806,   807,
     808,   809,   823,   824,   829,   832,   835,   837,   838,   839,
     840,   848,   849,   850,   857,   858,   864,   866,   868,   869,
     874,   875,   880,   882,   884,   885,   889,   890,   894,   895,
     899,   901,   903,   904,   909,   910,   915,   916,   921,   922,
     927,   928,   933,   934,   939,   940,   945,   946,   951,   952,
     953,   961,   962,   967,   968,   973,   974,   978,   979,   984,
     985,   990,   991,   996,   997,  1002,  1003,  1008,  1009,  1014,
    1015,  1020,  1022,  1024,  1025,  1030,  1031,  1036,  1037,  1042,
    1043,  1048,  1049,  1054,  1055,  1060,  1061,  1066,  1067,  1071,
    1072,  1076,  1077,  1081,  1082,  1083,  1087,  1088,  1089,  1090,
    1091,  1101,  1102,  1103,  1110,  1111,  1112,  1121,  1122,  1123,
    1124,  1136,  1137,  1141,  1142,  1143,  1150,  1151,  1157,  1158,
    1159,  1168,  1169,  1176,  1177,  1183,  1184,  1188,  1189,  1193,
    1194,  1198,  1199,  1200,  1209,  1212,  1213,  1218,  1225,  1227,
    1229,  1230,  1235,  1236,  1241,  1243,  1244,  1248,  1251,  1252,
    1255,  1256,  1261,  1263,  1264,  1270,  1271,  1274,  1277,  1280,
    1283,  1284,  1285,  1291,  1293,  1294,  1295,  1296,  1304,  1305,
    1309,  1310,  1314,  1315,  1319,  1320,  1324,  1327,  1329,  1330,
    1335,  1337,  1339,  1341,  1343,  1344,  1348,  1349,  1354,  1355,
    1356,  1357,  1364,  1366,  1367,  1371,  1372,  1376,  1377,  1378,
    1383,  1384,  1388,  1389,  1393,  1394,  1395,  1400,  1401,  1405,
    1407,  1409,  1411,  1412,  1417,  1421,  1422,  1427,  1428,  1433,
    1434,  1439,  1440
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     125,     0,    -1,   126,    -1,    -1,   126,   127,    -1,    -1,
      24,     6,   114,   128,   171,    26,    -1,    -1,    24,     7,
     114,   129,   225,    26,    -1,    -1,    24,     8,   130,   255,
      26,    -1,    -1,    24,    16,   131,   255,    26,    -1,    24,
      89,   254,    26,    -1,    -1,    -1,    24,    33,   114,   132,
     156,   133,   239,    -1,    -1,    -1,    24,    38,   134,   139,
     135,   155,    -1,    -1,    -1,    24,    29,   136,   148,   137,
      26,    -1,    -1,    24,    28,   114,   138,   243,   241,    -1,
     366,   361,    12,    -1,    -1,   141,   140,   139,    -1,    -1,
      -1,    41,    60,   142,   378,    -1,    18,    60,    21,    -1,
      18,    60,   114,    -1,    -1,    22,    60,   143,   378,    -1,
      30,    60,    21,    -1,    -1,    30,    60,   144,   225,    -1,
      -1,    19,    60,   145,   378,    -1,    -1,    17,    60,   146,
     378,    -1,    -1,    16,    60,   147,   378,    -1,    -1,   150,
     149,   148,    -1,    -1,    -1,    19,    60,   151,   378,    -1,
      -1,    22,    60,   152,   378,    -1,    -1,    18,    60,   153,
     378,    -1,    -1,    16,    60,   154,   378,    -1,    25,   361,
      39,    -1,    26,    -1,    -1,    -1,   158,   157,   156,    -1,
      27,    60,   123,   169,   122,    -1,    -1,   114,    60,   159,
     378,    -1,   114,    60,    15,    -1,    -1,    16,    60,   160,
     378,    -1,    -1,    99,    60,   161,   378,    -1,    -1,    30,
      60,   162,   225,    -1,    31,    60,   113,    -1,    -1,    32,
      60,   163,   165,    -1,    -1,    29,    60,   164,   378,    -1,
     185,    -1,    30,    -1,   114,    -1,    34,   116,   114,    -1,
      28,   167,    -1,    33,   168,    -1,    -1,   116,   114,    -1,
      -1,   116,   114,    -1,   114,    -1,    -1,   114,   109,   170,
     225,    -1,   169,    62,   169,    -1,    -1,    -1,   171,   172,
     173,    -1,    -1,    20,    60,   174,   187,    -1,    -1,    50,
      60,   175,   378,    -1,    -1,    30,    60,   176,   225,    -1,
      23,    60,    35,    -1,    -1,    -1,    97,   123,   178,   185,
      62,   179,   185,   122,    -1,    97,   123,   122,    -1,    97,
     121,   120,    -1,    97,    -1,    97,   121,   180,   120,    -1,
     378,    68,   378,    -1,   378,    68,   378,    62,   180,    -1,
     217,    -1,   112,    -1,    93,    -1,    92,    -1,    91,    -1,
      90,    -1,    98,    -1,    96,    -1,   177,    -1,   181,    -1,
      75,   113,    -1,   388,    -1,    -1,   114,    60,   183,   182,
      -1,    82,   185,    -1,    -1,   123,   184,   187,   122,    -1,
     182,    -1,    -1,   185,    63,   186,   185,    -1,    -1,   185,
     188,   195,    -1,   197,    -1,   185,    48,    -1,   185,    49,
      -1,    -1,   182,   115,   189,   182,    -1,    -1,   185,    76,
     190,   185,    -1,    -1,   185,    80,   191,   185,    -1,    -1,
     185,    79,   192,   185,    -1,    -1,   185,    78,   193,   185,
      -1,    -1,   185,    81,   194,   185,    -1,    -1,    -1,   185,
     196,   195,    -1,    -1,   185,    62,   198,   185,    -1,    -1,
     197,    62,   199,   185,    -1,   181,    -1,    75,   113,    -1,
     106,   114,    -1,   393,    -1,    -1,   123,   201,   209,   122,
      -1,    -1,   200,    63,   202,   200,    -1,   200,    49,    -1,
      -1,   200,   115,   203,   200,    -1,    -1,   200,    76,   204,
     200,    -1,    -1,   200,    80,   205,   200,    -1,    -1,   200,
      79,   206,   200,    -1,    -1,   200,    78,   207,   200,    -1,
      -1,   200,    81,   208,   200,    -1,    -1,   200,   210,   212,
      -1,   214,    -1,    -1,   114,    60,   211,   200,    -1,    -1,
      -1,   200,   213,   212,    -1,    -1,   200,    62,   215,   200,
      -1,    -1,   214,    62,   216,   200,    -1,   113,    -1,    35,
      -1,     3,    -1,    -1,    -1,    96,   123,   219,   227,   220,
     236,   122,    -1,    -1,    -1,    95,   123,   221,   227,    62,
     222,   238,   122,    -1,    -1,    -1,    94,   123,   223,   227,
      62,   224,   238,   122,    -1,   218,    -1,   182,    -1,    -1,
     225,    63,   226,   225,    -1,   225,    48,    -1,   225,    49,
      -1,   181,    -1,   388,    -1,    82,   185,    -1,   218,    -1,
      -1,   114,    60,   228,   227,    -1,    -1,   227,    63,   229,
     227,    -1,    -1,   123,   230,   231,   122,    -1,    -1,   227,
     232,   236,    -1,   233,    -1,    -1,   227,    62,   234,   227,
      -1,    -1,   233,    62,   235,   227,    -1,    -1,    -1,   227,
     237,   236,    -1,   217,    -1,   166,    -1,    -1,    25,   240,
     255,    36,    -1,    26,    -1,    -1,    25,   242,   255,    37,
      -1,    37,    -1,    -1,    -1,   245,   244,   243,    -1,    27,
      60,   123,   248,   122,    -1,    -1,    29,    60,   123,   246,
     250,   122,    -1,    -1,   114,    60,   247,   185,    -1,   114,
      -1,    -1,   114,   109,   249,   185,    -1,   248,    62,   248,
      -1,    -1,   252,    62,   251,   250,    -1,   252,    -1,   114,
      -1,    -1,   114,   109,   253,   185,    -1,   114,    -1,   114,
      60,   378,    -1,   114,    62,   254,    -1,    -1,   257,   256,
     255,    -1,   257,    -1,   286,    -1,    -1,    -1,    -1,    54,
     123,   258,   294,   122,   259,   263,   260,   261,    -1,   263,
      -1,    -1,    -1,    53,   262,   257,    -1,    -1,    -1,    -1,
      -1,    47,   123,   264,   279,    40,   265,   279,    40,   266,
     279,   122,   267,   263,    -1,    -1,    -1,    51,   123,   268,
     255,   122,   121,   269,   280,   120,    -1,    -1,    -1,    -1,
      -1,    46,   123,   270,   316,   109,   271,   200,   109,   272,
     294,   122,   273,   263,    -1,    -1,    -1,    -1,    -1,    45,
     123,   274,   316,   109,   275,   200,   109,   276,   294,   122,
     277,   263,    -1,    -1,   121,   278,   255,   120,    -1,   121,
     120,    -1,   290,    40,    -1,   294,    -1,    -1,    -1,    -1,
     280,    52,   281,   200,   109,   282,   255,    -1,    -1,    -1,
      52,   283,   200,   109,   284,   255,    -1,    -1,   280,    50,
     109,   285,   255,    -1,   287,    -1,   290,    -1,    -1,   287,
      62,   288,   290,    -1,    -1,   290,    62,   289,   290,    -1,
      43,    -1,    44,    -1,    -1,    42,   291,   378,    -1,    -1,
       4,   292,   378,    -1,    -1,    11,   293,   378,    -1,   294,
      -1,   305,    -1,    -1,   331,    60,   295,   294,    -1,    -1,
     331,    68,   296,   227,    -1,    -1,   331,    59,   297,   305,
      -1,    -1,   331,    58,   298,   305,    -1,    -1,   331,    57,
     299,   305,    -1,    -1,   331,    56,   300,   305,    -1,    -1,
     331,    55,   301,   305,    -1,    -1,   331,    67,   302,   227,
      -1,    -1,    -1,   331,    61,   303,   316,   109,   304,   294,
      -1,    -1,   305,    65,   306,   305,    -1,    -1,   305,    64,
     307,   305,    -1,    -1,    66,   308,   316,    -1,    -1,   316,
      74,   309,   316,    -1,    -1,   316,    73,   310,   316,    -1,
      -1,   316,    72,   311,   316,    -1,    -1,   316,    71,   312,
     316,    -1,    -1,   316,    70,   313,   316,    -1,    -1,   316,
      69,   314,   316,    -1,    -1,   316,   109,   315,   200,    -1,
     316,    -1,   325,    -1,    -1,   316,    76,   317,   316,    -1,
      -1,   316,    75,   318,   316,    -1,    -1,   316,    80,   319,
     316,    -1,    -1,   316,    77,   320,   316,    -1,    -1,   316,
      79,   321,   316,    -1,    -1,   316,    78,   322,   316,    -1,
      -1,   316,    81,   323,   316,    -1,    -1,    75,   324,   316,
      -1,    -1,   331,   326,   327,    -1,    -1,   331,   328,   329,
      -1,    -1,    -1,   331,   330,   329,    -1,    -1,    -1,    -1,
      -1,   102,   123,   332,   305,    62,   333,   305,   334,   356,
      -1,    -1,    -1,    89,   123,   335,   305,   336,   356,    -1,
      -1,    -1,   103,   123,   337,   305,    62,   338,   305,   122,
      -1,    -1,    -1,    -1,   100,   123,   339,   305,    62,   340,
     305,    62,   341,   305,   122,    -1,    -1,    87,   342,   378,
      -1,    -1,    -1,    88,   123,   343,   305,   344,   358,    -1,
      -1,   108,   121,   345,   255,   120,    -1,    -1,    -1,    84,
     123,   346,   305,    62,   347,   305,   122,    -1,    -1,    41,
     360,   121,   348,   255,   120,    -1,    -1,   107,   121,   349,
     255,   120,    -1,    -1,    99,   350,   378,    -1,    -1,   104,
     351,   378,    -1,    -1,   105,   352,   378,    -1,    -1,    -1,
      86,   123,   353,   305,    62,   354,   305,   122,    -1,   378,
      49,    -1,    -1,   378,   115,   355,   378,    -1,   101,   123,
     378,    62,   378,   122,    -1,   373,    -1,   122,    -1,    -1,
      62,   357,   305,   122,    -1,    -1,    62,   359,   305,   122,
      -1,   122,    -1,    -1,   119,   113,   118,    -1,   363,   362,
      -1,    -1,   363,   362,    -1,    -1,    13,   366,   364,   367,
      -1,   366,    -1,    -1,    10,   123,   365,   227,   122,    -1,
      -1,   113,   366,    -1,    35,   366,    -1,    14,   366,    -1,
     114,   366,    -1,    -1,    -1,    68,   368,   227,   369,   370,
      -1,   370,    -1,    -1,    -1,    -1,     9,   123,   371,   227,
     122,   372,   370,    -1,    -1,   111,   374,   378,    -1,    -1,
     110,   375,   378,    -1,    -1,    85,   376,   378,    -1,    -1,
      93,   377,   378,    -1,   106,   114,    -1,   380,    -1,    -1,
     123,   379,   255,   122,    -1,   217,    -1,   112,    -1,   166,
      -1,   177,    -1,    -1,   378,   381,   383,    -1,    -1,   380,
      63,   382,   380,    -1,    -1,    -1,    -1,   119,   384,   398,
     118,   385,   383,    -1,   386,    -1,    -1,   117,   387,   378,
      -1,    -1,   166,   389,   390,    -1,    -1,    -1,   119,   391,
     401,   118,    -1,    -1,   117,   392,   185,    -1,    -1,   166,
     394,   395,    -1,    -1,    -1,   119,   396,   404,   118,    -1,
      -1,   117,   397,   200,    -1,   305,    -1,   401,    -1,   399,
      -1,    -1,   399,    63,   400,   399,    -1,   114,   116,   114,
      -1,    -1,   114,    60,   402,   305,    -1,    -1,   401,    40,
     403,   401,    -1,    -1,   114,    60,   405,   185,    -1,    -1,
     404,    40,   406,   404,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   146,   146,   148,   149,   151,   151,   153,   153,   155,
     155,   156,   156,   157,   158,   158,   158,   159,   159,   159,
     160,   160,   160,   161,   161,   163,   166,   166,   167,   168,
     168,   169,   170,   171,   171,   172,   173,   173,   175,   175,
     176,   176,   177,   177,   179,   179,   180,   181,   181,   183,
     183,   185,   185,   187,   187,   189,   190,   192,   192,   192,
     193,   194,   194,   195,   196,   196,   198,   198,   200,   200,
     202,   203,   203,   205,   205,   208,   209,   211,   212,   213,
     214,   216,   217,   219,   220,   223,   224,   224,   225,   227,
     227,   227,   228,   228,   230,   230,   231,   231,   232,   235,
     236,   235,   238,   239,   240,   241,   244,   246,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   259,   260,   261,
     262,   262,   264,   265,   265,   267,   268,   268,   271,   271,
     272,   273,   274,   275,   275,   277,   277,   279,   279,   281,
     281,   283,   283,   284,   284,   286,   287,   287,   288,   288,
     290,   290,   292,   293,   294,   295,   296,   296,   297,   297,
     299,   300,   300,   302,   302,   304,   304,   306,   306,   308,
     308,   310,   310,   312,   312,   313,   314,   314,   316,   317,
     317,   318,   318,   320,   320,   322,   323,   324,   326,   326,
     326,   327,   327,   327,   328,   328,   328,   330,   331,   332,
     332,   334,   335,   337,   338,   339,   340,   341,   341,   343,
     343,   345,   345,   347,   347,   348,   349,   349,   351,   351,
     352,   353,   353,   355,   356,   358,   358,   359,   360,   360,
     361,   362,   362,   362,   363,   364,   364,   365,   365,   366,
     367,   367,   368,   369,   369,   369,   370,   371,   371,   372,
     373,   374,   377,   377,   378,   379,   380,   380,   380,   380,
     382,   383,   384,   384,   385,   386,   387,   387,   385,   389,
     389,   389,   391,   392,   393,   393,   391,   395,   396,   397,
     397,   395,   399,   399,   400,   401,   403,   404,   406,   406,
     406,   408,   408,   408,   409,   409,   412,   413,   415,   415,
     416,   416,   419,   420,   421,   421,   422,   422,   423,   423,
     424,   426,   427,   427,   428,   428,   429,   429,   431,   431,
     433,   433,   435,   435,   437,   437,   439,   439,   440,   440,
     440,   444,   444,   445,   445,   446,   446,   447,   447,   448,
     448,   449,   449,   450,   450,   452,   452,   454,   454,   456,
     456,   457,   459,   460,   460,   462,   462,   464,   464,   466,
     466,   468,   468,   470,   470,   472,   472,   473,   473,   475,
     475,   478,   478,   479,   480,   480,   481,   483,   483,   483,
     483,   486,   486,   486,   489,   489,   489,   491,   491,   491,
     491,   493,   493,   494,   495,   494,   497,   497,   498,   498,
     498,   500,   500,   502,   502,   503,   503,   504,   504,   505,
     505,   506,   506,   506,   508,   509,   509,   511,   513,   514,
     514,   514,   516,   516,   517,   519,   520,   522,   524,   525,
     528,   528,   529,   530,   530,   533,   534,   535,   536,   537,
     540,   540,   540,   541,   543,   544,   544,   544,   548,   548,
     549,   549,   550,   550,   551,   551,   552,   553,   555,   555,
     556,   557,   558,   559,   561,   561,   562,   562,   563,   564,
     565,   564,   567,   569,   569,   572,   572,   573,   574,   574,
     576,   576,   579,   579,   580,   581,   581,   583,   583,   586,
     587,   588,   590,   590,   592,   595,   595,   597,   597,   601,
     601,   603,   603
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ENDLIST", "ERROR", "SYNERROR",
  "PARAMETER", "DEFINE", "EVAL", "LBEGIN", "RBEGIN", "PRINT",
  "INPUT_ENDFILE", "INPUT_ENDL", "INPUT_CONT", "INHERIT", "COND", "ANNOT",
  "TO", "FROM", "TYPE", "POETTYPE", "SYNTAX", "MESSAGE", "LTAG", "RTAG",
  "ENDTAG", "PARS", "XFORM", "OUTPUT", "PARSE", "LOOKAHEAD", "MATCH",
  "CODE", "GLOBAL", "SOURCE", "ENDCODE", "ENDXFORM", "INPUT", "ENDINPUT",
  "SEMICOLON", "DEBUG", "RETURN", "CONTINUE", "BREAK", "FOREACH_R",
  "FOREACH", "FOR", "DOT4", "DOT3", "DEFAULT", "SWITCH", "CASE", "ELSE",
  "IF", "MOD_ASSIGN", "DIVIDE_ASSIGN", "MULT_ASSIGN", "MINUS_ASSIGN",
  "PLUS_ASSIGN", "ASSIGN", "QUESTION", "COMMA", "TOR", "OR", "AND", "NOT",
  "DARROW", "ARROW", "NE", "GE", "GT", "EQ", "LE", "LT", "MINUS", "PLUS",
  "STR_CONCAT", "MOD", "DIVIDE", "MULTIPLY", "DCOLON", "TILT", "UMINUS",
  "INSERT", "LEN", "SPLIT", "COPY", "ERASE", "TRACE", "EXP", "NAME",
  "STRING", "INT", "LIST1", "LIST", "TUPLE", "MAP", "VAR", "REBUILD",
  "DUPLICATE", "RANGE", "REPLACE", "PERMUTE", "RESTORE", "SAVE", "CLEAR",
  "APPLY", "DELAY", "COLON", "CDR", "CAR", "ANY", "ICONST", "ID", "DOT2",
  "DOT", "POND", "RBR", "LBR", "RB", "LB", "RP", "LP", "$accept", "poet",
  "sections", "section", "@1", "@2", "@3", "@4", "@5", "@6", "@7", "@8",
  "@9", "@10", "@11", "inputAttrs", "@12", "inputAttr", "@13", "@14",
  "@15", "@16", "@17", "@18", "outputAttrs", "@19", "outputAttr", "@20",
  "@21", "@22", "@23", "inputRHS", "codeAttrs", "@24", "codeAttr", "@25",
  "@26", "@27", "@28", "@29", "@30", "matchSpec", "varRef", "xformRef",
  "codeRef", "codePars", "@31", "paramAttrs", "@32", "paramAttr", "@33",
  "@34", "@35", "map", "@36", "@37", "mapEntries", "singletype",
  "typeSpec1", "@38", "@39", "typeSpec", "@40", "typeMulti", "@41", "@42",
  "@43", "@44", "@45", "@46", "@47", "typeList", "@48", "typeTuple", "@49",
  "@50", "patternSpec", "@51", "@52", "@53", "@54", "@55", "@56", "@57",
  "@58", "patternMulti", "@59", "@60", "patternList", "@61",
  "patternTuple", "@62", "@63", "constant", "parseType1", "@64", "@65",
  "@66", "@67", "@68", "@69", "parseType", "@70", "parseElem", "@71",
  "@72", "@73", "parseElemMulti", "@74", "parseElemTuple", "@75", "@76",
  "parseElemList", "@77", "constantOrVar", "codeRHS", "@78", "xformRHS",
  "@79", "xformAttrs", "@80", "xformAttr", "@81", "@82", "xformPars",
  "@83", "outputPars", "@84", "outputPar", "@85", "traceVars", "code",
  "@86", "codeIf", "@87", "@88", "@89", "codeIfHelp", "@90", "code1",
  "@91", "@92", "@93", "@94", "@95", "@96", "@97", "@98", "@99", "@100",
  "@101", "@102", "@103", "@104", "@105", "e_code4", "switchHelp", "@106",
  "@107", "@108", "@109", "@110", "code23", "code2", "@111", "@112",
  "code3", "@113", "@114", "@115", "code4", "@116", "@117", "@118", "@119",
  "@120", "@121", "@122", "@123", "@124", "@125", "code5", "@126", "@127",
  "@128", "@129", "@130", "@131", "@132", "@133", "@134", "@135", "code6",
  "@136", "@137", "@138", "@139", "@140", "@141", "@142", "@143", "code7",
  "@144", "code7Help", "@145", "code7Help2", "@146", "code8", "@147",
  "@148", "@149", "@150", "@151", "@152", "@153", "@154", "@155", "@156",
  "@157", "@158", "@159", "@160", "@161", "@162", "@163", "@164", "@165",
  "@166", "@167", "@168", "@169", "@170", "paramRHS", "@171", "eraseRHS",
  "@172", "debugConfig", "inputCodeList", "inputCodeList2", "inputCode",
  "@173", "@174", "inputBase", "lineAnnot", "@175", "@176", "typeMatch",
  "@177", "@178", "code9", "@179", "@180", "@181", "@182", "codeUnit",
  "@183", "varInvoke", "@184", "@185", "varInvoke1", "@186", "@187",
  "pond", "@188", "varInvokeType", "@189", "varInvokeType1", "@190",
  "@191", "varInvokePattern", "@192", "varInvokePattern1", "@193", "@194",
  "configOrSubRef", "selectRef", "@195", "configRef", "@196", "@197",
  "xformConfig", "@198", "@199", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   124,   125,   126,   126,   128,   127,   129,   127,   130,
     127,   131,   127,   127,   132,   133,   127,   134,   135,   127,
     136,   137,   127,   138,   127,   127,   140,   139,   139,   142,
     141,   141,   141,   143,   141,   141,   144,   141,   145,   141,
     146,   141,   147,   141,   149,   148,   148,   151,   150,   152,
     150,   153,   150,   154,   150,   155,   155,   156,   157,   156,
     158,   159,   158,   158,   160,   158,   161,   158,   162,   158,
     158,   163,   158,   164,   158,   165,   165,   166,   166,   166,
     166,   167,   167,   168,   168,   169,   170,   169,   169,   171,
     172,   171,   174,   173,   175,   173,   176,   173,   173,   178,
     179,   177,   177,   177,   177,   177,   180,   180,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   182,   182,   182,
     183,   182,   182,   184,   182,   185,   186,   185,   188,   187,
     187,   187,   187,   189,   187,   190,   187,   191,   187,   192,
     187,   193,   187,   194,   187,   195,   196,   195,   198,   197,
     199,   197,   200,   200,   200,   200,   201,   200,   202,   200,
     200,   203,   200,   204,   200,   205,   200,   206,   200,   207,
     200,   208,   200,   210,   209,   209,   211,   209,   212,   213,
     212,   215,   214,   216,   214,   217,   217,   217,   219,   220,
     218,   221,   222,   218,   223,   224,   218,   225,   225,   226,
     225,   225,   225,   227,   227,   227,   227,   228,   227,   229,
     227,   230,   227,   232,   231,   231,   234,   233,   235,   233,
     236,   237,   236,   238,   238,   240,   239,   239,   242,   241,
     241,   243,   244,   243,   245,   246,   245,   247,   245,   248,
     249,   248,   248,   251,   250,   250,   252,   253,   252,   254,
     254,   254,   256,   255,   255,   255,   258,   259,   260,   257,
     257,   261,   262,   261,   264,   265,   266,   267,   263,   268,
     269,   263,   270,   271,   272,   273,   263,   274,   275,   276,
     277,   263,   278,   263,   263,   263,   279,   279,   281,   282,
     280,   283,   284,   280,   285,   280,   286,   286,   288,   287,
     289,   287,   290,   290,   291,   290,   292,   290,   293,   290,
     290,   294,   295,   294,   296,   294,   297,   294,   298,   294,
     299,   294,   300,   294,   301,   294,   302,   294,   303,   304,
     294,   306,   305,   307,   305,   308,   305,   309,   305,   310,
     305,   311,   305,   312,   305,   313,   305,   314,   305,   315,
     305,   305,   316,   317,   316,   318,   316,   319,   316,   320,
     316,   321,   316,   322,   316,   323,   316,   324,   316,   326,
     325,   328,   327,   327,   330,   329,   329,   332,   333,   334,
     331,   335,   336,   331,   337,   338,   331,   339,   340,   341,
     331,   342,   331,   343,   344,   331,   345,   331,   346,   347,
     331,   348,   331,   349,   331,   350,   331,   351,   331,   352,
     331,   353,   354,   331,   331,   355,   331,   331,   331,   356,
     357,   356,   359,   358,   358,   360,   360,   361,   362,   362,
     364,   363,   363,   365,   363,   366,   366,   366,   366,   366,
     368,   369,   367,   367,   370,   371,   372,   370,   374,   373,
     375,   373,   376,   373,   377,   373,   373,   373,   379,   378,
     378,   378,   378,   378,   381,   380,   382,   380,   383,   384,
     385,   383,   383,   387,   386,   389,   388,   390,   391,   390,
     392,   390,   394,   393,   395,   396,   395,   397,   395,   398,
     398,   398,   400,   399,   399,   402,   401,   403,   401,   405,
     404,   406,   404
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     0,     6,     0,     6,     0,
       5,     0,     5,     4,     0,     0,     7,     0,     0,     6,
       0,     0,     6,     0,     6,     3,     0,     3,     0,     0,
       4,     3,     3,     0,     4,     3,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     3,     0,     0,     4,     0,
       4,     0,     4,     0,     4,     3,     1,     0,     0,     3,
       5,     0,     4,     3,     0,     4,     0,     4,     0,     4,
       3,     0,     4,     0,     4,     1,     1,     1,     3,     2,
       2,     0,     2,     0,     2,     1,     0,     4,     3,     0,
       0,     3,     0,     4,     0,     4,     0,     4,     3,     0,
       0,     8,     3,     3,     1,     4,     3,     5,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       0,     4,     2,     0,     4,     1,     0,     4,     0,     3,
       1,     2,     2,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     0,     3,     0,     4,
       0,     4,     1,     2,     2,     1,     0,     4,     0,     4,
       2,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     3,     1,     0,     4,     0,     0,
       3,     0,     4,     0,     4,     1,     1,     1,     0,     0,
       7,     0,     0,     8,     0,     0,     8,     1,     1,     0,
       4,     2,     2,     1,     1,     2,     1,     0,     4,     0,
       4,     0,     4,     0,     3,     1,     0,     4,     0,     4,
       0,     0,     3,     1,     1,     0,     4,     1,     0,     4,
       1,     0,     0,     3,     5,     0,     6,     0,     4,     1,
       0,     4,     3,     0,     4,     1,     1,     0,     4,     1,
       3,     3,     0,     3,     1,     1,     0,     0,     0,     9,
       1,     0,     0,     3,     0,     0,     0,     0,    13,     0,
       0,     9,     0,     0,     0,     0,    13,     0,     0,     0,
       0,    13,     0,     4,     2,     2,     1,     0,     0,     0,
       7,     0,     0,     6,     0,     5,     1,     1,     0,     4,
       0,     4,     1,     1,     0,     3,     0,     3,     0,     3,
       1,     1,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     0,
       7,     0,     4,     0,     4,     0,     3,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     1,     1,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     3,     0,
       3,     0,     3,     0,     0,     3,     0,     0,     0,     0,
       9,     0,     0,     6,     0,     0,     8,     0,     0,     0,
      11,     0,     3,     0,     0,     6,     0,     5,     0,     0,
       8,     0,     6,     0,     5,     0,     3,     0,     3,     0,
       3,     0,     0,     8,     2,     0,     4,     6,     1,     1,
       0,     4,     0,     4,     1,     0,     3,     2,     0,     2,
       0,     4,     1,     0,     5,     0,     2,     2,     2,     2,
       0,     0,     5,     1,     0,     0,     0,     7,     0,     3,
       0,     3,     0,     3,     0,     3,     2,     1,     0,     4,
       1,     1,     1,     1,     0,     3,     0,     4,     0,     0,
       0,     6,     1,     0,     3,     0,     3,     0,     0,     4,
       0,     3,     0,     3,     0,     0,     4,     0,     3,     1,
       1,     1,     0,     4,     3,     0,     4,     0,     4,     0,
       4,     0,     4
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,   435,     1,   435,     0,   435,   435,   435,     4,
     435,   438,     0,     0,     9,    11,     0,    20,     0,    17,
       0,   437,   436,   439,     0,   435,     0,   428,   432,     5,
       7,     0,     0,    23,    46,    14,    28,   249,     0,   433,
     430,    25,   427,   428,    89,     0,   187,   306,   308,    81,
      83,     0,   186,   425,   304,   302,   303,     0,     0,     0,
       0,     0,   335,   367,     0,   452,     0,   391,     0,     0,
     454,   104,   405,     0,     0,     0,     0,   407,   409,     0,
       0,     0,   450,   448,   461,   185,    77,   282,   458,   462,
     463,   460,     0,   252,   260,   255,   296,   297,   310,   311,
     351,   352,   369,   418,   464,   457,     0,   231,     0,     0,
       0,     0,    21,    44,    57,     0,     0,     0,     0,     0,
       0,     0,    18,    26,     0,     0,    13,     0,   444,   429,
      90,     0,     0,   113,   112,   111,   110,     0,     0,   115,
     114,   109,    77,   123,   475,   116,   117,   198,   108,   197,
       0,   119,     0,     0,     0,    79,     0,    80,     0,     0,
       0,     0,   277,   272,   264,   269,   256,     0,     0,   398,
       0,   411,     0,   393,   381,     0,     0,    99,     0,   387,
       0,   377,   384,     0,     0,   456,   403,   396,     0,     0,
     284,     0,     0,    10,     0,   298,   285,   300,   333,   331,
     347,   345,   343,   341,   339,   337,   355,   353,   359,   363,
     361,   357,   365,   349,   324,   322,   320,   318,   316,   312,
     328,   326,   314,   373,   414,   415,   468,   466,    12,     0,
       0,     0,     0,   232,    53,    51,    47,    49,     0,    46,
       0,     0,     0,     0,     0,     0,     0,     0,    15,    58,
      42,    40,     0,    38,    33,    36,    29,     0,    28,   250,
     251,     0,    77,   211,   203,   206,     0,   204,     0,   440,
     431,   443,     6,     0,   118,   115,   125,   122,   194,   191,
     188,   120,     0,   477,     8,   201,   202,   199,   307,   309,
      82,    84,    78,     0,   401,   305,     0,     0,   287,     0,
       0,   336,   369,   368,     0,   453,     0,   392,     0,     0,
     455,   103,     0,     0,   102,     0,   406,     0,     0,     0,
       0,   408,   410,     0,     0,   451,   449,     0,     0,   253,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   370,   371,     0,
     473,   469,   465,   472,     0,     0,     0,   237,   228,   230,
      24,   231,     0,     0,     0,     0,    22,    45,    64,     0,
      73,    68,     0,    71,    66,    61,     0,    57,     0,     0,
      31,    32,     0,     0,    35,     0,     0,   435,    56,    19,
      27,   205,   207,     0,   209,   434,   445,     0,     0,     0,
       0,     0,    91,   126,     0,     0,     0,     0,   125,   128,
       0,   130,   480,   478,   476,     0,   426,     0,     0,     0,
       0,   286,     0,     0,     0,     0,   394,   382,   105,     0,
       0,     0,     0,     0,     0,     0,     0,   283,   459,   299,
     301,   334,   332,   348,   346,   344,   342,   340,   338,   356,
     354,   360,   364,   362,   358,   366,     0,     0,   156,   482,
     152,   350,   155,   325,   323,   321,   319,   317,   313,     0,
     327,   315,   376,   416,     0,     0,   464,   467,     0,   235,
       0,     0,   233,    54,    52,    48,    50,     0,     0,     0,
       0,    70,     0,     0,    63,     0,   225,   227,    16,    59,
      43,    41,    39,    34,    37,    30,     0,     0,   213,     0,
     215,     0,     0,   441,    92,     0,    96,    94,     0,     0,
       0,   189,   121,   133,   131,   132,   148,   135,   141,   139,
     137,   143,   145,   124,   150,     0,     0,   200,     0,   278,
     273,   265,     0,   257,   399,   412,     0,     0,   106,   100,
     388,     0,   378,   385,   404,   397,   153,   154,     0,   484,
     160,   158,   163,   169,   167,   165,   171,   161,   329,   372,
     374,   474,    77,   489,     0,   491,   490,   239,     0,     0,
     238,     0,    65,    85,     0,    74,    69,    76,    72,    75,
      67,    62,     0,    55,   208,   216,   220,   212,   218,   210,
       0,   444,     0,    98,     0,     0,   127,   195,   192,   220,
       0,     0,     0,     0,     0,     0,     0,   146,   129,     0,
     481,     0,     0,   402,     0,     0,   287,   270,     0,     0,
       0,   422,   424,   395,   420,   419,   383,     0,     0,     0,
     417,     0,     0,    77,   173,     0,   175,   487,   485,   483,
       0,     0,     0,     0,     0,     0,     0,     0,   376,   495,
       0,   470,   492,   497,   240,     0,   234,   246,     0,   245,
     229,    86,     0,    60,     0,     0,   221,   214,     0,   446,
     442,    93,    97,    95,     0,     0,     0,   134,   149,   136,
     142,   140,   138,   144,   145,   151,   479,     0,     0,     0,
       0,   258,     0,     0,     0,     0,     0,   107,     0,     0,
     379,     0,   176,   181,   178,   157,   183,     0,     0,   159,
     164,   170,   168,   166,   172,   162,   330,   375,     0,   494,
     468,     0,     0,     0,   242,   247,   236,   243,     0,    88,
     226,   217,   220,   219,   444,   224,   223,     0,     0,   190,
     147,   279,   274,   266,   291,     0,   261,   400,   413,     0,
       0,   101,   389,     0,   386,     0,     0,   179,   174,     0,
     488,     0,     0,   496,   471,     0,   493,   498,   241,     0,
       0,    87,   222,   447,   196,   193,     0,     0,   287,     0,
       0,   288,   271,   262,   259,   423,   421,     0,   380,   177,
     182,   178,   184,   499,   501,   486,   248,   244,     0,     0,
       0,     0,   294,     0,     0,     0,   180,     0,     0,   280,
     275,   267,   292,     0,     0,   263,   390,   500,   502,     0,
       0,     0,     0,   295,   289,   281,   276,   268,   293,     0,
     290
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     9,    44,    45,    31,    32,   114,   386,
      36,   257,    34,   238,   107,   122,   258,   123,   396,   393,
     395,   392,   389,   388,   112,   239,   113,   374,   375,   373,
     372,   399,   248,   387,   249,   505,   497,   503,   500,   502,
     499,   598,    89,   155,   157,   594,   748,   130,   273,   412,
     612,   615,   614,    90,   315,   648,   312,   146,   276,   417,
     282,   419,   528,   420,   542,   620,   622,   625,   624,   623,
     626,   628,   704,   421,   621,   629,   777,   568,   660,   666,
     661,   664,   663,   662,   665,   655,   724,   775,   778,   811,
     656,   776,   779,    91,   265,   416,   619,   415,   695,   414,
     694,   150,   425,   686,   517,   521,   403,   519,   606,   520,
     685,   688,   687,   752,   757,   508,   602,   370,   491,   232,
     371,   233,   589,   490,   588,   743,   678,   790,   679,   789,
      38,    92,   194,    93,   300,   638,   766,   804,   824,    94,
     298,   636,   798,   841,   299,   710,   297,   635,   797,   840,
     296,   634,   796,   839,   191,   430,   765,   823,   849,   799,
     842,   833,    95,    96,   330,   331,    97,   161,   152,   153,
      98,   353,   356,   352,   351,   350,   349,   348,   355,   354,
     667,    99,   333,   332,   167,   339,   338,   337,   336,   335,
     334,   347,   100,   341,   340,   345,   342,   344,   343,   346,
     168,   101,   223,   357,   482,   579,   668,   302,   319,   651,
     773,   309,   557,   320,   652,   317,   649,   807,   172,   308,
     556,   324,   304,   639,   427,   323,   178,   183,   184,   306,
     640,   359,   646,   716,   643,   715,   160,    26,    42,    27,
     128,   127,    28,   270,   407,   611,   271,   522,   754,   103,
     189,   188,   170,   175,   104,   192,   105,   226,   364,   362,
     485,   740,   363,   484,   151,   283,   424,   546,   545,   472,
     569,   659,   728,   727,   584,   585,   741,   586,   738,   742,
     782,   827,   828
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -636
static const yytype_int16 yypact[] =
{
    -636,    29,    20,  -636,    22,   227,    22,    22,    22,  -636,
      84,  -636,   -84,   -77,  -636,  -636,   -72,  -636,   -48,  -636,
     -37,  -636,  -636,  -636,   -28,    22,    68,    84,  -636,  -636,
    -636,  1564,  1564,  -636,   367,  -636,   406,    16,    79,  -636,
    -636,  -636,  -636,    84,  -636,   118,  -636,  -636,  -636,     9,
      26,    32,  -636,    36,  -636,  -636,  -636,    39,    43,    47,
      50,    80,  -636,  -636,   102,  -636,   106,  -636,   116,   119,
    -636,    73,  -636,   135,   143,   151,   156,  -636,  -636,    77,
      98,   166,  -636,  -636,  -636,  -636,  -636,   164,  -636,  -636,
    -636,  -636,   269,    49,  -636,  -636,   245,     0,  -636,   206,
     817,  -636,   921,  -636,   -33,   252,   291,   -12,   263,   266,
     274,   282,  -636,  -636,    40,   285,   303,   307,   322,   328,
     334,   338,  -636,  -636,   566,   -37,  -636,    18,    13,  -636,
     324,   216,  1414,  -636,  -636,  -636,  -636,   279,   283,   295,
    -636,  -636,   348,  -636,  -636,  -636,  -636,  -636,  -636,  -636,
      96,  -636,   566,   566,   319,  -636,   323,  -636,   327,   331,
     325,   566,  -636,  -636,  -636,  -636,  -636,  2051,  2051,  -636,
     566,  -636,   566,  -636,  -636,   566,   475,   326,   566,  -636,
     566,  -636,  -636,   566,   566,  -636,  -636,  -636,   566,   566,
    -636,  1564,  1564,  -636,  1564,  -636,  -636,  -636,  -636,  -636,
    -636,  -636,  -636,  -636,  -636,  -636,  -636,  -636,  -636,  -636,
    -636,  -636,  -636,  -636,  -636,  -636,  -636,  -636,  -636,  -636,
    -636,  -636,  -636,  2138,  -636,  -636,     7,  -636,  -636,   385,
     390,   395,     6,  -636,  -636,  -636,  -636,  -636,   432,   367,
     408,   421,   424,   425,   429,   430,   433,   434,  -636,  -636,
    -636,  -636,     3,  -636,  -636,   440,  -636,   257,   406,  -636,
    -636,  1414,   435,  -636,  -636,  -636,     5,  -636,   369,  -636,
    -636,  -636,  -636,   384,  -636,  -636,  -636,  -636,  -636,  -636,
    -636,  -636,  1414,    82,  -636,  -636,  -636,  -636,  -636,  -636,
    -636,  -636,  -636,   379,  -636,  -636,  2051,  2051,  1877,  1564,
    1877,   860,  -636,   396,  1877,  -636,  1877,  -636,  1877,  1877,
    -636,  -636,   380,   431,  -636,  1414,  -636,  1877,   439,  1877,
    1877,  -636,  -636,  1564,  1564,  -636,  -636,   382,   383,  -636,
    1790,  1790,  1877,  1877,  2051,  2051,  2051,  2051,  2051,  2051,
    2051,  2051,  2051,  2051,  2051,  2051,  2051,  1448,  1877,  1877,
    1877,  1877,  1877,  1877,  2051,    18,    18,  -636,  -636,   566,
    -636,  -636,  -636,  -636,   566,   389,   392,  -636,  -636,  -636,
    -636,   -12,   566,   566,   566,   566,  -636,  -636,  -636,   393,
    -636,  -636,   394,  -636,  -636,   499,   277,    40,   566,   566,
    -636,  -636,   566,   566,  -636,   118,   566,    84,  -636,  -636,
    -636,  -636,  -636,    18,  -636,  -636,  -636,    18,   462,   463,
     465,   466,  -636,  -636,    18,    18,    18,  1414,   419,   683,
     415,   477,  -636,  -636,  -636,   118,  -636,  1564,   703,   770,
     502,  -636,   422,   423,   184,   276,   206,   206,  -636,   566,
     258,   300,   566,   365,   401,   426,   427,  -636,  -636,  -636,
    -636,   478,  -636,   860,   860,   860,   860,   860,   860,   396,
     396,   468,   468,   468,   468,   468,   437,   438,  -636,  -636,
    -636,   290,  -636,   206,   206,   206,   206,   206,  -636,   795,
     488,   488,  2138,  -636,   566,  1964,  -636,  -636,   442,  -636,
    1414,  1564,  -636,  -636,  -636,  -636,  -636,   566,   443,   566,
     118,  -636,   940,   566,  -636,   566,  -636,  -636,  -636,  -636,
    -636,  -636,  -636,  -636,   109,  -636,   514,    18,   270,   436,
     492,    18,    18,   488,  -636,   524,  -636,  -636,  1414,   286,
     354,   488,  -636,  -636,  -636,  -636,  -636,  -636,  -636,  -636,
    -636,  -636,  1414,  -636,  -636,  1414,   451,  -636,   446,  -636,
    -636,  -636,   447,  -636,  -636,  -636,   -43,   -39,   505,  -636,
    -636,   448,  -636,  -636,  -636,  -636,  -636,  -636,  1824,   121,
    -636,  -636,  -636,  -636,  -636,  -636,  -636,  -636,  -636,  -636,
    -636,  -636,     4,   206,   459,   515,   539,   471,   -35,   470,
     522,   553,  -636,   482,   -34,  -636,   109,  -636,  -636,   522,
    -636,  -636,  1564,  -636,   488,  -636,    18,  -636,  -636,  -636,
      21,   583,  1414,  -636,   118,   566,  -636,  -636,  -636,    18,
    1414,  1414,  1414,  1414,  1414,  1414,  1414,   522,  -636,  1414,
    -636,   533,   -22,  -636,  1448,  1448,  1877,  -636,  1677,  1877,
    1877,  -636,  -636,  -636,  -636,  -636,  -636,   566,  1414,  1877,
    -636,  1877,  1877,   536,   391,   481,   535,  -636,  -636,  -636,
    1448,  1448,  1448,  1448,  1448,  1448,  1448,  1877,  2138,  -636,
     490,  -636,  -636,  -636,  -636,   442,  -636,   503,   491,   561,
    -636,  -636,   443,  -636,   588,    18,   488,  -636,    18,  -636,
    -636,  -636,   109,  -636,   217,   217,   504,  -636,   522,   522,
     522,   522,   522,   522,  1414,   522,  -636,   210,   589,   587,
     576,  -636,   592,    85,   125,  1877,  1877,  -636,    66,   418,
     206,   153,  -636,  -636,  1448,  -636,  -636,  1448,   519,   280,
     183,    25,    25,    25,    25,  -636,  -636,  -636,  1877,  -636,
       7,   520,   451,  1414,  -636,  -636,  -636,  -636,   118,  -636,
    -636,   488,    18,   488,   583,  -636,  -636,   507,   513,  -636,
    -636,  -636,  -636,  -636,  -636,   -17,   586,  -636,  -636,   159,
     163,  -636,  -636,   -39,  -636,  1448,  1448,   290,  -636,  1448,
    -636,   581,   -14,   206,  -636,   526,  -636,   539,   522,  1414,
     470,   109,  -636,  -636,  -636,  -636,  1877,  1877,  1877,  1448,
     534,  -636,  -636,  -636,  -636,  -636,  -636,  1877,  -636,   290,
     290,  1448,   290,  -636,  -636,  -636,   522,  -636,   523,   525,
     527,   677,  -636,  1448,  1564,   172,  -636,  1414,   519,  -636,
    -636,  -636,  -636,  1564,   754,  -636,  -636,   522,   608,  1677,
    1677,  1677,  1564,  -636,  -636,  -636,  -636,  -636,  -636,  1564,
    -636
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -636,  -636,  -636,  -636,  -636,  -636,  -636,  -636,  -636,  -636,
    -636,  -636,  -636,  -636,  -636,   413,  -636,  -636,  -636,  -636,
    -636,  -636,  -636,  -636,   412,  -636,  -636,  -636,  -636,  -636,
    -636,  -636,   287,  -636,  -636,  -636,  -636,  -636,  -636,  -636,
    -636,  -636,    -4,  -636,  -636,   -29,  -636,  -636,  -636,  -636,
    -636,  -636,  -636,   595,  -636,  -636,    17,   773,   -38,  -636,
    -636,   -93,  -636,    54,  -636,  -636,  -636,  -636,  -636,  -636,
    -636,   -32,  -636,  -636,  -636,  -636,  -288,  -636,  -636,  -636,
    -636,  -636,  -636,  -636,  -636,  -636,  -636,  -636,  -136,  -636,
    -636,  -636,  -636,   299,   -41,  -636,  -636,  -636,  -636,  -636,
    -636,  -393,  -636,  -102,  -636,  -636,  -636,  -636,  -636,  -636,
    -636,  -636,  -605,  -636,   -19,  -636,  -636,  -636,  -636,   306,
    -636,  -636,  -636,  -636,     8,  -636,  -108,  -636,  -636,  -636,
     560,   -27,  -636,  -138,  -636,  -636,  -636,  -636,  -636,  -635,
    -636,  -636,  -636,  -636,  -636,  -636,  -636,  -636,  -636,  -636,
    -636,  -636,  -636,  -636,  -636,  -624,  -636,  -636,  -636,  -636,
    -636,  -636,  -636,  -636,  -636,  -636,  -320,  -636,  -636,  -636,
    -235,  -636,  -636,  -636,  -636,  -636,  -636,  -636,  -636,  -636,
    -636,  -259,  -636,  -636,  -636,  -636,  -636,  -636,  -636,  -636,
    -636,  -636,  -159,  -636,  -636,  -636,  -636,  -636,  -636,  -636,
    -636,  -636,  -636,  -636,  -636,    19,  -636,   -31,  -636,  -636,
    -636,  -636,  -636,  -636,  -636,  -636,  -636,  -636,  -636,  -636,
    -636,  -636,  -636,  -636,  -636,  -636,  -636,  -636,  -636,  -636,
    -636,  -636,   -85,  -636,  -636,  -636,  -636,   296,   649,    11,
    -636,  -636,   302,  -636,  -636,  -636,  -598,  -636,  -636,  -636,
    -636,  -636,  -636,  -636,   989,  -636,   333,  -636,  -636,   -45,
    -636,  -636,  -636,  -636,   -79,  -636,  -636,  -636,  -636,  -636,
    -636,  -636,  -636,  -636,  -636,   -42,  -636,  -540,  -636,  -636,
    -127,  -636,  -636
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -255
static const yytype_int16 yytable[] =
{
     102,   102,   514,   711,   149,   106,   632,   147,   301,   303,
     449,   450,   709,   690,   696,   229,   224,   230,   673,   641,
      -2,    46,   268,   644,   390,   266,   814,   675,   682,     3,
      29,   368,   547,   800,     4,   801,     4,    30,    43,   277,
     196,   144,    33,   369,     5,   434,    49,   435,   267,   436,
     437,    50,    51,    52,    43,     6,   240,     6,   441,   471,
     443,   444,   197,   431,   669,   433,    35,   241,   404,   242,
     243,   244,   245,   451,   452,  -254,   124,    37,   125,   642,
      41,   269,   225,   645,   404,  -254,  -254,   676,   683,   473,
     474,   475,   476,   477,    24,    39,   706,    25,     4,  -254,
     261,  -254,   231,   802,   815,   126,   576,   596,   133,   134,
     135,   136,   137,   138,   139,    71,   140,   391,   478,     6,
     670,    46,   284,   144,   360,   154,   361,   405,   144,   413,
     141,    85,   262,     7,     8,     7,     8,   428,   429,   246,
     577,   263,   156,   689,   285,   286,    49,   792,   158,   198,
     199,    50,    51,    52,   247,   159,   793,   285,   286,   287,
     102,   102,   162,   102,   327,   328,   163,   329,   401,  -254,
     164,  -254,   287,   165,   820,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   771,   198,
     199,   185,   358,   131,   176,   479,   177,     7,     8,   422,
     132,   423,   787,   166,   845,   846,   847,   767,   133,   134,
     135,   136,   137,   138,   139,    71,   140,   198,   199,   186,
      46,   692,   440,   198,   199,   169,   583,   198,   199,   171,
     141,    85,   142,    12,    13,    14,   198,   199,   657,   173,
     658,   143,   174,    15,   418,    49,   554,   768,   198,   199,
      50,    51,    52,   480,   481,    16,    17,   144,   179,   570,
      18,   573,   574,   575,   576,    19,   180,   102,   102,   102,
     198,   199,   432,   571,   181,   774,   267,   267,   144,   182,
     654,   805,   397,   398,   190,   806,   572,   187,   573,   574,
     575,   576,   102,   102,   836,   193,   445,   446,   577,   102,
     102,   518,   506,   507,    10,   523,    11,   195,    21,    22,
      23,   144,   529,   530,   531,   227,    20,   228,   712,   761,
     559,   413,   102,   234,   267,   577,   235,    40,   267,   274,
      85,    86,   605,   404,   236,   267,   267,   267,   555,   570,
     198,   199,   237,   469,   148,   250,   707,   708,   617,   404,
     272,   144,   144,   571,   149,   791,   572,   147,   573,   574,
     575,   576,   560,   251,   198,   199,   572,   252,   573,   574,
     575,   576,   729,   730,   731,   732,   733,   734,   735,   532,
     713,   714,   253,   108,   149,   109,   110,   147,   254,   111,
     719,   144,   720,   721,   255,   577,   102,   590,   256,   144,
     548,   431,   278,   144,   408,   577,   279,   409,   281,   599,
     144,   144,   144,   144,   410,   604,   618,   404,   280,   609,
     610,   144,   115,   116,   117,   118,   148,   562,   119,   198,
     199,   148,   736,   290,   411,   616,   120,   291,   267,   780,
     570,   292,   267,   267,   293,   365,   294,   121,   314,   627,
     366,   580,   630,   723,   571,   367,   769,   770,   376,   149,
     102,   394,   147,   563,   591,   198,   199,   572,   378,   573,
     574,   575,   576,   208,   209,   210,   211,   212,    46,   783,
     772,   379,   198,   199,   380,   381,   144,   809,   810,   382,
     383,   812,   406,   384,   385,   402,   144,   426,   144,   439,
     438,   442,   447,    49,   712,   448,   577,   501,    50,    51,
      52,   821,   488,   144,   504,   489,   498,   144,   144,   712,
     712,   712,   524,   525,   144,   526,   527,   267,   698,   699,
     700,   701,   702,   703,   533,   834,   705,   543,   144,   544,
     267,   144,   551,   199,   552,   553,   564,   565,   825,   212,
     566,   404,   567,   603,   608,   718,   587,   593,   607,   613,
     148,   818,   819,   431,   469,   631,   633,   647,   637,    46,
     650,   102,    71,   149,   418,   684,   147,   671,   672,   673,
     674,   148,   697,   751,   677,   413,   753,    84,    85,    86,
     680,   681,   268,   669,    49,   311,   722,   726,    88,    50,
      51,    52,   144,   725,   739,   102,   267,   102,   144,   267,
     144,   627,   745,   746,   148,   144,   144,   144,   144,   144,
     144,   144,   144,   747,   750,   144,   759,   763,   764,   794,
     469,   469,   196,   781,   785,   795,   102,   580,   570,   803,
     145,   813,   670,   822,   144,   829,   148,   830,   814,   831,
     788,   377,   571,   749,   148,   148,   469,   469,   469,   469,
     469,   469,   469,    71,   717,   572,   691,   573,   574,   575,
     576,   400,   760,   267,   509,   826,   758,   492,    84,    85,
      86,   144,   817,   744,   144,   260,   835,   737,   808,    88,
     755,   755,   129,   516,   148,   784,   816,   487,   762,   786,
     144,   838,   148,     0,   577,     0,   148,   149,     0,     0,
     147,     0,     0,   148,   148,   148,   148,     0,     0,     0,
     469,     0,   145,   469,   148,     0,   570,   145,     0,     0,
       0,   534,   535,     0,   837,     0,     0,     0,     0,   144,
     571,     0,     0,     0,   144,   536,   413,     0,   144,     0,
       0,     0,     0,   572,     0,   573,   574,   575,   576,   537,
       0,   538,   539,   540,   541,   102,   102,   102,     0,     0,
       0,   469,   469,     0,     0,   469,     0,     0,   206,   207,
     208,   209,   210,   211,   212,   144,   832,     0,     0,   148,
       0,     0,   577,   102,     0,   469,     0,     0,     0,   148,
       0,   148,   102,   570,     0,     0,   843,   469,   102,   102,
     102,   102,   549,     0,     0,   848,   148,   571,   102,   469,
     148,   148,   850,   144,     0,     0,     0,   148,     0,     0,
     572,     0,   573,   574,   575,   576,     0,     0,     0,     0,
       0,   148,     0,     0,   148,   206,   207,   208,   209,   210,
     211,   212,     0,     0,     0,     0,   145,     0,     0,     0,
       0,     0,     0,   844,     0,     0,     0,   148,     0,   577,
     206,   207,   208,   209,   210,   211,   212,   145,     0,   550,
       0,     0,     0,     0,     0,     0,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,     0,
     264,     0,     0,     0,   578,   148,     0,     0,     0,     0,
     145,   148,     0,   148,     0,     0,     0,     0,   148,   148,
     148,   148,   148,   148,   148,   148,   213,     0,   148,     0,
       0,     0,     0,   148,   148,   206,   207,   208,   209,   210,
     211,   212,   145,    46,     0,     0,     0,   148,     0,     0,
     145,   145,     0,     0,     0,     0,     0,     0,     0,   148,
     148,   148,   148,   148,   148,   148,     0,     0,    49,     0,
     597,     0,     0,    50,    51,    52,   214,   215,   216,   217,
     218,   219,   220,     0,   148,     0,     0,   148,   221,   222,
     145,     0,     0,   756,   756,     0,     0,     0,   145,     0,
       0,     0,   145,   148,     0,     0,     0,     0,     0,   145,
     145,   145,   145,     0,     0,   131,     0,     0,     0,     0,
     145,     0,   132,   148,     0,     0,   148,     0,     0,     0,
     133,   134,   135,   136,     0,     0,   275,    71,   140,     0,
       0,     0,   148,     0,     0,     0,     0,   148,     0,     0,
       0,   148,   141,    85,   142,     0,     0,     0,     0,     0,
       0,     0,     0,   143,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   148,   148,     0,     0,   148,     0,
       0,     0,     0,     0,     0,   145,     0,     0,   148,     0,
       0,     0,     0,     0,     0,   145,     0,   145,   148,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     148,     0,   145,   259,     0,     0,   145,   145,     0,     0,
     470,     0,   148,   145,     0,     0,   148,     0,   264,   264,
       0,     0,     0,     0,     0,     0,     0,   145,     0,     0,
     145,   288,   289,     0,     0,     0,     0,     0,     0,     0,
     295,     0,     0,     0,     0,     0,     0,     0,     0,   305,
       0,   307,     0,   145,   310,   313,     0,   316,     0,   318,
       0,     0,   321,   322,     0,     0,   264,   325,   326,     0,
     264,     0,     0,     0,     0,     0,     0,   264,   264,   264,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   145,     0,     0,     0,     0,     0,   145,     0,   145,
       0,     0,     0,     0,   145,   145,   145,   145,   145,   145,
     145,   145,     0,     0,   145,     0,     0,     0,     0,   145,
     145,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   145,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   145,   145,   145,   145,   145,
     145,   145,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     145,     0,     0,   145,     0,     0,     0,     0,     0,     0,
     264,     0,     0,     0,   264,   264,     0,     0,     0,   145,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   145,
       0,     0,   145,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   145,     0,
       0,   470,     0,   145,     0,     0,     0,   145,   483,     0,
       0,     0,     0,   486,     0,     0,     0,     0,     0,     0,
       0,   493,   494,   495,   496,     0,     0,     0,     0,     0,
     145,   145,     0,     0,   145,     0,     0,   510,   511,   264,
       0,   512,   513,     0,   145,   515,     0,     0,     0,     0,
       0,     0,   264,     0,   145,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   145,   470,   470,     0,
       0,     0,     0,     0,     0,     0,     0,    46,   145,     0,
       0,     0,   145,     0,     0,     0,     0,     0,   558,     0,
       0,   561,     0,   470,   470,   470,   470,   470,   470,   470,
       0,     0,    49,     0,     0,     0,     0,    50,    51,    52,
       0,    46,     0,     0,     0,     0,     0,     0,   264,     0,
       0,   264,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   581,     0,     0,    49,     0,     0,     0,
       0,    50,    51,    52,     0,     0,   592,     0,   595,   131,
       0,     0,   600,     0,   601,     0,   132,   470,     0,     0,
     470,     0,     0,     0,   133,   134,   135,   136,     0,     0,
     275,    71,   140,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   466,     0,   264,   141,    85,   142,     0,
       0,     0,     0,     0,     0,     0,     0,   143,   133,   134,
     135,   136,     0,     0,   275,    71,   140,     0,   470,   470,
       0,     0,   470,     0,   467,     0,     0,     0,     0,     0,
     141,    85,    86,     0,     0,     0,     0,    46,    47,     0,
       0,   468,   470,     0,     0,    48,     0,     0,     0,     0,
       0,     0,     0,     0,   470,     0,     0,     0,     0,     0,
       0,     0,    49,     0,     0,     0,   470,    50,    51,    52,
       0,     0,     0,     0,   693,    53,    54,    55,    56,    57,
      58,    59,     0,     0,     0,    60,     0,     0,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      62,     0,     0,     0,     0,     0,   313,     0,     0,    63,
       0,     0,     0,     0,     0,     0,     0,     0,    64,    65,
      66,    67,    68,    69,     0,     0,     0,    70,     0,     0,
       0,    71,     0,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,     0,    82,    83,    84,    85,    86,     0,
      46,    47,     0,     0,     0,    87,     0,    88,    48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,     0,     0,     0,     0,
      50,    51,    52,     0,     0,     0,     0,     0,    53,    54,
      55,    56,    57,    58,    59,     0,     0,     0,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    62,     0,     0,     0,     0,     0,     0,
       0,     0,    63,     0,     0,     0,     0,     0,     0,     0,
       0,    64,    65,    66,    67,    68,    69,     0,     0,     0,
      70,     0,     0,     0,    71,     0,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,     0,    82,    83,    84,
      85,    86,     0,    46,    47,     0,     0,     0,    87,     0,
      88,    48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,     0,
       0,     0,     0,    50,    51,    52,     0,    46,     0,     0,
       0,    53,    54,    55,    56,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,     0,     0,     0,    62,    50,    51,    52,
       0,     0,     0,     0,     0,    63,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,    66,    67,    68,    69,
      46,     0,     0,    70,     0,     0,     0,    71,     0,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,   466,
      82,    83,    84,    85,    86,    49,     0,     0,     0,     0,
      50,    51,    52,    88,   133,   134,   135,   136,    53,     0,
     275,    71,   140,     0,     0,     0,     0,     0,     0,     0,
     467,     0,     0,     0,     0,     0,   141,    85,   653,     0,
       0,     0,     0,    62,     0,     0,     0,   468,     0,     0,
       0,     0,    63,     0,     0,     0,     0,     0,     0,     0,
       0,    64,    65,    66,    67,    68,    69,    46,     0,     0,
      70,     0,     0,     0,    71,     0,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,     0,    82,    83,    84,
      85,    86,    49,     0,     0,     0,     0,    50,    51,    52,
      88,     0,     0,     0,     0,    53,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      62,     0,     0,     0,     0,     0,     0,     0,     0,    63,
       0,     0,     0,     0,     0,     0,     0,     0,    64,    65,
      66,    67,    68,    69,    46,     0,     0,    70,     0,     0,
       0,    71,     0,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,     0,    82,    83,    84,    85,   582,    49,
       0,     0,     0,     0,    50,    51,    52,    88,     0,     0,
       0,     0,    53,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    63,     0,     0,     0,
       0,     0,     0,     0,     0,    64,    65,    66,    67,    68,
      69,    46,     0,     0,    70,     0,     0,     0,    71,     0,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
       0,    82,    83,    84,    85,    86,    49,     0,     0,     0,
       0,    50,    51,    52,    88,     0,     0,     0,     0,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    65,    66,    67,    68,    69,     0,     0,
       0,    70,     0,     0,     0,    71,     0,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,     0,    82,    83,
      84,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,    88
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-636))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      31,    32,   395,   638,    45,    32,   546,    45,   167,   168,
     330,   331,   636,   611,   619,    27,    49,    29,    40,    62,
       0,     3,     9,    62,    21,   127,    40,    62,    62,     0,
     114,    25,   425,    50,    14,    52,    14,   114,    27,   132,
      40,    45,   114,    37,    24,   304,    28,   306,   127,   308,
     309,    33,    34,    35,    43,    35,    16,    35,   317,   347,
     319,   320,    62,   298,    60,   300,   114,    27,    63,    29,
      30,    31,    32,   332,   333,    26,    60,   114,    62,   122,
      12,    68,   115,   122,    63,    36,    37,   122,   122,   348,
     349,   350,   351,   352,    10,   123,   118,    13,    14,    50,
      82,    52,   114,   120,   118,    26,    81,   500,    90,    91,
      92,    93,    94,    95,    96,    97,    98,   114,   353,    35,
     116,     3,    26,   127,   117,   116,   119,   122,   132,    63,
     112,   113,   114,   113,   114,   113,   114,   296,   297,    99,
     115,   123,   116,   122,    48,    49,    28,   752,   116,    64,
      65,    33,    34,    35,   114,   119,   754,    48,    49,    63,
     191,   192,   123,   194,   191,   192,   123,   194,   261,   120,
     123,   122,    63,   123,   798,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   122,    64,
      65,   114,   223,    75,   121,   354,   123,   113,   114,   117,
      82,   119,   742,   123,   839,   840,   841,   122,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    64,    65,   121,
       3,   614,   315,    64,    65,   123,   485,    64,    65,   123,
     112,   113,   114,     6,     7,     8,    64,    65,   117,   123,
     119,   123,   123,    16,   282,    28,    62,   122,    64,    65,
      33,    34,    35,   355,   356,    28,    29,   261,   123,    49,
      33,    78,    79,    80,    81,    38,   123,   298,   299,   300,
      64,    65,   299,    63,   123,   122,   355,   356,   282,   123,
     568,   122,    25,    26,   120,   122,    76,   121,    78,    79,
      80,    81,   323,   324,   122,    26,   323,   324,   115,   330,
     331,   403,    25,    26,     2,   407,     4,    62,     6,     7,
       8,   315,   414,   415,   416,    63,    89,    26,   638,   109,
      62,    63,   353,    60,   403,   115,    60,    25,   407,   113,
     113,   114,    62,    63,    60,   414,   415,   416,    62,    49,
      64,    65,    60,   347,    45,    60,   634,   635,    62,    63,
      26,   355,   356,    63,   395,   748,    76,   395,    78,    79,
      80,    81,    62,    60,    64,    65,    76,    60,    78,    79,
      80,    81,   660,   661,   662,   663,   664,   665,   666,   417,
     639,   640,    60,    16,   425,    18,    19,   425,    60,    22,
     649,   395,   651,   652,    60,   115,   427,   490,    60,   403,
     427,   636,   123,   407,    20,   115,   123,    23,    60,   502,
     414,   415,   416,   417,    30,   517,    62,    63,   123,   521,
     522,   425,    16,    17,    18,    19,   127,    62,    22,    64,
      65,   132,   667,   114,    50,   528,    30,   114,   517,   727,
      49,   114,   521,   522,   113,    60,   121,    41,   122,   542,
      60,   482,   545,    62,    63,    60,   715,   716,    26,   500,
     491,    21,   500,    62,   491,    64,    65,    76,    60,    78,
      79,    80,    81,    77,    78,    79,    80,    81,     3,   738,
      62,    60,    64,    65,    60,    60,   490,   775,   776,    60,
      60,   779,   123,    60,    60,    60,   500,   118,   502,    68,
     120,    62,   120,    28,   824,   122,   115,   113,    33,    34,
      35,   799,   123,   517,    15,   123,   123,   521,   522,   839,
     840,   841,    60,    60,   528,    60,    60,   606,   621,   622,
     623,   624,   625,   626,   115,   823,   629,   122,   542,    62,
     619,   545,    40,    65,   122,   122,   120,   120,   807,    81,
     113,    63,   114,    39,    62,   648,   114,   114,   122,    35,
     261,   796,   797,   798,   568,   114,   120,    62,   121,     3,
     122,   602,    97,   614,   612,   602,   614,   118,    63,    40,
     109,   282,   620,   685,   114,    63,   688,   112,   113,   114,
      37,   109,     9,    60,    28,   120,    60,    62,   123,    33,
      34,    35,   606,   122,   114,   636,   685,   638,   612,   688,
     614,   704,   109,   122,   315,   619,   620,   621,   622,   623,
     624,   625,   626,    62,    36,   629,   122,    40,    52,   122,
     634,   635,    40,   114,   114,   122,   667,   668,    49,    53,
      45,    60,   116,   109,   648,   122,   347,   122,    40,   122,
     743,   239,    63,   682,   355,   356,   660,   661,   662,   663,
     664,   665,   666,    97,   647,    76,   612,    78,    79,    80,
      81,   258,   704,   752,   387,   811,   695,   371,   112,   113,
     114,   685,   790,   675,   688,   125,   824,   668,   773,   123,
     694,   695,    43,   397,   395,   740,   789,   364,   109,   741,
     704,   828,   403,    -1,   115,    -1,   407,   748,    -1,    -1,
     748,    -1,    -1,   414,   415,   416,   417,    -1,    -1,    -1,
     724,    -1,   127,   727,   425,    -1,    49,   132,    -1,    -1,
      -1,    48,    49,    -1,   827,    -1,    -1,    -1,    -1,   743,
      63,    -1,    -1,    -1,   748,    62,    63,    -1,   752,    -1,
      -1,    -1,    -1,    76,    -1,    78,    79,    80,    81,    76,
      -1,    78,    79,    80,    81,   796,   797,   798,    -1,    -1,
      -1,   775,   776,    -1,    -1,   779,    -1,    -1,    75,    76,
      77,    78,    79,    80,    81,   789,   109,    -1,    -1,   490,
      -1,    -1,   115,   824,    -1,   799,    -1,    -1,    -1,   500,
      -1,   502,   833,    49,    -1,    -1,   833,   811,   839,   840,
     841,   842,   109,    -1,    -1,   842,   517,    63,   849,   823,
     521,   522,   849,   827,    -1,    -1,    -1,   528,    -1,    -1,
      76,    -1,    78,    79,    80,    81,    -1,    -1,    -1,    -1,
      -1,   542,    -1,    -1,   545,    75,    76,    77,    78,    79,
      80,    81,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    -1,    -1,    -1,   568,    -1,   115,
      75,    76,    77,    78,    79,    80,    81,   282,    -1,   109,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    -1,
     127,    -1,    -1,    -1,   109,   606,    -1,    -1,    -1,    -1,
     315,   612,    -1,   614,    -1,    -1,    -1,    -1,   619,   620,
     621,   622,   623,   624,   625,   626,   109,    -1,   629,    -1,
      -1,    -1,    -1,   634,   635,    75,    76,    77,    78,    79,
      80,    81,   347,     3,    -1,    -1,    -1,   648,    -1,    -1,
     355,   356,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   660,
     661,   662,   663,   664,   665,   666,    -1,    -1,    28,    -1,
      30,    -1,    -1,    33,    34,    35,    55,    56,    57,    58,
      59,    60,    61,    -1,   685,    -1,    -1,   688,    67,    68,
     395,    -1,    -1,   694,   695,    -1,    -1,    -1,   403,    -1,
      -1,    -1,   407,   704,    -1,    -1,    -1,    -1,    -1,   414,
     415,   416,   417,    -1,    -1,    75,    -1,    -1,    -1,    -1,
     425,    -1,    82,   724,    -1,    -1,   727,    -1,    -1,    -1,
      90,    91,    92,    93,    -1,    -1,    96,    97,    98,    -1,
      -1,    -1,   743,    -1,    -1,    -1,    -1,   748,    -1,    -1,
      -1,   752,   112,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   775,   776,    -1,    -1,   779,    -1,
      -1,    -1,    -1,    -1,    -1,   490,    -1,    -1,   789,    -1,
      -1,    -1,    -1,    -1,    -1,   500,    -1,   502,   799,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     811,    -1,   517,   124,    -1,    -1,   521,   522,    -1,    -1,
     347,    -1,   823,   528,    -1,    -1,   827,    -1,   355,   356,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   542,    -1,    -1,
     545,   152,   153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,
      -1,   172,    -1,   568,   175,   176,    -1,   178,    -1,   180,
      -1,    -1,   183,   184,    -1,    -1,   403,   188,   189,    -1,
     407,    -1,    -1,    -1,    -1,    -1,    -1,   414,   415,   416,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   606,    -1,    -1,    -1,    -1,    -1,   612,    -1,   614,
      -1,    -1,    -1,    -1,   619,   620,   621,   622,   623,   624,
     625,   626,    -1,    -1,   629,    -1,    -1,    -1,    -1,   634,
     635,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   648,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   660,   661,   662,   663,   664,
     665,   666,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     685,    -1,    -1,   688,    -1,    -1,    -1,    -1,    -1,    -1,
     517,    -1,    -1,    -1,   521,   522,    -1,    -1,    -1,   704,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   724,
      -1,    -1,   727,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   743,    -1,
      -1,   568,    -1,   748,    -1,    -1,    -1,   752,   359,    -1,
      -1,    -1,    -1,   364,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   372,   373,   374,   375,    -1,    -1,    -1,    -1,    -1,
     775,   776,    -1,    -1,   779,    -1,    -1,   388,   389,   606,
      -1,   392,   393,    -1,   789,   396,    -1,    -1,    -1,    -1,
      -1,    -1,   619,    -1,   799,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   811,   634,   635,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,   823,    -1,
      -1,    -1,   827,    -1,    -1,    -1,    -1,    -1,   439,    -1,
      -1,   442,    -1,   660,   661,   662,   663,   664,   665,   666,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,   685,    -1,
      -1,   688,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   484,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,    -1,    -1,   497,    -1,   499,    75,
      -1,    -1,   503,    -1,   505,    -1,    82,   724,    -1,    -1,
     727,    -1,    -1,    -1,    90,    91,    92,    93,    -1,    -1,
      96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,   752,   112,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    90,    91,
      92,    93,    -1,    -1,    96,    97,    98,    -1,   775,   776,
      -1,    -1,   779,    -1,   106,    -1,    -1,    -1,    -1,    -1,
     112,   113,   114,    -1,    -1,    -1,    -1,     3,     4,    -1,
      -1,   123,   799,    -1,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   811,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,   823,    33,    34,    35,
      -1,    -1,    -1,    -1,   615,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    51,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,   647,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,
      86,    87,    88,    89,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    97,    -1,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,    -1,   110,   111,   112,   113,   114,    -1,
       3,     4,    -1,    -1,    -1,   121,    -1,   123,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    41,    42,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,    88,    89,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    97,    -1,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,    -1,   110,   111,   112,
     113,   114,    -1,     3,     4,    -1,    -1,    -1,   121,    -1,
     123,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    33,    34,    35,    -1,     3,    -1,    -1,
      -1,    41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    66,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,    89,
       3,    -1,    -1,    93,    -1,    -1,    -1,    97,    -1,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,    75,
     110,   111,   112,   113,   114,    28,    -1,    -1,    -1,    -1,
      33,    34,    35,   123,    90,    91,    92,    93,    41,    -1,
      96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,    -1,   112,   113,   114,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,    88,    89,     3,    -1,    -1,
      93,    -1,    -1,    -1,    97,    -1,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,    -1,   110,   111,   112,
     113,   114,    28,    -1,    -1,    -1,    -1,    33,    34,    35,
     123,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,
      86,    87,    88,    89,     3,    -1,    -1,    93,    -1,    -1,
      -1,    97,    -1,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,    -1,   110,   111,   112,   113,   114,    28,
      -1,    -1,    -1,    -1,    33,    34,    35,   123,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,
      89,     3,    -1,    -1,    93,    -1,    -1,    -1,    97,    -1,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,   112,   113,   114,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,   123,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    85,    86,    87,    88,    89,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    97,    -1,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,    -1,   110,   111,
     112,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   125,   126,     0,    14,    24,    35,   113,   114,   127,
     366,   366,     6,     7,     8,    16,    28,    29,    33,    38,
      89,   366,   366,   366,    10,    13,   361,   363,   366,   114,
     114,   130,   131,   114,   136,   114,   134,   114,   254,   123,
     366,    12,   362,   363,   128,   129,     3,     4,    11,    28,
      33,    34,    35,    41,    42,    43,    44,    45,    46,    47,
      51,    54,    66,    75,    84,    85,    86,    87,    88,    89,
      93,    97,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   110,   111,   112,   113,   114,   121,   123,   166,
     177,   217,   255,   257,   263,   286,   287,   290,   294,   305,
     316,   325,   331,   373,   378,   380,   255,   138,    16,    18,
      19,    22,   148,   150,   132,    16,    17,    18,    19,    22,
      30,    41,   139,   141,    60,    62,    26,   365,   364,   362,
     171,    75,    82,    90,    91,    92,    93,    94,    95,    96,
      98,   112,   114,   123,   166,   177,   181,   182,   217,   218,
     225,   388,   292,   293,   116,   167,   116,   168,   116,   119,
     360,   291,   123,   123,   123,   123,   123,   308,   324,   123,
     376,   123,   342,   123,   123,   377,   121,   123,   350,   123,
     123,   123,   123,   351,   352,   114,   121,   121,   375,   374,
     120,   278,   379,    26,   256,    62,    40,    62,    64,    65,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,   109,    55,    56,    57,    58,    59,    60,
      61,    67,    68,   326,    49,   115,   381,    63,    26,    27,
      29,   114,   243,   245,    60,    60,    60,    60,   137,   149,
      16,    27,    29,    30,    31,    32,    99,   114,   156,   158,
      60,    60,    60,    60,    60,    60,    60,   135,   140,   378,
     254,    82,   114,   123,   181,   218,   227,   388,     9,    68,
     367,   370,    26,   172,   113,    96,   182,   185,   123,   123,
     123,    60,   184,   389,    26,    48,    49,    63,   378,   378,
     114,   114,   114,   113,   121,   378,   274,   270,   264,   268,
     258,   316,   331,   316,   346,   378,   353,   378,   343,   335,
     378,   120,   180,   378,   122,   178,   378,   339,   378,   332,
     337,   378,   378,   349,   345,   378,   378,   255,   255,   255,
     288,   289,   307,   306,   314,   313,   312,   311,   310,   309,
     318,   317,   320,   322,   321,   319,   323,   315,   301,   300,
     299,   298,   297,   295,   303,   302,   296,   327,   331,   355,
     117,   119,   383,   386,   382,    60,    60,    60,    25,    37,
     241,   244,   154,   153,   151,   152,    26,   148,    60,    60,
      60,    60,    60,    60,    60,    60,   133,   157,   147,   146,
      21,   114,   145,   143,    21,   144,   142,    25,    26,   155,
     139,   185,    60,   230,    63,   122,   123,   368,    20,    23,
      30,    50,   173,    63,   223,   221,   219,   183,   182,   185,
     187,   197,   117,   119,   390,   226,   118,   348,   316,   316,
     279,   294,   255,   294,   305,   305,   305,   305,   120,    68,
     185,   305,    62,   305,   305,   255,   255,   120,   122,   290,
     290,   305,   305,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,    75,   106,   123,   166,
     181,   200,   393,   305,   305,   305,   305,   305,   294,   316,
     227,   227,   328,   378,   387,   384,   378,   380,   123,   123,
     247,   242,   243,   378,   378,   378,   378,   160,   123,   164,
     162,   113,   163,   161,    15,   159,    25,    26,   239,   156,
     378,   378,   378,   378,   225,   378,   361,   228,   227,   231,
     233,   229,   371,   227,    60,    60,    60,    60,   186,   227,
     227,   227,   182,   115,    48,    49,    62,    76,    78,    79,
      80,    81,   188,   122,    62,   392,   391,   225,   255,   109,
     109,    40,   122,   122,    62,    62,   344,   336,   378,    62,
      62,   378,    62,    62,   120,   120,   113,   114,   201,   394,
      49,    63,    76,    78,    79,    80,    81,   115,   109,   329,
     331,   378,   114,   305,   398,   399,   401,   114,   248,   246,
     185,   255,   378,   114,   169,   378,   225,    30,   165,   185,
     378,   378,   240,    39,   227,    62,   232,   122,    62,   227,
     227,   369,   174,    35,   176,   175,   185,    62,    62,   220,
     189,   198,   190,   193,   192,   191,   194,   185,   195,   199,
     185,   114,   401,   120,   275,   271,   265,   121,   259,   347,
     354,    62,   122,   358,    62,   122,   356,    62,   179,   340,
     122,   333,   338,   114,   200,   209,   214,   117,   119,   395,
     202,   204,   207,   206,   205,   208,   203,   304,   330,    60,
     116,   118,    63,    40,   109,    62,   122,   114,   250,   252,
      37,   109,    62,   122,   255,   234,   227,   236,   235,   122,
     370,   187,   225,   378,   224,   222,   236,   182,   185,   185,
     185,   185,   185,   185,   196,   185,   118,   200,   200,   279,
     269,   263,   290,   305,   305,   359,   357,   180,   185,   305,
     305,   305,    60,    62,   210,   122,    62,   397,   396,   200,
     200,   200,   200,   200,   200,   200,   294,   329,   402,   114,
     385,   400,   403,   249,   248,   109,   122,    62,   170,   169,
      36,   227,   237,   227,   372,   166,   217,   238,   238,   122,
     195,   109,   109,    40,    52,   280,   260,   122,   122,   305,
     305,   122,    62,   334,   122,   211,   215,   200,   212,   216,
     200,   114,   404,   305,   383,   114,   399,   401,   185,   253,
     251,   225,   236,   370,   122,   122,   276,   272,   266,   283,
      50,    52,   120,    53,   261,   122,   122,   341,   356,   200,
     200,   213,   200,    60,    40,   118,   185,   250,   294,   294,
     279,   200,   109,   281,   262,   305,   212,   405,   406,   122,
     122,   122,   109,   285,   200,   257,   122,   185,   404,   277,
     273,   267,   284,   255,   109,   263,   263,   263,   255,   282,
     255
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 5:

/* Line 1806 of yacc.c  */
#line 151 "poet_yacc.y"
    {(yyval).ptr=insert_parameter((yyvsp[(3) - (3)]).ptr);}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 152 "poet_yacc.y"
    {finish_parameter((yyvsp[(4) - (6)])); }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 153 "poet_yacc.y"
    {(yyval).config=GLOBAL_SCOPE; }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 154 "poet_yacc.y"
    {eval_define(make_macroVar((yyvsp[(3) - (6)]).ptr),(yyvsp[(5) - (6)]).ptr); }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 155 "poet_yacc.y"
    {(yyval).config=GLOBAL_VAR; }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 155 "poet_yacc.y"
    { insert_eval((yyvsp[(4) - (5)]).ptr); }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 156 "poet_yacc.y"
    {(yyval).config=GLOBAL_VAR; }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 156 "poet_yacc.y"
    { insert_cond((yyvsp[(4) - (5)]).ptr); }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 157 "poet_yacc.y"
    { insert_trace((yyvsp[(3) - (4)])); }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 158 "poet_yacc.y"
    {(yyval).ptr=insert_code((yyvsp[(3) - (3)]).ptr);(yyval).config=0; }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 158 "poet_yacc.y"
    {(yyval).ptr = (yyvsp[(4) - (5)]).ptr; }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 159 "poet_yacc.y"
    {(yyval).ptr=insert_input(); }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 159 "poet_yacc.y"
    {(yyval).ptr=(yyvsp[(3) - (4)]).ptr; }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 160 "poet_yacc.y"
    {(yyval).ptr=insert_output(); }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 160 "poet_yacc.y"
    {(yyval).ptr=(yyvsp[(3) - (4)]).ptr; }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 161 "poet_yacc.y"
    { (yyval).ptr=insert_xform((yyvsp[(3) - (3)]).ptr); }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 162 "poet_yacc.y"
    { set_xform_def((yyvsp[(4) - (6)]).ptr,(yyvsp[(6) - (6)]).ptr); }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 164 "poet_yacc.y"
    { if ((yyvsp[(2) - (3)]).ptr==0) insert_source((yyvsp[(1) - (3)]).ptr); else insert_source(make_inputlist2((yyvsp[(1) - (3)]).ptr,(yyvsp[(2) - (3)]).ptr)); }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 166 "poet_yacc.y"
    {(yyval).ptr = (yyvsp[(0) - (1)]).ptr; }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 168 "poet_yacc.y"
    {(yyval).config=GLOBAL_SCOPE;}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 168 "poet_yacc.y"
    { set_input_debug((yyvsp[(0) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 169 "poet_yacc.y"
    { set_input_target((yyvsp[(0) - (3)]).ptr, (yyvsp[(0) - (3)]).ptr); }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 170 "poet_yacc.y"
    { set_input_target((yyvsp[(0) - (3)]).ptr,make_varRef((yyvsp[(3) - (3)]).ptr,GLOBAL_VAR)); }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 171 "poet_yacc.y"
    {(yyval).config=GLOBAL_SCOPE;}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 171 "poet_yacc.y"
    {set_input_syntax((yyvsp[(0) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr);}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 172 "poet_yacc.y"
    { set_input_codeType((yyvsp[(0) - (3)]).ptr, (yyvsp[(0) - (3)]).ptr); }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 173 "poet_yacc.y"
    {(yyval).config=CODE_OR_XFORM_VAR; }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 174 "poet_yacc.y"
    { set_input_codeType((yyvsp[(0) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 175 "poet_yacc.y"
    {(yyval).config=GLOBAL_SCOPE;}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 175 "poet_yacc.y"
    {set_input_files((yyvsp[(0) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 176 "poet_yacc.y"
    {(yyval).config=GLOBAL_SCOPE;}
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 176 "poet_yacc.y"
    { set_input_annot((yyvsp[(0) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 177 "poet_yacc.y"
    {(yyval).config=GLOBAL_SCOPE;}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 177 "poet_yacc.y"
    { set_input_cond((yyvsp[(0) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 179 "poet_yacc.y"
    {(yyval).ptr = (yyvsp[(0) - (1)]).ptr; }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 181 "poet_yacc.y"
    {(yyval).config=GLOBAL_VAR;}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 182 "poet_yacc.y"
    { set_output_target((yyvsp[(0) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 183 "poet_yacc.y"
    {(yyval).config=GLOBAL_SCOPE;}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 184 "poet_yacc.y"
    { set_output_syntax((yyvsp[(0) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 185 "poet_yacc.y"
    {(yyval).config=GLOBAL_VAR;}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 186 "poet_yacc.y"
    { set_output_file((yyvsp[(0) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 187 "poet_yacc.y"
    {(yyval).config=GLOBAL_SCOPE;}
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 188 "poet_yacc.y"
    { set_output_cond((yyvsp[(0) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 189 "poet_yacc.y"
    { set_input_inline((yyvsp[(0) - (3)]).ptr,(yyvsp[(2) - (3)]).ptr);  }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 192 "poet_yacc.y"
    {(yyval).ptr=(yyvsp[(0) - (1)]).ptr; (yyval).config=(yyvsp[(1) - (1)]).config;}
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 193 "poet_yacc.y"
    { set_code_params((yyvsp[(0) - (5)]).ptr,(yyvsp[(4) - (5)]).ptr); (yyval).config=(yyvsp[(0) - (5)]).config; }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 194 "poet_yacc.y"
    {(yyval).config=ID_DEFAULT;}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 194 "poet_yacc.y"
    { set_code_attr((yyvsp[(0) - (4)]).ptr, (yyvsp[(1) - (4)]).ptr, (yyvsp[(4) - (4)]).ptr); }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 195 "poet_yacc.y"
    { set_code_inherit((yyvsp[(0) - (3)]).ptr, (yyvsp[(1) - (3)]).ptr); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 196 "poet_yacc.y"
    {(yyval).config=ID_DEFAULT;}
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 197 "poet_yacc.y"
    { set_local_static(make_sourceString("cond",4), (yyvsp[(4) - (4)]).ptr,LVAR_ATTR,(yyvsp[(4) - (4)]).ptr,1); (yyval).config=(yyvsp[(0) - (4)]).config; }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 198 "poet_yacc.y"
    {(yyval).config=ID_DEFAULT; }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 199 "poet_yacc.y"
    { set_local_static(make_sourceString("rebuild",7), (yyvsp[(4) - (4)]).ptr,LVAR_ATTR,(yyvsp[(4) - (4)]).ptr,1); (yyval).config=(yyvsp[(0) - (4)]).config; }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 200 "poet_yacc.y"
    {(yyval).config=ID_DEFAULT; }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 201 "poet_yacc.y"
    { set_code_parse((yyvsp[(0) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); (yyval).config=(yyvsp[(0) - (4)]).config; }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 202 "poet_yacc.y"
    { set_code_lookahead((yyvsp[(0) - (3)]).ptr, (yyvsp[(3) - (3)]).ptr); (yyval).config=(yyvsp[(0) - (3)]).config; }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 203 "poet_yacc.y"
    {(yyval).config=ID_DEFAULT; }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 204 "poet_yacc.y"
    { set_local_static(make_sourceString("match",5), (yyvsp[(4) - (4)]).ptr,LVAR_ATTR,(yyvsp[(4) - (4)]).ptr,1); (yyval).config=(yyvsp[(0) - (4)]).config; }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 205 "poet_yacc.y"
    {(yyval).config=ID_DEFAULT; }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 206 "poet_yacc.y"
    { set_local_static(make_sourceString("output",6), (yyvsp[(4) - (4)]).ptr,LVAR_ATTR,(yyvsp[(4) - (4)]).ptr,1); (yyval).config=(yyvsp[(0) - (4)]).config; }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 208 "poet_yacc.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 209 "poet_yacc.y"
    { (yyval).ptr = make_sourceString("PARSE",5); }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 211 "poet_yacc.y"
    { (yyval).ptr= make_varRef((yyvsp[(1) - (1)]).ptr,(yyvsp[(0) - (1)]).config); (yyval).config=(yyvsp[(0) - (1)]).config; }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 212 "poet_yacc.y"
    { (yyval).ptr=make_varRef((yyvsp[(3) - (3)]).ptr,GLOBAL_SCOPE); (yyval).config=(yyvsp[(0) - (3)]).config; }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 213 "poet_yacc.y"
    {(yyval)=(yyvsp[(2) - (2)]); }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 214 "poet_yacc.y"
    {(yyval)=(yyvsp[(2) - (2)]); }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 216 "poet_yacc.y"
    { (yyval).ptr = make_dummyOperator(POET_OP_XFORM); (yyval).config=(yyvsp[(0) - (0)]).config; }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 217 "poet_yacc.y"
    { (yyval).ptr=make_varRef((yyvsp[(2) - (2)]).ptr,XFORM_VAR); (yyval).config=(yyvsp[(0) - (2)]).config; }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 219 "poet_yacc.y"
    { (yyval).ptr = make_dummyOperator(POET_OP_CODE); }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 220 "poet_yacc.y"
    { (yyval).ptr=make_varRef((yyvsp[(2) - (2)]).ptr,CODE_VAR); }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 223 "poet_yacc.y"
    { (yyval).ptr=make_localPar((yyvsp[(1) - (1)]).ptr,0,LVAR_CODEPAR); }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 224 "poet_yacc.y"
    {(yyval).config=CODE_OR_XFORM_VAR; }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 224 "poet_yacc.y"
    { (yyval).ptr = make_localPar((yyvsp[(1) - (4)]).ptr, (yyvsp[(4) - (4)]).ptr,LVAR_CODEPAR); }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 225 "poet_yacc.y"
    {(yyval).ptr = make_sourceVector((yyvsp[(1) - (3)]).ptr, (yyvsp[(3) - (3)]).ptr); }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 227 "poet_yacc.y"
    {(yyval).ptr=(yyvsp[(0) - (1)]).ptr; }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 228 "poet_yacc.y"
    {(yyval).config=GLOBAL_SCOPE;}
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 229 "poet_yacc.y"
    {set_param_type((yyvsp[(0) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 230 "poet_yacc.y"
    {(yyval).config=GLOBAL_SCOPE;}
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 230 "poet_yacc.y"
    { set_param_default((yyvsp[(0) - (4)]).ptr, (yyvsp[(4) - (4)]).ptr); }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 231 "poet_yacc.y"
    {(yyval).config=GLOBAL_SCOPE; }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 231 "poet_yacc.y"
    { set_param_parse((yyvsp[(0) - (4)]).ptr, (yyvsp[(4) - (4)]).ptr); }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 232 "poet_yacc.y"
    { set_param_message((yyvsp[(0) - (3)]).ptr, (yyvsp[(3) - (3)]).ptr); }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 235 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config; }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 236 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (5)]).config; }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 237 "poet_yacc.y"
    { (yyval).ptr = make_sourceBop(POET_OP_MAP, (yyvsp[(4) - (8)]).ptr, (yyvsp[(7) - (8)]).ptr); }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 238 "poet_yacc.y"
    { (yyval).ptr=make_dummyOperator(POET_OP_MAP); }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 239 "poet_yacc.y"
    { (yyval).ptr=make_dummyOperator(POET_OP_MAP); }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 240 "poet_yacc.y"
    { (yyval).ptr=make_dummyOperator(POET_OP_MAP); }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 242 "poet_yacc.y"
    {(yyval).ptr=make_sourceUop(POET_OP_MAP, (yyvsp[(3) - (4)]).ptr); }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 245 "poet_yacc.y"
    { (yyval).ptr = make_inputlist(make_inputlist((yyvsp[(1) - (3)]).ptr,(yyvsp[(3) - (3)]).ptr),0); }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 247 "poet_yacc.y"
    { (yyval).ptr = make_inputlist2(make_inputlist((yyvsp[(1) - (5)]).ptr,(yyvsp[(3) - (5)]).ptr),(yyvsp[(5) - (5)])); }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 249 "poet_yacc.y"
    {(yyval).ptr=(yyvsp[(1) - (1)]).ptr; }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 250 "poet_yacc.y"
    { (yyval).ptr = make_any(); }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 251 "poet_yacc.y"
    { (yyval).ptr = make_type(TYPE_INT); }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 252 "poet_yacc.y"
    { (yyval).ptr = make_type(TYPE_STRING); }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 253 "poet_yacc.y"
    { (yyval).ptr = make_type(TYPE_ID); }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 254 "poet_yacc.y"
    { (yyval).ptr = make_dummyOperator(POET_OP_EXP); }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 255 "poet_yacc.y"
    {  (yyval).ptr = make_dummyOperator(POET_OP_VAR); }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 256 "poet_yacc.y"
    { (yyval).ptr = make_dummyOperator(POET_OP_TUPLE); }
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 257 "poet_yacc.y"
    { (yyval)=(yyvsp[(1) - (1)]); }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 259 "poet_yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]); }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 260 "poet_yacc.y"
    { (yyval).ptr = negate_Iconst((yyvsp[(2) - (2)]).ptr); }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 261 "poet_yacc.y"
    { (yyval).ptr=(yyvsp[(1) - (1)]).ptr; }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 262 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config; }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 263 "poet_yacc.y"
    { (yyval).ptr=make_sourceAssign(make_varRef((yyvsp[(1) - (4)]).ptr,ASSIGN_VAR), (yyvsp[(4) - (4)]).ptr); }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 264 "poet_yacc.y"
    { (yyval).ptr = make_typeNot((yyvsp[(2) - (2)])); }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 265 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config;}
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 265 "poet_yacc.y"
    { (yyval).ptr = (yyvsp[(3) - (4)]).ptr; }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 267 "poet_yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]); }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 268 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 269 "poet_yacc.y"
    { (yyval).ptr = make_typeTor((yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 271 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config; }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 271 "poet_yacc.y"
    { (yyval).ptr = ((yyvsp[(3) - (3)]).ptr==0)? (yyvsp[(1) - (3)]).ptr : make_typelist2((yyvsp[(1) - (3)]).ptr,(yyvsp[(3) - (3)]).ptr); }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 272 "poet_yacc.y"
    { (yyval).ptr = (yyvsp[(1) - (1)]).ptr; }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 273 "poet_yacc.y"
    {(yyval).ptr = make_typeUop(TYPE_LIST1, (yyvsp[(1) - (2)]).ptr); }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 274 "poet_yacc.y"
    {(yyval).ptr = make_typeUop(TYPE_LIST, (yyvsp[(1) - (2)]).ptr); }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 275 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 276 "poet_yacc.y"
    {(yyval).ptr = make_sourceBop(POET_OP_RANGE, (yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr);}
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 277 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 278 "poet_yacc.y"
    { (yyval).ptr=make_sourceBop(POET_OP_PLUS, (yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 279 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 280 "poet_yacc.y"
    { (yyval).ptr = make_sourceBop(POET_OP_MULT,  (yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 281 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 282 "poet_yacc.y"
    { (yyval).ptr = make_sourceBop(POET_OP_DIVIDE,  (yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 283 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 283 "poet_yacc.y"
    { (yyval).ptr = make_sourceBop(POET_OP_MOD,  (yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 284 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 284 "poet_yacc.y"
    { (yyval).ptr = make_sourceBop(POET_OP_CONS,(yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 286 "poet_yacc.y"
    {(yyval).ptr=0; }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 287 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config; }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 287 "poet_yacc.y"
    { (yyval).ptr = make_typelist2((yyvsp[(1) - (3)]).ptr,(yyvsp[(3) - (3)]).ptr); }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 288 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 289 "poet_yacc.y"
    { (yyval).ptr = make_sourceVector2((yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 290 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 290 "poet_yacc.y"
    { (yyval).ptr = make_sourceVector((yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 292 "poet_yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]); }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 293 "poet_yacc.y"
    { (yyval).ptr = negate_Iconst((yyvsp[(2) - (2)]).ptr); }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 294 "poet_yacc.y"
    { (yyval).ptr = make_sourceUop(POET_OP_CLEAR, make_varRef((yyvsp[(2) - (2)]).ptr,ASSIGN_VAR)); }
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 295 "poet_yacc.y"
    { (yyval).ptr=(yyvsp[(1) - (1)]).ptr; }
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 296 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config;}
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 296 "poet_yacc.y"
    { (yyval).ptr = (yyvsp[(3) - (4)]).ptr; }
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 297 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 298 "poet_yacc.y"
    { (yyval).ptr = make_typeTor((yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 299 "poet_yacc.y"
    {(yyval).ptr = make_typeUop(TYPE_LIST, (yyvsp[(1) - (2)]).ptr); }
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 300 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 301 "poet_yacc.y"
    {(yyval).ptr = make_sourceBop(POET_OP_RANGE, (yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr);}
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 302 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 303 "poet_yacc.y"
    { (yyval).ptr=make_sourceBop(POET_OP_PLUS, (yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 304 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 305 "poet_yacc.y"
    { (yyval).ptr = make_sourceBop(POET_OP_MULT,  (yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 306 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 307 "poet_yacc.y"
    { (yyval).ptr = make_sourceBop(POET_OP_DIVIDE,  (yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 308 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 309 "poet_yacc.y"
    { (yyval).ptr = make_sourceBop(POET_OP_MOD,  (yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 310 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 310 "poet_yacc.y"
    { (yyval).ptr = make_sourceBop(POET_OP_CONS,(yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 312 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config; }
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 312 "poet_yacc.y"
    { (yyval).ptr = ((yyvsp[(3) - (3)]).ptr==0)? (yyvsp[(1) - (3)]).ptr : make_typelist2((yyvsp[(1) - (3)]).ptr,(yyvsp[(3) - (3)]).ptr); }
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 313 "poet_yacc.y"
    { (yyval).ptr = (yyvsp[(1) - (1)]).ptr; }
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 314 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 314 "poet_yacc.y"
    { (yyval).ptr=make_sourceAssign(make_varRef((yyvsp[(1) - (4)]).ptr,ASSIGN_VAR), (yyvsp[(4) - (4)]).ptr); }
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 316 "poet_yacc.y"
    {(yyval).ptr=0; }
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 317 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config; }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 317 "poet_yacc.y"
    { (yyval).ptr = make_typelist2((yyvsp[(1) - (3)]).ptr,(yyvsp[(3) - (3)]).ptr); }
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 318 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 319 "poet_yacc.y"
    { (yyval).ptr = make_sourceVector2((yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 320 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 320 "poet_yacc.y"
    { (yyval).ptr = make_sourceVector((yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 322 "poet_yacc.y"
    { (yyval).ptr=(yyvsp[(1) - (1)]).ptr; }
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 323 "poet_yacc.y"
    { (yyval).ptr = (yyvsp[(1) - (1)]).ptr; }
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 324 "poet_yacc.y"
    { (yyval).ptr=make_empty_list(); }
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 326 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config; }
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 326 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (4)]).config;}
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 326 "poet_yacc.y"
    { (yyval).ptr = make_sourceUop(POET_OP_TUPLE, make_typelist2((yyvsp[(4) - (7)]).ptr,(yyvsp[(6) - (7)]).ptr)); }
    break;

  case 191:

/* Line 1806 of yacc.c  */
#line 327 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config; }
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 327 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (5)]).config;}
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 327 "poet_yacc.y"
    { (yyval).ptr = make_sourceBop(POET_OP_LIST,(yyvsp[(4) - (8)]).ptr,(yyvsp[(7) - (8)]).ptr); }
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 328 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config; }
    break;

  case 195:

/* Line 1806 of yacc.c  */
#line 328 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (5)]).config;}
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 328 "poet_yacc.y"
    { (yyval).ptr = make_sourceBop(POET_OP_LIST1,(yyvsp[(4) - (8)]).ptr,(yyvsp[(7) - (8)]).ptr); }
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 330 "poet_yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]); }
    break;

  case 198:

/* Line 1806 of yacc.c  */
#line 331 "poet_yacc.y"
    { (yyval)=(yyvsp[(1) - (1)]); }
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 332 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 333 "poet_yacc.y"
    { (yyval).ptr = make_typeTor((yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 334 "poet_yacc.y"
    {(yyval).ptr = make_typeUop(TYPE_LIST1, (yyvsp[(1) - (2)]).ptr); }
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 335 "poet_yacc.y"
    {(yyval).ptr = make_typeUop(TYPE_LIST, (yyvsp[(1) - (2)]).ptr); }
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 337 "poet_yacc.y"
    { (yyval)=(yyvsp[(1) - (1)]); }
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 338 "poet_yacc.y"
    { (yyval).ptr=(yyvsp[(1) - (1)]).ptr; }
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 339 "poet_yacc.y"
    { (yyval).ptr = make_typeNot((yyvsp[(2) - (2)])); }
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 340 "poet_yacc.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 341 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config; }
    break;

  case 208:

/* Line 1806 of yacc.c  */
#line 342 "poet_yacc.y"
    { (yyval).ptr=make_sourceAssign(make_varRef((yyvsp[(1) - (4)]).ptr,ASSIGN_VAR), (yyvsp[(4) - (4)]).ptr); }
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 343 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 210:

/* Line 1806 of yacc.c  */
#line 344 "poet_yacc.y"
    { (yyval).ptr = make_typeTor((yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 345 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config;}
    break;

  case 212:

/* Line 1806 of yacc.c  */
#line 345 "poet_yacc.y"
    { (yyval).ptr = (yyvsp[(3) - (4)]).ptr; }
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 347 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config; }
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 347 "poet_yacc.y"
    { (yyval).ptr = ((yyvsp[(3) - (3)]).ptr==0)? (yyvsp[(1) - (3)]).ptr : make_typelist2((yyvsp[(1) - (3)]).ptr,(yyvsp[(3) - (3)]).ptr); }
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 348 "poet_yacc.y"
    { (yyval).ptr = (yyvsp[(1) - (1)]).ptr; }
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 349 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 350 "poet_yacc.y"
    { (yyval).ptr = make_sourceVector2((yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 218:

/* Line 1806 of yacc.c  */
#line 351 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 219:

/* Line 1806 of yacc.c  */
#line 351 "poet_yacc.y"
    { (yyval).ptr = make_sourceVector((yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 352 "poet_yacc.y"
    {(yyval).ptr=0; }
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 353 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config; }
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 353 "poet_yacc.y"
    { (yyval).ptr = make_typelist2((yyvsp[(1) - (3)]).ptr,(yyvsp[(3) - (3)]).ptr); }
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 355 "poet_yacc.y"
    {(yyval).ptr=(yyvsp[(1) - (1)]).ptr; }
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 356 "poet_yacc.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 358 "poet_yacc.y"
    {yaccState=YACC_CODE; (yyval).config=ID_DEFAULT;}
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 358 "poet_yacc.y"
    { yaccState=YACC_DEFAULT; set_code_def((yyvsp[(0) - (4)]).ptr,(yyvsp[(3) - (4)]).ptr); }
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 359 "poet_yacc.y"
    { set_code_def((yyvsp[(0) - (1)]).ptr, 0); }
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 360 "poet_yacc.y"
    {(yyval).config=ID_DEFAULT; }
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 360 "poet_yacc.y"
    {(yyval).ptr=(yyvsp[(3) - (4)]).ptr; }
    break;

  case 230:

/* Line 1806 of yacc.c  */
#line 361 "poet_yacc.y"
    {(yyval).ptr = 0; }
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 362 "poet_yacc.y"
    {(yyval)=(yyvsp[(0) - (1)]); }
    break;

  case 234:

/* Line 1806 of yacc.c  */
#line 363 "poet_yacc.y"
    {set_xform_params((yyvsp[(0) - (5)]).ptr,(yyvsp[(4) - (5)]).ptr); }
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 364 "poet_yacc.y"
    {(yyval).ptr=0;}
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 365 "poet_yacc.y"
    {(yyval).config=CODE_VAR;}
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 365 "poet_yacc.y"
    { (yyval).ptr = set_local_static((yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr,LVAR_TUNE,0,1); }
    break;

  case 239:

/* Line 1806 of yacc.c  */
#line 366 "poet_yacc.y"
    { (yyval).ptr=make_localPar((yyvsp[(1) - (1)]).ptr,0,LVAR_XFORMPAR); }
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 367 "poet_yacc.y"
    {(yyval).config=CODE_VAR;}
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 367 "poet_yacc.y"
    { (yyval).ptr = make_localPar((yyvsp[(1) - (4)]).ptr, (yyvsp[(4) - (4)]).ptr,LVAR_XFORMPAR); }
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 368 "poet_yacc.y"
    {(yyval).ptr = make_sourceVector((yyvsp[(1) - (3)]).ptr, (yyvsp[(3) - (3)]).ptr); }
    break;

  case 243:

/* Line 1806 of yacc.c  */
#line 369 "poet_yacc.y"
    {(yyval).ptr = (yyvsp[(0) - (2)]).ptr + 1; }
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 370 "poet_yacc.y"
    { set_local_static((yyvsp[(1) - (1)]).ptr,make_Iconst1((yyvsp[(0) - (1)]).ptr), LVAR_OUTPUT,0,1); }
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 371 "poet_yacc.y"
    {(yyval).config=CODE_VAR;}
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 371 "poet_yacc.y"
    { set_local_static((yyvsp[(1) - (4)]).ptr,make_Iconst1((yyvsp[(0) - (4)]).ptr), LVAR_OUTPUT,(yyvsp[(4) - (4)]).ptr,1); }
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 372 "poet_yacc.y"
    { (yyval).ptr = make_traceVar((yyvsp[(1) - (1)]).ptr,0); }
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 373 "poet_yacc.y"
    { (yyval).ptr = make_traceVar((yyvsp[(1) - (3)]).ptr,0); eval_define((yyval).ptr,(yyvsp[(3) - (3)]).ptr); }
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 375 "poet_yacc.y"
    { (yyval).ptr = make_traceVar((yyvsp[(1) - (3)]).ptr,(yyvsp[(3) - (3)]).ptr);  }
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 377 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config;}
    break;

  case 253:

/* Line 1806 of yacc.c  */
#line 377 "poet_yacc.y"
    { (yyval).ptr=make_seq((yyvsp[(1) - (3)]).ptr, (yyvsp[(3) - (3)]).ptr); }
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 378 "poet_yacc.y"
    {(yyval).ptr=(yyvsp[(1) - (1)]).ptr; }
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 379 "poet_yacc.y"
    { (yyval).ptr = (yyvsp[(1) - (1)]).ptr; }
    break;

  case 256:

/* Line 1806 of yacc.c  */
#line 380 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 257:

/* Line 1806 of yacc.c  */
#line 380 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (5)]).config;}
    break;

  case 258:

/* Line 1806 of yacc.c  */
#line 380 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (7)]).config;}
    break;

  case 259:

/* Line 1806 of yacc.c  */
#line 381 "poet_yacc.y"
    { (yyval).ptr = make_ifElse((yyvsp[(4) - (9)]).ptr, (yyvsp[(7) - (9)]).ptr, (yyvsp[(9) - (9)]).ptr); }
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 382 "poet_yacc.y"
    { (yyval)=(yyvsp[(1) - (1)]); }
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 383 "poet_yacc.y"
    { (yyval).ptr=make_empty(); }
    break;

  case 262:

/* Line 1806 of yacc.c  */
#line 384 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config;}
    break;

  case 263:

/* Line 1806 of yacc.c  */
#line 384 "poet_yacc.y"
    { (yyval).ptr = (yyvsp[(3) - (3)]).ptr; }
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 385 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 265:

/* Line 1806 of yacc.c  */
#line 386 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (5)]).config;}
    break;

  case 266:

/* Line 1806 of yacc.c  */
#line 387 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (8)]).config;}
    break;

  case 267:

/* Line 1806 of yacc.c  */
#line 387 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (11)]).config;}
    break;

  case 268:

/* Line 1806 of yacc.c  */
#line 388 "poet_yacc.y"
    { (yyval).ptr = make_sourceQop(POET_OP_FOR, (yyvsp[(4) - (13)]).ptr,(yyvsp[(7) - (13)]).ptr,(yyvsp[(10) - (13)]).ptr,(yyvsp[(13) - (13)]).ptr); }
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 389 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 270:

/* Line 1806 of yacc.c  */
#line 389 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (6)]).config;}
    break;

  case 271:

/* Line 1806 of yacc.c  */
#line 390 "poet_yacc.y"
    { (yyval).ptr = make_sourceBop(POET_OP_CASE, (yyvsp[(4) - (9)]).ptr,(yyvsp[(8) - (9)]).ptr); }
    break;

  case 272:

/* Line 1806 of yacc.c  */
#line 391 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 273:

/* Line 1806 of yacc.c  */
#line 392 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (5)]).config;}
    break;

  case 274:

/* Line 1806 of yacc.c  */
#line 393 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (8)]).config;}
    break;

  case 275:

/* Line 1806 of yacc.c  */
#line 393 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (11)]).config;}
    break;

  case 276:

/* Line 1806 of yacc.c  */
#line 394 "poet_yacc.y"
    { (yyval).ptr = make_sourceQop(POET_OP_FOREACH, (yyvsp[(4) - (13)]).ptr,(yyvsp[(7) - (13)]).ptr,(yyvsp[(10) - (13)]).ptr,(yyvsp[(13) - (13)]).ptr); }
    break;

  case 277:

/* Line 1806 of yacc.c  */
#line 395 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 278:

/* Line 1806 of yacc.c  */
#line 396 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (5)]).config;}
    break;

  case 279:

/* Line 1806 of yacc.c  */
#line 397 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (8)]).config;}
    break;

  case 280:

/* Line 1806 of yacc.c  */
#line 397 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (11)]).config;}
    break;

  case 281:

/* Line 1806 of yacc.c  */
#line 398 "poet_yacc.y"
    { (yyval).ptr = make_sourceQop(POET_OP_FOREACHR, (yyvsp[(4) - (13)]).ptr,(yyvsp[(7) - (13)]).ptr,(yyvsp[(10) - (13)]).ptr,(yyvsp[(13) - (13)]).ptr); }
    break;

  case 282:

/* Line 1806 of yacc.c  */
#line 399 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config; }
    break;

  case 283:

/* Line 1806 of yacc.c  */
#line 399 "poet_yacc.y"
    { (yyval).ptr = (yyvsp[(3) - (4)]).ptr; }
    break;

  case 284:

/* Line 1806 of yacc.c  */
#line 400 "poet_yacc.y"
    { (yyval).ptr=make_empty(); }
    break;

  case 285:

/* Line 1806 of yacc.c  */
#line 401 "poet_yacc.y"
    { (yyval).ptr = make_sourceStmt((yyvsp[(1) - (2)]).ptr); }
    break;

  case 286:

/* Line 1806 of yacc.c  */
#line 403 "poet_yacc.y"
    { (yyval).ptr = (yyvsp[(1) - (1)]).ptr; }
    break;

  case 287:

/* Line 1806 of yacc.c  */
#line 404 "poet_yacc.y"
    { (yyval).ptr = make_empty(); }
    break;

  case 288:

/* Line 1806 of yacc.c  */
#line 406 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 289:

/* Line 1806 of yacc.c  */
#line 406 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (5)]).config;}
    break;

  case 290:

/* Line 1806 of yacc.c  */
#line 407 "poet_yacc.y"
    {(yyval).ptr = make_sourceVector( (yyvsp[(1) - (7)]).ptr, make_inputlist2((yyvsp[(4) - (7)]).ptr,(yyvsp[(7) - (7)]).ptr)); }
    break;

  case 291:

/* Line 1806 of yacc.c  */
#line 408 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config;}
    break;

  case 292:

/* Line 1806 of yacc.c  */
#line 408 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (4)]).config;}
    break;

  case 293:

/* Line 1806 of yacc.c  */
#line 408 "poet_yacc.y"
    { (yyval).ptr = make_inputlist2((yyvsp[(3) - (6)]).ptr,(yyvsp[(6) - (6)]).ptr); }
    break;

  case 294:

/* Line 1806 of yacc.c  */
#line 409 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (3)]).config;}
    break;

  case 295:

/* Line 1806 of yacc.c  */
#line 410 "poet_yacc.y"
    {(yyval).ptr = make_sourceVector( (yyvsp[(1) - (5)]).ptr, make_inputlist2(make_any(),(yyvsp[(5) - (5)]).ptr)); }
    break;

  case 296:

/* Line 1806 of yacc.c  */
#line 412 "poet_yacc.y"
    { (yyval).ptr = (yyvsp[(1) - (1)]).ptr; }
    break;

  case 297:

/* Line 1806 of yacc.c  */
#line 413 "poet_yacc.y"
    { (yyval).ptr = (yyvsp[(1) - (1)]).ptr; }
    break;

  case 298:

/* Line 1806 of yacc.c  */
#line 415 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 299:

/* Line 1806 of yacc.c  */
#line 415 "poet_yacc.y"
    {(yyval).ptr = make_sourceVector((yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 300:

/* Line 1806 of yacc.c  */
#line 416 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 301:

/* Line 1806 of yacc.c  */
#line 416 "poet_yacc.y"
    { (yyval).ptr = make_sourceVector2((yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 302:

/* Line 1806 of yacc.c  */
#line 419 "poet_yacc.y"
    { (yyval).ptr=make_dummyOperator(POET_OP_CONTINUE); }
    break;

  case 303:

/* Line 1806 of yacc.c  */
#line 420 "poet_yacc.y"
    { (yyval).ptr=make_dummyOperator(POET_OP_BREAK); }
    break;

  case 304:

/* Line 1806 of yacc.c  */
#line 421 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config;}
    break;

  case 305:

/* Line 1806 of yacc.c  */
#line 421 "poet_yacc.y"
    { (yyval).ptr=make_sourceUop(POET_OP_RETURN, (yyvsp[(3) - (3)]).ptr); }
    break;

  case 306:

/* Line 1806 of yacc.c  */
#line 422 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config;}
    break;

  case 307:

/* Line 1806 of yacc.c  */
#line 422 "poet_yacc.y"
    { (yyval).ptr = make_sourceUop(POET_OP_ERROR,(yyvsp[(3) - (3)]).ptr); }
    break;

  case 308:

/* Line 1806 of yacc.c  */
#line 423 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config;}
    break;

  case 309:

/* Line 1806 of yacc.c  */
#line 423 "poet_yacc.y"
    { (yyval).ptr=make_sourceUop(POET_OP_PRINT,(yyvsp[(3) - (3)]).ptr); }
    break;

  case 310:

/* Line 1806 of yacc.c  */
#line 424 "poet_yacc.y"
    { (yyval).ptr = (yyvsp[(1) - (1)]).ptr; }
    break;

  case 311:

/* Line 1806 of yacc.c  */
#line 426 "poet_yacc.y"
    { (yyval).ptr = (yyvsp[(1) - (1)]).ptr; }
    break;

  case 312:

/* Line 1806 of yacc.c  */
#line 427 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 313:

/* Line 1806 of yacc.c  */
#line 427 "poet_yacc.y"
    { (yyval).ptr=make_sourceAssign((yyvsp[(1) - (4)]).ptr, (yyvsp[(4) - (4)]).ptr); }
    break;

  case 314:

/* Line 1806 of yacc.c  */
#line 428 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 315:

/* Line 1806 of yacc.c  */
#line 428 "poet_yacc.y"
    { (yyval).ptr = make_codeMatch((yyvsp[(1) - (4)]).ptr, (yyvsp[(4) - (4)]).ptr); }
    break;

  case 316:

/* Line 1806 of yacc.c  */
#line 429 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 317:

/* Line 1806 of yacc.c  */
#line 430 "poet_yacc.y"
    { (yyval).ptr=make_sourceAssign((yyvsp[(1) - (4)]).ptr, make_sourceBop(POET_OP_PLUS, (yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr)); }
    break;

  case 318:

/* Line 1806 of yacc.c  */
#line 431 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 319:

/* Line 1806 of yacc.c  */
#line 432 "poet_yacc.y"
    { (yyval).ptr=make_sourceAssign((yyvsp[(1) - (4)]).ptr, make_sourceBop(POET_OP_MINUS, (yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr)); }
    break;

  case 320:

/* Line 1806 of yacc.c  */
#line 433 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 321:

/* Line 1806 of yacc.c  */
#line 434 "poet_yacc.y"
    { (yyval).ptr=make_sourceAssign((yyvsp[(1) - (4)]).ptr, make_sourceBop(POET_OP_MULT, (yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr)); }
    break;

  case 322:

/* Line 1806 of yacc.c  */
#line 435 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 323:

/* Line 1806 of yacc.c  */
#line 436 "poet_yacc.y"
    { (yyval).ptr=make_sourceAssign((yyvsp[(1) - (4)]).ptr, make_sourceBop(POET_OP_DIVIDE, (yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr)); }
    break;

  case 324:

/* Line 1806 of yacc.c  */
#line 437 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 325:

/* Line 1806 of yacc.c  */
#line 438 "poet_yacc.y"
    { (yyval).ptr=make_sourceAssign((yyvsp[(1) - (4)]).ptr, make_sourceBop(POET_OP_MOD, (yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr)); }
    break;

  case 326:

/* Line 1806 of yacc.c  */
#line 439 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 327:

/* Line 1806 of yacc.c  */
#line 439 "poet_yacc.y"
    { (yyval).ptr = make_codeMatchQ((yyvsp[(1) - (4)]).ptr, (yyvsp[(4) - (4)]).ptr); }
    break;

  case 328:

/* Line 1806 of yacc.c  */
#line 440 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 329:

/* Line 1806 of yacc.c  */
#line 440 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (5)]).config;}
    break;

  case 330:

/* Line 1806 of yacc.c  */
#line 441 "poet_yacc.y"
    { (yyval).ptr = make_ifElse( (yyvsp[(1) - (7)]).ptr, (yyvsp[(4) - (7)]).ptr, (yyvsp[(7) - (7)]).ptr); }
    break;

  case 331:

/* Line 1806 of yacc.c  */
#line 444 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 332:

/* Line 1806 of yacc.c  */
#line 444 "poet_yacc.y"
    { (yyval).ptr = make_sourceBop(POET_OP_AND,  (yyvsp[(1) - (4)]).ptr, (yyvsp[(4) - (4)]).ptr); }
    break;

  case 333:

/* Line 1806 of yacc.c  */
#line 445 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 334:

/* Line 1806 of yacc.c  */
#line 445 "poet_yacc.y"
    { (yyval).ptr = make_sourceBop(POET_OP_OR,   (yyvsp[(1) - (4)]).ptr, (yyvsp[(4) - (4)]).ptr); }
    break;

  case 335:

/* Line 1806 of yacc.c  */
#line 446 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config;}
    break;

  case 336:

/* Line 1806 of yacc.c  */
#line 446 "poet_yacc.y"
    { (yyval).ptr = make_sourceUop(POET_OP_NOT, (yyvsp[(3) - (3)]).ptr); }
    break;

  case 337:

/* Line 1806 of yacc.c  */
#line 447 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 338:

/* Line 1806 of yacc.c  */
#line 447 "poet_yacc.y"
    { (yyval).ptr = make_sourceBop(POET_OP_LT, (yyvsp[(1) - (4)]).ptr, (yyvsp[(4) - (4)]).ptr); }
    break;

  case 339:

/* Line 1806 of yacc.c  */
#line 448 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 340:

/* Line 1806 of yacc.c  */
#line 448 "poet_yacc.y"
    { (yyval).ptr = make_sourceBop(POET_OP_LE, (yyvsp[(1) - (4)]).ptr, (yyvsp[(4) - (4)]).ptr); }
    break;

  case 341:

/* Line 1806 of yacc.c  */
#line 449 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 342:

/* Line 1806 of yacc.c  */
#line 449 "poet_yacc.y"
    { (yyval).ptr = make_sourceBop(POET_OP_EQ, (yyvsp[(1) - (4)]).ptr, (yyvsp[(4) - (4)]).ptr); }
    break;

  case 343:

/* Line 1806 of yacc.c  */
#line 450 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 344:

/* Line 1806 of yacc.c  */
#line 451 "poet_yacc.y"
    { (yyval).ptr = make_sourceBop(POET_OP_GT,   (yyvsp[(1) - (4)]).ptr, (yyvsp[(4) - (4)]).ptr); }
    break;

  case 345:

/* Line 1806 of yacc.c  */
#line 452 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 346:

/* Line 1806 of yacc.c  */
#line 453 "poet_yacc.y"
    { (yyval).ptr = make_sourceBop(POET_OP_GE,   (yyvsp[(1) - (4)]).ptr, (yyvsp[(4) - (4)]).ptr); }
    break;

  case 347:

/* Line 1806 of yacc.c  */
#line 454 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 348:

/* Line 1806 of yacc.c  */
#line 455 "poet_yacc.y"
    { (yyval).ptr = make_sourceBop(POET_OP_NE,   (yyvsp[(1) - (4)]).ptr, (yyvsp[(4) - (4)]).ptr); }
    break;

  case 349:

/* Line 1806 of yacc.c  */
#line 456 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 350:

/* Line 1806 of yacc.c  */
#line 456 "poet_yacc.y"
    { (yyval).ptr = make_sourceBop(POET_OP_ASTMATCH, (yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 351:

/* Line 1806 of yacc.c  */
#line 457 "poet_yacc.y"
    { (yyval).ptr = (yyvsp[(1) - (1)]).ptr; }
    break;

  case 352:

/* Line 1806 of yacc.c  */
#line 459 "poet_yacc.y"
    { (yyval).ptr = (yyvsp[(1) - (1)]).ptr; }
    break;

  case 353:

/* Line 1806 of yacc.c  */
#line 460 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 354:

/* Line 1806 of yacc.c  */
#line 461 "poet_yacc.y"
    { (yyval).ptr=make_sourceBop(POET_OP_PLUS, (yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 355:

/* Line 1806 of yacc.c  */
#line 462 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 356:

/* Line 1806 of yacc.c  */
#line 463 "poet_yacc.y"
    { (yyval).ptr = make_sourceBop(POET_OP_MINUS,  (yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 357:

/* Line 1806 of yacc.c  */
#line 464 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 358:

/* Line 1806 of yacc.c  */
#line 465 "poet_yacc.y"
    { (yyval).ptr = make_sourceBop(POET_OP_MULT,  (yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 359:

/* Line 1806 of yacc.c  */
#line 466 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 360:

/* Line 1806 of yacc.c  */
#line 467 "poet_yacc.y"
    { (yyval).ptr = make_sourceBop(POET_OP_CONCAT, (yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 361:

/* Line 1806 of yacc.c  */
#line 468 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 362:

/* Line 1806 of yacc.c  */
#line 469 "poet_yacc.y"
    { (yyval).ptr = make_sourceBop(POET_OP_DIVIDE,  (yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 363:

/* Line 1806 of yacc.c  */
#line 470 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 364:

/* Line 1806 of yacc.c  */
#line 471 "poet_yacc.y"
    { (yyval).ptr = make_sourceBop(POET_OP_MOD,  (yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 365:

/* Line 1806 of yacc.c  */
#line 472 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 366:

/* Line 1806 of yacc.c  */
#line 472 "poet_yacc.y"
    { (yyval).ptr = make_sourceBop(POET_OP_CONS,(yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 367:

/* Line 1806 of yacc.c  */
#line 473 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config;}
    break;

  case 368:

/* Line 1806 of yacc.c  */
#line 473 "poet_yacc.y"
    { (yyval).ptr = make_sourceUop(POET_OP_UMINUS,(yyvsp[(3) - (3)]).ptr); }
    break;

  case 369:

/* Line 1806 of yacc.c  */
#line 475 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config;}
    break;

  case 370:

/* Line 1806 of yacc.c  */
#line 476 "poet_yacc.y"
    { if ((yyvsp[(3) - (3)]).ptr==0) (yyval).ptr=(yyvsp[(1) - (3)]).ptr; else (yyval).ptr = make_xformList((yyvsp[(1) - (3)]).ptr, (yyvsp[(3) - (3)]).ptr); }
    break;

  case 371:

/* Line 1806 of yacc.c  */
#line 478 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config; }
    break;

  case 372:

/* Line 1806 of yacc.c  */
#line 478 "poet_yacc.y"
    { (yyval).ptr =make_xformList((yyvsp[(1) - (3)]).ptr,(yyvsp[(3) - (3)]).ptr);}
    break;

  case 373:

/* Line 1806 of yacc.c  */
#line 479 "poet_yacc.y"
    { (yyval).ptr=0; }
    break;

  case 374:

/* Line 1806 of yacc.c  */
#line 480 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config; }
    break;

  case 375:

/* Line 1806 of yacc.c  */
#line 480 "poet_yacc.y"
    { (yyval).ptr =make_xformList((yyvsp[(1) - (3)]).ptr,(yyvsp[(3) - (3)]).ptr);}
    break;

  case 376:

/* Line 1806 of yacc.c  */
#line 481 "poet_yacc.y"
    { (yyval).ptr=0; }
    break;

  case 377:

/* Line 1806 of yacc.c  */
#line 483 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 378:

/* Line 1806 of yacc.c  */
#line 483 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (5)]).config;}
    break;

  case 379:

/* Line 1806 of yacc.c  */
#line 483 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (7)]).config;}
    break;

  case 380:

/* Line 1806 of yacc.c  */
#line 484 "poet_yacc.y"
    { (yyval).ptr=((yyvsp[(9) - (9)]).ptr==0)? make_sourceBop(POET_OP_REPLACE,(yyvsp[(4) - (9)]).ptr,(yyvsp[(7) - (9)]).ptr) 
                       : make_sourceTop(POET_OP_REPLACE,(yyvsp[(4) - (9)]).ptr,(yyvsp[(7) - (9)]).ptr,(yyvsp[(9) - (9)]).ptr); }
    break;

  case 381:

/* Line 1806 of yacc.c  */
#line 486 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 382:

/* Line 1806 of yacc.c  */
#line 486 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (4)]).config;}
    break;

  case 383:

/* Line 1806 of yacc.c  */
#line 487 "poet_yacc.y"
    { (yyval).ptr=((yyvsp[(6) - (6)]).ptr==0)? make_sourceUop(POET_OP_TRACE,(yyvsp[(4) - (6)]).ptr)
                      : make_sourceBop(POET_OP_TRACE,(yyvsp[(4) - (6)]).ptr,(yyvsp[(6) - (6)]).ptr); }
    break;

  case 384:

/* Line 1806 of yacc.c  */
#line 489 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 385:

/* Line 1806 of yacc.c  */
#line 489 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (5)]).config;}
    break;

  case 386:

/* Line 1806 of yacc.c  */
#line 490 "poet_yacc.y"
    { (yyval).ptr=make_sourceBop(POET_OP_PERMUTE,(yyvsp[(4) - (8)]).ptr,(yyvsp[(7) - (8)]).ptr); }
    break;

  case 387:

/* Line 1806 of yacc.c  */
#line 491 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 388:

/* Line 1806 of yacc.c  */
#line 491 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (5)]).config;}
    break;

  case 389:

/* Line 1806 of yacc.c  */
#line 491 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (8)]).config;}
    break;

  case 390:

/* Line 1806 of yacc.c  */
#line 492 "poet_yacc.y"
    { (yyval).ptr=make_sourceTop(POET_OP_DUPLICATE,(yyvsp[(4) - (11)]).ptr,(yyvsp[(7) - (11)]).ptr,(yyvsp[(10) - (11)]).ptr); }
    break;

  case 391:

/* Line 1806 of yacc.c  */
#line 493 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config;}
    break;

  case 392:

/* Line 1806 of yacc.c  */
#line 493 "poet_yacc.y"
    { (yyval).ptr = make_sourceUop(POET_OP_COPY, (yyvsp[(3) - (3)]).ptr); }
    break;

  case 393:

/* Line 1806 of yacc.c  */
#line 494 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 394:

/* Line 1806 of yacc.c  */
#line 495 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (4)]).config;(yyval).ptr=(yyvsp[(4) - (4)]).ptr; }
    break;

  case 395:

/* Line 1806 of yacc.c  */
#line 496 "poet_yacc.y"
    {(yyval).ptr = make_sourceBop(POET_OP_ERASE,(yyvsp[(4) - (6)]).ptr,(yyvsp[(6) - (6)]).ptr); }
    break;

  case 396:

/* Line 1806 of yacc.c  */
#line 497 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 397:

/* Line 1806 of yacc.c  */
#line 497 "poet_yacc.y"
    { (yyval).ptr = make_sourceUop(POET_OP_DELAY, (yyvsp[(4) - (5)]).ptr); }
    break;

  case 398:

/* Line 1806 of yacc.c  */
#line 498 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 399:

/* Line 1806 of yacc.c  */
#line 498 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (5)]).config;}
    break;

  case 400:

/* Line 1806 of yacc.c  */
#line 499 "poet_yacc.y"
    {  (yyval).ptr=make_sourceBop(POET_OP_INSERT, (yyvsp[(4) - (8)]).ptr,(yyvsp[(7) - (8)]).ptr); }
    break;

  case 401:

/* Line 1806 of yacc.c  */
#line 500 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (3)]).config;}
    break;

  case 402:

/* Line 1806 of yacc.c  */
#line 501 "poet_yacc.y"
    { (yyval).ptr = make_sourceBop(POET_OP_DEBUG,(yyvsp[(2) - (6)]).ptr,(yyvsp[(5) - (6)]).ptr); }
    break;

  case 403:

/* Line 1806 of yacc.c  */
#line 502 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 404:

/* Line 1806 of yacc.c  */
#line 502 "poet_yacc.y"
    { (yyval).ptr = make_sourceUop(POET_OP_APPLY, (yyvsp[(4) - (5)]).ptr); }
    break;

  case 405:

/* Line 1806 of yacc.c  */
#line 503 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config;}
    break;

  case 406:

/* Line 1806 of yacc.c  */
#line 503 "poet_yacc.y"
    { (yyval).ptr = make_sourceUop(POET_OP_REBUILD,(yyvsp[(3) - (3)]).ptr); }
    break;

  case 407:

/* Line 1806 of yacc.c  */
#line 504 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config;}
    break;

  case 408:

/* Line 1806 of yacc.c  */
#line 504 "poet_yacc.y"
    { (yyval).ptr = make_sourceUop(POET_OP_RESTORE,(yyvsp[(3) - (3)]).ptr); }
    break;

  case 409:

/* Line 1806 of yacc.c  */
#line 505 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config;}
    break;

  case 410:

/* Line 1806 of yacc.c  */
#line 505 "poet_yacc.y"
    { (yyval).ptr = make_sourceUop(POET_OP_SAVE,(yyvsp[(3) - (3)]).ptr); }
    break;

  case 411:

/* Line 1806 of yacc.c  */
#line 506 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 412:

/* Line 1806 of yacc.c  */
#line 506 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (5)]).config;}
    break;

  case 413:

/* Line 1806 of yacc.c  */
#line 507 "poet_yacc.y"
    { (yyval).ptr = make_sourceBop(POET_OP_SPLIT, (yyvsp[(4) - (8)]).ptr,(yyvsp[(7) - (8)]).ptr); }
    break;

  case 414:

/* Line 1806 of yacc.c  */
#line 508 "poet_yacc.y"
    {(yyval).ptr = make_typeUop(TYPE_LIST, (yyvsp[(1) - (2)]).ptr); }
    break;

  case 415:

/* Line 1806 of yacc.c  */
#line 509 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 416:

/* Line 1806 of yacc.c  */
#line 510 "poet_yacc.y"
    {(yyval).ptr = make_sourceBop(POET_OP_RANGE, (yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr);}
    break;

  case 417:

/* Line 1806 of yacc.c  */
#line 512 "poet_yacc.y"
    {(yyval).ptr = make_sourceBop(POET_OP_RANGE, (yyvsp[(3) - (6)]).ptr,(yyvsp[(6) - (6)]).ptr);}
    break;

  case 418:

/* Line 1806 of yacc.c  */
#line 513 "poet_yacc.y"
    { (yyval).ptr = (yyvsp[(1) - (1)]).ptr; }
    break;

  case 419:

/* Line 1806 of yacc.c  */
#line 514 "poet_yacc.y"
    { (yyval).ptr = 0; }
    break;

  case 420:

/* Line 1806 of yacc.c  */
#line 514 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config;}
    break;

  case 421:

/* Line 1806 of yacc.c  */
#line 514 "poet_yacc.y"
    { (yyval).ptr = (yyvsp[(3) - (4)]).ptr; }
    break;

  case 422:

/* Line 1806 of yacc.c  */
#line 516 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config;}
    break;

  case 423:

/* Line 1806 of yacc.c  */
#line 516 "poet_yacc.y"
    { (yyval).ptr = (yyvsp[(3) - (4)]).ptr; }
    break;

  case 424:

/* Line 1806 of yacc.c  */
#line 517 "poet_yacc.y"
    { (yyval).ptr = (yyvsp[(0) - (1)]).ptr; }
    break;

  case 425:

/* Line 1806 of yacc.c  */
#line 519 "poet_yacc.y"
    {(yyval).ptr = make_Iconst1(1); }
    break;

  case 426:

/* Line 1806 of yacc.c  */
#line 520 "poet_yacc.y"
    { (yyval).ptr = (yyvsp[(2) - (3)]).ptr; }
    break;

  case 427:

/* Line 1806 of yacc.c  */
#line 522 "poet_yacc.y"
    { (yyval).ptr = make_inputlist2((yyvsp[(1) - (2)]).ptr,(yyvsp[(2) - (2)]).ptr); }
    break;

  case 428:

/* Line 1806 of yacc.c  */
#line 524 "poet_yacc.y"
    { (yyval).ptr = 0; }
    break;

  case 429:

/* Line 1806 of yacc.c  */
#line 525 "poet_yacc.y"
    { (yyval).ptr = make_inputlist2((yyvsp[(1) - (2)]).ptr,(yyvsp[(2) - (2)]).ptr); }
    break;

  case 430:

/* Line 1806 of yacc.c  */
#line 528 "poet_yacc.y"
    { (yyval).ptr = ((yyvsp[(2) - (2)]).ptr==0)? (yyvsp[(1) - (2)]).ptr : make_inputlist2((yyvsp[(1) - (2)]).ptr,(yyvsp[(2) - (2)]).ptr); }
    break;

  case 431:

/* Line 1806 of yacc.c  */
#line 528 "poet_yacc.y"
    { (yyval).ptr = (yyvsp[(4) - (4)]).ptr; }
    break;

  case 432:

/* Line 1806 of yacc.c  */
#line 529 "poet_yacc.y"
    { (yyval).ptr = (yyvsp[(1) - (1)]).ptr; }
    break;

  case 433:

/* Line 1806 of yacc.c  */
#line 530 "poet_yacc.y"
    {(yyval).config=CODE_OR_XFORM_VAR; }
    break;

  case 434:

/* Line 1806 of yacc.c  */
#line 531 "poet_yacc.y"
    { (yyval).ptr = make_annot((yyvsp[(4) - (5)]).ptr); }
    break;

  case 435:

/* Line 1806 of yacc.c  */
#line 533 "poet_yacc.y"
    { (yyval).ptr = 0; }
    break;

  case 436:

/* Line 1806 of yacc.c  */
#line 534 "poet_yacc.y"
    { (yyval).ptr = make_inputlist2((yyvsp[(1) - (2)]).ptr, (yyvsp[(2) - (2)]).ptr); }
    break;

  case 437:

/* Line 1806 of yacc.c  */
#line 535 "poet_yacc.y"
    { (yyval).ptr = make_inputlist2((yyvsp[(1) - (2)]).ptr, (yyvsp[(2) - (2)]).ptr); }
    break;

  case 438:

/* Line 1806 of yacc.c  */
#line 536 "poet_yacc.y"
    { (yyval).ptr = make_inputlist2((yyvsp[(1) - (2)]).ptr, (yyvsp[(2) - (2)]).ptr); }
    break;

  case 439:

/* Line 1806 of yacc.c  */
#line 537 "poet_yacc.y"
    { (yyval).ptr = make_inputlist2(make_varRef((yyvsp[(1) - (2)]).ptr,GLOBAL_VAR), (yyvsp[(2) - (2)]).ptr); }
    break;

  case 440:

/* Line 1806 of yacc.c  */
#line 540 "poet_yacc.y"
    {(yyval).config=CODE_OR_XFORM_VAR;}
    break;

  case 441:

/* Line 1806 of yacc.c  */
#line 540 "poet_yacc.y"
    { (yyval).ptr = make_codeMatch((yyvsp[(0) - (3)]).ptr, (yyvsp[(3) - (3)]).ptr); }
    break;

  case 442:

/* Line 1806 of yacc.c  */
#line 540 "poet_yacc.y"
    { (yyval).ptr = (yyvsp[(5) - (5)]).ptr; }
    break;

  case 443:

/* Line 1806 of yacc.c  */
#line 541 "poet_yacc.y"
    { (yyval).ptr = (yyvsp[(1) - (1)]).ptr; }
    break;

  case 444:

/* Line 1806 of yacc.c  */
#line 543 "poet_yacc.y"
    { (yyval).ptr = (yyvsp[(0) - (0)]).ptr; }
    break;

  case 445:

/* Line 1806 of yacc.c  */
#line 544 "poet_yacc.y"
    {(yyval).config=CODE_OR_XFORM_VAR; }
    break;

  case 446:

/* Line 1806 of yacc.c  */
#line 544 "poet_yacc.y"
    {(yyval).ptr=(yyvsp[(0) - (5)]).ptr; }
    break;

  case 447:

/* Line 1806 of yacc.c  */
#line 545 "poet_yacc.y"
    { (yyval).ptr = make_inputlist2(make_annot((yyvsp[(4) - (7)]).ptr), (yyvsp[(7) - (7)]).ptr); }
    break;

  case 448:

/* Line 1806 of yacc.c  */
#line 548 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config;}
    break;

  case 449:

/* Line 1806 of yacc.c  */
#line 548 "poet_yacc.y"
    { (yyval).ptr = make_sourceUop(POET_OP_CAR, (yyvsp[(3) - (3)]).ptr); }
    break;

  case 450:

/* Line 1806 of yacc.c  */
#line 549 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config;}
    break;

  case 451:

/* Line 1806 of yacc.c  */
#line 549 "poet_yacc.y"
    { (yyval).ptr = make_sourceUop(POET_OP_CDR, (yyvsp[(3) - (3)]).ptr); }
    break;

  case 452:

/* Line 1806 of yacc.c  */
#line 550 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config;}
    break;

  case 453:

/* Line 1806 of yacc.c  */
#line 550 "poet_yacc.y"
    { (yyval).ptr = make_sourceUop(POET_OP_LEN, (yyvsp[(3) - (3)]).ptr); }
    break;

  case 454:

/* Line 1806 of yacc.c  */
#line 551 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config;}
    break;

  case 455:

/* Line 1806 of yacc.c  */
#line 551 "poet_yacc.y"
    { (yyval).ptr = make_sourceUop(TYPE_INT, (yyvsp[(3) - (3)]).ptr); }
    break;

  case 456:

/* Line 1806 of yacc.c  */
#line 552 "poet_yacc.y"
    { (yyval).ptr = make_sourceUop(POET_OP_CLEAR, make_varRef((yyvsp[(2) - (2)]).ptr,ASSIGN_VAR)); }
    break;

  case 457:

/* Line 1806 of yacc.c  */
#line 553 "poet_yacc.y"
    { (yyval).ptr=(yyvsp[(1) - (1)]).ptr; }
    break;

  case 458:

/* Line 1806 of yacc.c  */
#line 555 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config;}
    break;

  case 459:

/* Line 1806 of yacc.c  */
#line 555 "poet_yacc.y"
    { (yyval).ptr=(yyvsp[(3) - (4)]).ptr; }
    break;

  case 460:

/* Line 1806 of yacc.c  */
#line 556 "poet_yacc.y"
    { (yyval).ptr=(yyvsp[(1) - (1)]).ptr; }
    break;

  case 461:

/* Line 1806 of yacc.c  */
#line 557 "poet_yacc.y"
    { (yyval).ptr = make_any(); }
    break;

  case 462:

/* Line 1806 of yacc.c  */
#line 558 "poet_yacc.y"
    { (yyval)=(yyvsp[(1) - (1)]); }
    break;

  case 463:

/* Line 1806 of yacc.c  */
#line 559 "poet_yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]); }
    break;

  case 464:

/* Line 1806 of yacc.c  */
#line 561 "poet_yacc.y"
    {(yyval).ptr=(yyvsp[(1) - (1)]).ptr; (yyval).config=(yyvsp[(0) - (1)]).config; }
    break;

  case 465:

/* Line 1806 of yacc.c  */
#line 561 "poet_yacc.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 466:

/* Line 1806 of yacc.c  */
#line 562 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config; }
    break;

  case 467:

/* Line 1806 of yacc.c  */
#line 562 "poet_yacc.y"
    { (yyval).ptr = make_typeTor((yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 468:

/* Line 1806 of yacc.c  */
#line 563 "poet_yacc.y"
    {(yyval)=(yyvsp[(0) - (0)]); }
    break;

  case 469:

/* Line 1806 of yacc.c  */
#line 564 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config; (yyval).ptr=(yyvsp[(0) - (1)]).ptr; }
    break;

  case 470:

/* Line 1806 of yacc.c  */
#line 565 "poet_yacc.y"
    { (yyval).ptr = make_tupleAccess((yyvsp[(0) - (4)]).ptr, (yyvsp[(3) - (4)]).ptr); (yyval).config=(yyvsp[(0) - (4)]).config; }
    break;

  case 471:

/* Line 1806 of yacc.c  */
#line 566 "poet_yacc.y"
    { (yyval)=(yyvsp[(6) - (6)]); }
    break;

  case 472:

/* Line 1806 of yacc.c  */
#line 567 "poet_yacc.y"
    { (yyval)=(yyvsp[(1) - (1)]); }
    break;

  case 473:

/* Line 1806 of yacc.c  */
#line 569 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config; }
    break;

  case 474:

/* Line 1806 of yacc.c  */
#line 570 "poet_yacc.y"
    { (yyval).ptr = make_codeRef((yyvsp[(0) - (3)]).ptr,(yyvsp[(3) - (3)]).ptr,(yyvsp[(0) - (3)]).config); (yyval).config=(yyvsp[(0) - (3)]).config; }
    break;

  case 475:

/* Line 1806 of yacc.c  */
#line 572 "poet_yacc.y"
    {(yyval).ptr=(yyvsp[(1) - (1)]).ptr; (yyval).config=(yyvsp[(0) - (1)]).config; }
    break;

  case 476:

/* Line 1806 of yacc.c  */
#line 572 "poet_yacc.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 477:

/* Line 1806 of yacc.c  */
#line 573 "poet_yacc.y"
    {(yyval)=(yyvsp[(0) - (0)]); }
    break;

  case 478:

/* Line 1806 of yacc.c  */
#line 574 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config; (yyval).ptr=(yyvsp[(0) - (1)]).ptr; }
    break;

  case 479:

/* Line 1806 of yacc.c  */
#line 575 "poet_yacc.y"
    { (yyval).ptr = make_tupleAccess((yyvsp[(0) - (4)]).ptr, (yyvsp[(3) - (4)]).ptr); (yyval).config=(yyvsp[(0) - (4)]).config; }
    break;

  case 480:

/* Line 1806 of yacc.c  */
#line 576 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config; }
    break;

  case 481:

/* Line 1806 of yacc.c  */
#line 577 "poet_yacc.y"
    { (yyval).ptr = make_codeRef((yyvsp[(0) - (3)]).ptr,(yyvsp[(3) - (3)]).ptr,(yyvsp[(0) - (3)]).config);(yyval).config=(yyvsp[(0) - (3)]).config; }
    break;

  case 482:

/* Line 1806 of yacc.c  */
#line 579 "poet_yacc.y"
    {(yyval).ptr=(yyvsp[(1) - (1)]).ptr; (yyval).config=(yyvsp[(0) - (1)]).config; }
    break;

  case 483:

/* Line 1806 of yacc.c  */
#line 579 "poet_yacc.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 484:

/* Line 1806 of yacc.c  */
#line 580 "poet_yacc.y"
    {(yyval)=(yyvsp[(0) - (0)]); }
    break;

  case 485:

/* Line 1806 of yacc.c  */
#line 581 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config; (yyval).ptr=(yyvsp[(0) - (1)]).ptr; }
    break;

  case 486:

/* Line 1806 of yacc.c  */
#line 582 "poet_yacc.y"
    { (yyval).ptr = make_tupleAccess((yyvsp[(0) - (4)]).ptr, (yyvsp[(3) - (4)]).ptr); (yyval).config=(yyvsp[(0) - (4)]).config; }
    break;

  case 487:

/* Line 1806 of yacc.c  */
#line 583 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (1)]).config; }
    break;

  case 488:

/* Line 1806 of yacc.c  */
#line 584 "poet_yacc.y"
    { (yyval).ptr = make_codeRef((yyvsp[(0) - (3)]).ptr,(yyvsp[(3) - (3)]).ptr,(yyvsp[(0) - (3)]).config);(yyval).config=(yyvsp[(0) - (3)]).config; }
    break;

  case 489:

/* Line 1806 of yacc.c  */
#line 586 "poet_yacc.y"
    {(yyval).ptr=(yyvsp[(1) - (1)]).ptr;}
    break;

  case 490:

/* Line 1806 of yacc.c  */
#line 587 "poet_yacc.y"
    { (yyval).ptr = (yyvsp[(1) - (1)]).ptr; }
    break;

  case 491:

/* Line 1806 of yacc.c  */
#line 588 "poet_yacc.y"
    {(yyval).ptr = (yyvsp[(1) - (1)]).ptr; }
    break;

  case 492:

/* Line 1806 of yacc.c  */
#line 590 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 493:

/* Line 1806 of yacc.c  */
#line 591 "poet_yacc.y"
    { (yyval).ptr = make_typeTor((yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 494:

/* Line 1806 of yacc.c  */
#line 592 "poet_yacc.y"
    { (yyval).ptr = make_attrAccess(make_varRef((yyvsp[(1) - (3)]).ptr,CODE_OR_XFORM_VAR), (yyvsp[(3) - (3)]).ptr); }
    break;

  case 495:

/* Line 1806 of yacc.c  */
#line 595 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 496:

/* Line 1806 of yacc.c  */
#line 596 "poet_yacc.y"
    { (yyval).ptr = make_sourceAssign( make_attrAccess((yyvsp[(0) - (4)]).ptr,(yyvsp[(1) - (4)]).ptr),(yyvsp[(4) - (4)]).ptr); }
    break;

  case 497:

/* Line 1806 of yacc.c  */
#line 597 "poet_yacc.y"
    {(yyval).ptr=(yyvsp[(0) - (2)]).ptr; (yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 498:

/* Line 1806 of yacc.c  */
#line 598 "poet_yacc.y"
    { (yyval).ptr = make_seq((yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr); }
    break;

  case 499:

/* Line 1806 of yacc.c  */
#line 601 "poet_yacc.y"
    {(yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 500:

/* Line 1806 of yacc.c  */
#line 602 "poet_yacc.y"
    { (yyval).ptr = make_sourceAssign( make_attrAccess((yyvsp[(0) - (4)]).ptr,(yyvsp[(1) - (4)]).ptr),(yyvsp[(4) - (4)]).ptr); }
    break;

  case 501:

/* Line 1806 of yacc.c  */
#line 603 "poet_yacc.y"
    {(yyval).ptr=(yyvsp[(0) - (2)]).ptr; (yyval).config=(yyvsp[(0) - (2)]).config;}
    break;

  case 502:

/* Line 1806 of yacc.c  */
#line 604 "poet_yacc.y"
    { (yyval).ptr = make_seq((yyvsp[(1) - (4)]).ptr, (yyvsp[(4) - (4)]).ptr);}
    break;



/* Line 1806 of yacc.c  */
#line 6239 "poet_yacc.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 605 "poet_yacc.y"


