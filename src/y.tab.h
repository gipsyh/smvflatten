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
     A = 258,
     ACCESS = 259,
     AF = 260,
     AG = 261,
     AND = 262,
     ARRAY = 263,
     ASSIGN = 264,
     AT = 265,
     ATOM = 266,
     AU = 267,
     AX = 268,
     BOOLEAN = 269,
     CASE = 270,
     COLON = 271,
     COMPUTE = 272,
     DECL = 273,
     DEFINE = 274,
     DEFINEASSIGNMENT = 275,
     DIVIDE = 276,
     DOT = 277,
     E = 278,
     EF = 279,
     EG = 280,
     F = 281,
     G = 282,
     X = 283,
     ENUM = 284,
     EQDEF = 285,
     EQUAL = 286,
     ESAC = 287,
     EU = 288,
     EX = 289,
     FAIRNESS = 290,
     GE = 291,
     GT = 292,
     IFF = 293,
     IMPLIES = 294,
     INIT = 295,
     INITASSIGNMENT = 296,
     INSTANCE = 297,
     INVAR = 298,
     INVARASSIGNMENT = 299,
     ISA = 300,
     LTLSPEC = 301,
     LE = 302,
     LIST = 303,
     LT = 304,
     MAX = 305,
     MIN = 306,
     MINU = 307,
     MINUS = 308,
     MOD = 309,
     MODULE = 310,
     NEXT = 311,
     NOT = 312,
     NOTEQUAL = 313,
     NUMBER = 314,
     OF = 315,
     OR = 316,
     PLUS = 317,
     PROCESS = 318,
     SETIN = 319,
     SETNOTIN = 320,
     SMALLINIT = 321,
     SPEC = 322,
     TIMES = 323,
     TRANS = 324,
     TRANSASSIGNMENT = 325,
     TWODOTS = 326,
     UMINUS = 327,
     UNION = 328,
     CTLUNTIL = 329,
     UNTIL = 330,
     VAR = 331,
     IVAR = 332
   };
#endif
/* Tokens.  */
#define A 258
#define ACCESS 259
#define AF 260
#define AG 261
#define AND 262
#define ARRAY 263
#define ASSIGN 264
#define AT 265
#define ATOM 266
#define AU 267
#define AX 268
#define BOOLEAN 269
#define CASE 270
#define COLON 271
#define COMPUTE 272
#define DECL 273
#define DEFINE 274
#define DEFINEASSIGNMENT 275
#define DIVIDE 276
#define DOT 277
#define E 278
#define EF 279
#define EG 280
#define F 281
#define G 282
#define X 283
#define ENUM 284
#define EQDEF 285
#define EQUAL 286
#define ESAC 287
#define EU 288
#define EX 289
#define FAIRNESS 290
#define GE 291
#define GT 292
#define IFF 293
#define IMPLIES 294
#define INIT 295
#define INITASSIGNMENT 296
#define INSTANCE 297
#define INVAR 298
#define INVARASSIGNMENT 299
#define ISA 300
#define LTLSPEC 301
#define LE 302
#define LIST 303
#define LT 304
#define MAX 305
#define MIN 306
#define MINU 307
#define MINUS 308
#define MOD 309
#define MODULE 310
#define NEXT 311
#define NOT 312
#define NOTEQUAL 313
#define NUMBER 314
#define OF 315
#define OR 316
#define PLUS 317
#define PROCESS 318
#define SETIN 319
#define SETNOTIN 320
#define SMALLINIT 321
#define SPEC 322
#define TIMES 323
#define TRANS 324
#define TRANSASSIGNMENT 325
#define TWODOTS 326
#define UMINUS 327
#define UNION 328
#define CTLUNTIL 329
#define UNTIL 330
#define VAR 331
#define IVAR 332




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 2068 of yacc.c  */
#line 39 "src/grammar.y"

  Node * node;



/* Line 2068 of yacc.c  */
#line 210 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


