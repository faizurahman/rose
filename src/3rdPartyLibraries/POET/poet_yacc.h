/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
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

extern YYSTYPE yylval;


