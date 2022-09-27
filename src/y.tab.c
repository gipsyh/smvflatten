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
#line 9 "src/grammar.y"

#include "node.h"

#include <assert.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

extern int yylineno;
extern int verbose;
extern char yytext[];

/*------------------------------------------------------------------------*/

/*
#define YYSTYPE Node *
*/

int yyerror(const char * fmt, ...);
char * yyin_name = 0;

static int contains_same_constant_twice(Node * node);

/*------------------------------------------------------------------------*/

Node * yyparse_result = 0;

/*------------------------------------------------------------------------*/


/* Line 268 of yacc.c  */
#line 102 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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

/* Line 293 of yacc.c  */
#line 39 "src/grammar.y"

  Node * node;



/* Line 293 of yacc.c  */
#line 298 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 310 "y.tab.c"

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   399

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  149
/* YYNRULES -- Number of states.  */
#define YYNSTATES  283

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   332

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      78,    79,     2,     2,    80,     2,    87,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    81,    82,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    85,     2,    86,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,     2,    84,     2,     2,     2,     2,
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
      75,    76,    77
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     6,     8,    11,    14,    17,    23,
      25,    29,    30,    33,    36,    39,    42,    45,    48,    51,
      54,    57,    60,    63,    66,    69,    70,    73,    78,    80,
      87,    89,    92,    97,   103,   105,   107,   111,   115,   117,
     121,   123,   125,   127,   131,   138,   145,   146,   149,   157,
     165,   170,   171,   174,   179,   181,   183,   187,   189,   193,
     195,   199,   201,   205,   207,   211,   213,   216,   219,   222,
     225,   228,   231,   234,   237,   240,   243,   250,   257,   259,
     262,   264,   268,   270,   273,   275,   279,   281,   284,   286,
     290,   292,   295,   297,   301,   303,   306,   308,   312,   314,
     317,   319,   323,   325,   328,   330,   334,   336,   339,   341,
     345,   347,   350,   352,   356,   358,   361,   363,   367,   369,
     372,   374,   378,   380,   383,   385,   389,   391,   394,   396,
     400,   402,   405,   407,   411,   413,   416,   418,   420,   424,
     426,   431,   433,   437,   440,   441,   446,   450,   452,   455
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      89,     0,    -1,    -1,    90,    -1,    91,    -1,    91,    90,
      -1,    92,    94,    -1,    55,    11,    -1,    55,    11,    78,
      93,    79,    -1,    11,    -1,    11,    80,    93,    -1,    -1,
      95,    94,    -1,    76,    96,    -1,    77,    96,    -1,    40,
     109,    -1,    69,   109,    -1,    43,   109,    -1,    35,   109,
      -1,    67,   109,    -1,    46,   109,    -1,    17,   104,    -1,
      45,    11,    -1,     9,   105,    -1,    19,   107,    -1,    -1,
      97,    96,    -1,    11,    81,    98,    82,    -1,    14,    -1,
       8,    59,    71,    59,    60,    98,    -1,    11,    -1,    63,
      11,    -1,    11,    78,   103,    79,    -1,    63,    11,    78,
     103,    79,    -1,    99,    -1,   100,    -1,    83,   101,    84,
      -1,    59,    71,    59,    -1,   102,    -1,   102,    80,   101,
      -1,    11,    -1,    59,    -1,   109,    -1,   109,    80,   103,
      -1,    51,    85,   109,    80,   109,    86,    -1,    50,    85,
     109,    80,   109,    86,    -1,    -1,   106,   105,    -1,    66,
      78,   146,    79,    30,   109,    82,    -1,    56,    78,   146,
      79,    30,   109,    82,    -1,   146,    30,   109,    82,    -1,
      -1,   108,   107,    -1,   146,    30,   109,    82,    -1,   110,
      -1,   111,    -1,   111,    39,   110,    -1,   112,    -1,   111,
      38,   112,    -1,   113,    -1,   112,    61,   113,    -1,   114,
      -1,   113,     7,   114,    -1,   115,    -1,   114,    75,   115,
      -1,   117,    -1,    57,   115,    -1,    34,   115,    -1,    13,
     115,    -1,    26,   115,    -1,    28,   115,    -1,    24,   115,
      -1,     5,   115,    -1,    27,   115,    -1,    25,   115,    -1,
       6,   115,    -1,     3,    85,   109,    74,   109,    86,    -1,
      23,    85,   109,    74,   109,    86,    -1,   117,    -1,    57,
     116,    -1,   119,    -1,   119,    31,   116,    -1,   119,    -1,
      57,   118,    -1,   121,    -1,   121,    58,   118,    -1,   121,
      -1,    57,   120,    -1,   123,    -1,   123,    49,   120,    -1,
     123,    -1,    57,   122,    -1,   125,    -1,   125,    37,   122,
      -1,   125,    -1,    57,   124,    -1,   127,    -1,   127,    47,
     124,    -1,   127,    -1,    57,   126,    -1,   129,    -1,   129,
      36,   126,    -1,   129,    -1,    57,   128,    -1,   131,    -1,
     131,    73,   128,    -1,   131,    -1,    57,   130,    -1,   133,
      -1,   133,    64,   130,    -1,   133,    -1,    57,   132,    -1,
     135,    -1,   135,    65,   132,    -1,   135,    -1,    57,   134,
      -1,   137,    -1,   137,    54,   134,    -1,   137,    -1,    57,
     136,    -1,   139,    -1,   139,    62,   136,    -1,   141,    -1,
      57,   138,    -1,   141,    -1,   139,    53,   138,    -1,   141,
      -1,    57,   140,    -1,   143,    -1,   143,    68,   140,    -1,
     144,    -1,    57,   142,    -1,   144,    -1,   143,    21,   142,
      -1,   145,    -1,    53,   144,    -1,   146,    -1,    59,    -1,
      78,   109,    79,    -1,   100,    -1,    56,    78,   109,    79,
      -1,    99,    -1,    15,   148,    32,    -1,    11,   147,    -1,
      -1,    85,    59,    86,   147,    -1,    87,    11,   147,    -1,
     149,    -1,   149,   148,    -1,   109,    81,   109,    82,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    74,    74,    78,    86,    91,    99,   108,   119,   134,
     139,   148,   152,   160,   165,   170,   175,   180,   185,   190,
     195,   200,   205,   210,   215,   224,   228,   236,   244,   249,
     255,   260,   265,   270,   275,   277,   283,   294,   303,   308,
     316,   318,   323,   328,   336,   341,   350,   354,   362,   367,
     372,   381,   385,   393,   401,   406,   408,   416,   418,   426,
     428,   436,   438,   446,   448,   458,   460,   465,   470,   475,
     480,   485,   490,   495,   500,   505,   510,   515,   523,   525,
     533,   535,   543,   545,   553,   555,   563,   565,   573,   575,
     583,   585,   593,   595,   603,   605,   613,   615,   623,   625,
     633,   635,   643,   645,   653,   655,   663,   665,   673,   675,
     683,   685,   693,   695,   703,   705,   713,   715,   723,   725,
     733,   735,   743,   745,   753,   755,   763,   765,   773,   775,
     783,   785,   793,   795,   803,   805,   813,   815,   817,   822,
     824,   829,   831,   839,   849,   853,   858,   866,   871,   879
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "A", "ACCESS", "AF", "AG", "AND",
  "ARRAY", "ASSIGN", "AT", "ATOM", "AU", "AX", "BOOLEAN", "CASE", "COLON",
  "COMPUTE", "DECL", "DEFINE", "DEFINEASSIGNMENT", "DIVIDE", "DOT", "E",
  "EF", "EG", "F", "G", "X", "ENUM", "EQDEF", "EQUAL", "ESAC", "EU", "EX",
  "FAIRNESS", "GE", "GT", "IFF", "IMPLIES", "INIT", "INITASSIGNMENT",
  "INSTANCE", "INVAR", "INVARASSIGNMENT", "ISA", "LTLSPEC", "LE", "LIST",
  "LT", "MAX", "MIN", "MINU", "MINUS", "MOD", "MODULE", "NEXT", "NOT",
  "NOTEQUAL", "NUMBER", "OF", "OR", "PLUS", "PROCESS", "SETIN", "SETNOTIN",
  "SMALLINIT", "SPEC", "TIMES", "TRANS", "TRANSASSIGNMENT", "TWODOTS",
  "UMINUS", "UNION", "CTLUNTIL", "UNTIL", "VAR", "IVAR", "'('", "')'",
  "','", "':'", "';'", "'{'", "'}'", "'['", "']'", "'.'", "$accept",
  "start", "modules", "module", "port", "params", "sections", "section",
  "decls", "decl", "type", "enum", "range", "constants", "constant",
  "args", "compute", "assignments", "assignment", "definitions",
  "definition", "expr", "implications", "iff", "ors", "ands",
  "logical_binary", "logical_unary", "unary_equals", "equals",
  "unary_notequals", "notequals", "unary_lts", "lts", "unary_gts", "gts",
  "unary_les", "les", "unary_ges", "ges", "unary_unions", "unions",
  "unary_setins", "setins", "unary_setnotins", "setnotins", "unary_mods",
  "mods", "unary_sum", "sum", "unary_difference", "difference",
  "unary_product", "product", "unary_division", "division",
  "arithmetic_unary", "basic", "variable", "access", "cases", "case", 0
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
     325,   326,   327,   328,   329,   330,   331,   332,    40,    41,
      44,    58,    59,   123,   125,    91,    93,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    89,    90,    90,    91,    92,    92,    93,
      93,    94,    94,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    96,    96,    97,    98,    98,
      98,    98,    98,    98,    98,    98,    99,   100,   101,   101,
     102,   102,   103,   103,   104,   104,   105,   105,   106,   106,
     106,   107,   107,   108,   109,   110,   110,   111,   111,   112,
     112,   113,   113,   114,   114,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   116,   116,
     117,   117,   118,   118,   119,   119,   120,   120,   121,   121,
     122,   122,   123,   123,   124,   124,   125,   125,   126,   126,
     127,   127,   128,   128,   129,   129,   130,   130,   131,   131,
     132,   132,   133,   133,   134,   134,   135,   135,   136,   136,
     137,   137,   138,   138,   139,   139,   140,   140,   141,   141,
     142,   142,   143,   143,   144,   144,   145,   145,   145,   145,
     145,   145,   145,   146,   147,   147,   147,   148,   148,   149
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     2,     2,     5,     1,
       3,     0,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     0,     2,     4,     1,     6,
       1,     2,     4,     5,     1,     1,     3,     3,     1,     3,
       1,     1,     1,     3,     6,     6,     0,     2,     7,     7,
       4,     0,     2,     4,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     6,     6,     1,     2,
       1,     3,     1,     2,     1,     3,     1,     2,     1,     3,
       1,     2,     1,     3,     1,     2,     1,     3,     1,     2,
       1,     3,     1,     2,     1,     3,     1,     2,     1,     3,
       1,     2,     1,     3,     1,     2,     1,     3,     1,     2,
       1,     3,     1,     2,     1,     3,     1,     2,     1,     3,
       1,     2,     1,     3,     1,     2,     1,     1,     3,     1,
       4,     1,     3,     2,     0,     4,     3,     1,     2,     4
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     3,     4,    11,     7,     1,     5,    46,
       0,    51,     0,     0,     0,     0,     0,     0,     0,    25,
      25,     6,    11,     0,   144,     0,     0,    23,    46,     0,
       0,     0,    21,    24,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   137,     0,     0,   141,   139,    18,    54,    55,    57,
      59,    61,    63,    65,    80,    84,    88,    92,    96,   100,
     104,   108,   112,   116,   120,   124,   128,   132,   134,   136,
      15,    17,    22,    20,    19,    16,     0,    13,    25,    14,
      12,     9,     0,     0,     0,   143,     0,     0,    47,     0,
       0,     0,    52,     0,     0,    72,    75,    68,     0,     0,
     147,     0,    71,    74,    69,    73,    70,    67,   135,     0,
      66,     0,     0,    40,    41,     0,    38,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     8,
       0,   144,     0,     0,     0,     0,     0,     0,     0,     0,
     142,   148,     0,     0,    37,   138,    36,     0,    58,    56,
      60,    62,    64,     0,    81,    78,     0,    85,    82,     0,
      89,    86,     0,    93,    90,     0,    97,    94,     0,   101,
      98,     0,   105,   102,     0,   109,   106,     0,   113,   110,
       0,   117,   114,     0,   125,   122,     0,   121,   118,     0,
     133,   130,     0,   129,   126,     0,    30,    28,     0,     0,
       0,    34,    35,    10,   144,   146,     0,     0,    50,     0,
       0,    53,     0,     0,     0,   140,    39,    79,    83,    87,
      91,    95,    99,   103,   107,   111,   115,   123,   119,   131,
     127,     0,     0,    31,    27,   145,     0,     0,     0,     0,
       0,   149,     0,     0,     0,    42,     0,     0,     0,    45,
      44,    76,    77,     0,    32,     0,     0,    49,    48,     0,
      43,    33,    29
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     5,    92,    21,    22,    87,    88,
     220,    54,    55,   125,   126,   264,    32,    27,    28,    33,
      34,   265,    57,    58,    59,    60,    61,    62,   174,    63,
     177,    64,   180,    65,   183,    66,   186,    67,   189,    68,
     192,    69,   195,    70,   198,    71,   201,    72,   207,    73,
     204,    74,   213,    75,   210,    76,    77,    78,    79,    95,
     109,   110
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -232
static const yytype_int16 yypact[] =
{
     -22,    40,    53,  -232,   -22,   322,   -20,  -232,  -232,    14,
     -14,    50,    49,    49,    49,    52,    49,    49,    49,    55,
      55,  -232,   322,    57,   -53,    -9,    38,  -232,    14,    88,
      35,    36,  -232,  -232,    50,    92,    39,    49,    49,    49,
      49,    43,    49,    49,    49,    49,    49,    49,   277,    45,
      49,    59,    49,    54,  -232,  -232,  -232,  -232,    11,    70,
     126,    60,  -232,  -232,   106,    82,    95,   109,   101,   113,
      77,    87,    90,    98,   -24,  -232,    25,  -232,  -232,  -232,
    -232,  -232,  -232,  -232,  -232,  -232,    80,  -232,    55,  -232,
    -232,    83,    93,   115,   154,  -232,    50,    50,  -232,    49,
      49,    49,  -232,    49,    49,  -232,  -232,  -232,    94,   145,
      49,    49,  -232,  -232,  -232,  -232,  -232,  -232,  -232,    49,
    -232,   122,   105,  -232,  -232,   102,   107,    49,    49,    49,
      49,    49,    86,   100,   114,   123,   143,   151,   174,   183,
     194,   217,   226,   249,   260,   269,    31,  -232,    57,  -232,
     104,   -53,   112,   116,   111,   108,   131,   121,   138,    49,
    -232,  -232,   139,   135,  -232,  -232,  -232,    54,    70,  -232,
     126,    60,  -232,    86,  -232,  -232,   100,  -232,  -232,   114,
    -232,  -232,   123,  -232,  -232,   143,  -232,  -232,   151,  -232,
    -232,   174,  -232,  -232,   183,  -232,  -232,   194,  -232,  -232,
     217,  -232,  -232,   226,  -232,  -232,   249,  -232,  -232,   260,
    -232,  -232,   269,  -232,  -232,   156,   141,  -232,    59,   205,
     142,  -232,  -232,  -232,   -53,  -232,   193,   195,  -232,    49,
      49,  -232,    49,   153,    49,  -232,  -232,  -232,  -232,  -232,
    -232,  -232,  -232,  -232,  -232,  -232,  -232,  -232,  -232,  -232,
    -232,   167,    49,   165,  -232,  -232,    49,    49,   160,   162,
     163,  -232,   168,   196,   177,   178,    49,   180,   181,  -232,
    -232,  -232,  -232,   199,  -232,    49,   186,  -232,  -232,    31,
    -232,  -232,  -232
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -232,  -232,   263,  -232,  -232,   120,   247,  -232,    -7,  -232,
      -1,  -143,  -138,   119,  -232,  -231,  -232,   253,  -232,   255,
    -232,   -12,   159,  -232,   164,   161,   166,   -27,   124,   -13,
     117,   -76,   128,   -67,   129,   -87,   118,  -106,   110,  -110,
     103,   -95,   127,  -108,   132,  -126,    99,  -115,   134,  -122,
     146,  -232,    89,   -86,   125,  -232,   -41,  -232,    13,  -142,
     200,  -232
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      56,    80,    81,   221,    83,    84,    85,   118,   222,   225,
     105,   106,   107,    89,   199,   112,   113,   114,   115,   116,
     117,   208,    29,   120,    35,    24,   202,   190,   108,   142,
     187,   196,    93,     1,    94,   276,    30,    31,   143,   215,
     122,    29,   216,   193,   280,   217,   144,    35,   184,   127,
     128,     6,    36,     7,    37,    38,   205,   178,    23,   214,
      24,    24,    39,    82,    40,   123,    86,   181,    91,    96,
      25,   199,    41,    42,    43,    44,    45,    46,   190,   187,
      26,   147,   255,    47,   208,   202,   196,   154,   155,   156,
     218,   157,   158,   145,   219,   184,   193,    24,   108,   162,
     178,    40,    48,   211,   172,    49,    50,   163,    51,   152,
     153,    24,   181,   124,    53,    40,    97,   205,    99,   175,
     100,   101,   103,   119,   104,    24,   214,    52,   111,    40,
     121,   129,    53,   130,    24,   131,   221,   132,    40,    48,
     133,   222,    49,   173,   134,    51,   135,   233,   136,   137,
     138,   139,   141,    48,    24,   140,    49,   176,    40,    51,
     175,   146,    24,   148,    52,   151,    40,    48,   211,    53,
      49,   179,   149,    51,   150,   159,    48,   160,    52,    49,
     182,   164,    51,    53,   165,    24,   166,   167,   229,    40,
     224,   226,    52,   228,    24,   227,    48,    53,    40,    49,
     185,    52,    51,   231,    48,    24,    53,    49,   188,    40,
      51,   230,   232,   234,   235,   251,   253,   258,   259,   252,
     260,    52,   262,   256,   254,   257,    53,    48,    24,    52,
      49,   191,    40,    51,    53,   261,    48,    24,   263,    49,
     194,    40,    51,   266,   267,   268,   269,    48,   270,   271,
      49,   197,    52,    51,   272,   273,   274,    53,   275,   279,
      24,    52,   277,   278,    40,   281,    53,     8,   223,    90,
      48,    24,    52,    49,   200,    40,    51,    53,   282,    48,
      24,    98,    49,   203,    40,    51,   236,   169,    24,   102,
     170,   168,    40,   238,   243,    52,   171,   237,   242,   246,
      53,   250,    48,   241,    52,    49,   206,   239,    51,    53,
     161,   240,     0,    48,     0,     0,    49,   209,     0,    51,
       0,   244,    48,     0,     0,    49,   212,    52,    51,   245,
      48,     9,    53,    49,   249,     0,    51,     0,    52,    10,
     248,    11,     0,    53,     0,     0,     0,    52,     0,   247,
       0,     0,    53,     0,     0,    52,     0,    12,     0,     0,
      53,     0,    13,     0,     0,    14,     0,    15,    16,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    17,
       0,    18,     0,     0,     0,     0,     0,     0,    19,    20
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-232))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      12,    13,    14,   146,    16,    17,    18,    48,   146,   151,
      37,    38,    39,    20,   140,    42,    43,    44,    45,    46,
      47,   143,     9,    50,    11,    11,   141,   137,    40,    53,
     136,   139,    85,    55,    87,   266,    50,    51,    62,     8,
      52,    28,    11,   138,   275,    14,    21,    34,   135,    38,
      39,    11,     3,     0,     5,     6,   142,   133,    78,   145,
      11,    11,    13,    11,    15,    11,    11,   134,    11,    78,
      56,   197,    23,    24,    25,    26,    27,    28,   188,   185,
      66,    88,   224,    34,   206,   200,   194,    99,   100,   101,
      59,   103,   104,    68,    63,   182,   191,    11,   110,   111,
     176,    15,    53,   144,   131,    56,    57,   119,    59,    96,
      97,    11,   179,    59,    83,    15,    78,   203,    30,   132,
      85,    85,    30,    78,    85,    11,   212,    78,    85,    15,
      71,    61,    83,     7,    11,    75,   279,    31,    15,    53,
      58,   279,    56,    57,    49,    59,    37,   159,    47,    36,
      73,    64,    54,    53,    11,    65,    56,    57,    15,    59,
     173,    81,    11,    80,    78,    11,    15,    53,   209,    83,
      56,    57,    79,    59,    59,    81,    53,    32,    78,    56,
      57,    59,    59,    83,    79,    11,    84,    80,    80,    15,
      86,    79,    78,    82,    11,    79,    53,    83,    15,    56,
      57,    78,    59,    82,    53,    11,    83,    56,    57,    15,
      59,    80,    74,    74,    79,    59,    11,   229,   230,    78,
     232,    78,   234,    30,    82,    30,    83,    53,    11,    78,
      56,    57,    15,    59,    83,    82,    53,    11,    71,    56,
      57,    15,    59,    78,   256,   257,    86,    53,    86,    86,
      56,    57,    78,    59,    86,    59,    79,    83,    80,    60,
      11,    78,    82,    82,    15,    79,    83,     4,   148,    22,
      53,    11,    78,    56,    57,    15,    59,    83,   279,    53,
      11,    28,    56,    57,    15,    59,   167,   128,    11,    34,
     129,   127,    15,   176,   191,    78,   130,   173,   188,   200,
      83,   212,    53,   185,    78,    56,    57,   179,    59,    83,
     110,   182,    -1,    53,    -1,    -1,    56,    57,    -1,    59,
      -1,   194,    53,    -1,    -1,    56,    57,    78,    59,   197,
      53,     9,    83,    56,   209,    -1,    59,    -1,    78,    17,
     206,    19,    -1,    83,    -1,    -1,    -1,    78,    -1,   203,
      -1,    -1,    83,    -1,    -1,    78,    -1,    35,    -1,    -1,
      83,    -1,    40,    -1,    -1,    43,    -1,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    55,    89,    90,    91,    92,    11,     0,    90,     9,
      17,    19,    35,    40,    43,    45,    46,    67,    69,    76,
      77,    94,    95,    78,    11,    56,    66,   105,   106,   146,
      50,    51,   104,   107,   108,   146,     3,     5,     6,    13,
      15,    23,    24,    25,    26,    27,    28,    34,    53,    56,
      57,    59,    78,    83,    99,   100,   109,   110,   111,   112,
     113,   114,   115,   117,   119,   121,   123,   125,   127,   129,
     131,   133,   135,   137,   139,   141,   143,   144,   145,   146,
     109,   109,    11,   109,   109,   109,    11,    96,    97,    96,
      94,    11,    93,    85,    87,   147,    78,    78,   105,    30,
      85,    85,   107,    30,    85,   115,   115,   115,   109,   148,
     149,    85,   115,   115,   115,   115,   115,   115,   144,    78,
     115,    71,   109,    11,    59,   101,   102,    38,    39,    61,
       7,    75,    31,    58,    49,    37,    47,    36,    73,    64,
      65,    54,    53,    62,    21,    68,    81,    96,    80,    79,
      59,    11,   146,   146,   109,   109,   109,   109,   109,    81,
      32,   148,   109,   109,    59,    79,    84,    80,   112,   110,
     113,   114,   115,    57,   116,   117,    57,   118,   119,    57,
     120,   121,    57,   122,   123,    57,   124,   125,    57,   126,
     127,    57,   128,   129,    57,   130,   131,    57,   132,   133,
      57,   134,   135,    57,   138,   141,    57,   136,   137,    57,
     142,   144,    57,   140,   141,     8,    11,    14,    59,    63,
      98,    99,   100,    93,    86,   147,    79,    79,    82,    80,
      80,    82,    74,   109,    74,    79,   101,   116,   118,   120,
     122,   124,   126,   128,   130,   132,   134,   138,   136,   142,
     140,    59,    78,    11,    82,   147,    30,    30,   109,   109,
     109,    82,   109,    71,   103,   109,    78,   109,   109,    86,
      86,    86,    86,    59,    79,    80,   103,    82,    82,    60,
     103,    79,    98
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
        case 2:

/* Line 1806 of yacc.c  */
#line 74 "src/grammar.y"
    {
  yyerror("no module found");
}
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 79 "src/grammar.y"
    {
  yyparse_result = (yyvsp[(1) - (1)].node);
}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 87 "src/grammar.y"
    {
  (yyval.node) = cons((yyvsp[(1) - (1)].node), 0);
}
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 92 "src/grammar.y"
    {
  (yyval.node) = cons((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 100 "src/grammar.y"
    {
  (yyval.node) = new(MODULE, copy(car((yyvsp[(1) - (2)].node))), (yyvsp[(2) - (2)].node));
  delete((yyvsp[(1) - (2)].node));
}
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 109 "src/grammar.y"
    {
  if(verbose >= 2)
    fprintf(
      stderr,
      "-- [verbose]   parsing MODULE %s/0\n",
      (char*) car((yyvsp[(2) - (2)].node)));

  (yyval.node) = new(MODULE, cons((yyvsp[(2) - (2)].node), 0), 0);
}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 120 "src/grammar.y"
    {
  if(verbose >= 2)
    fprintf(
      stderr,
      "-- [verbose]   parsing MODULE %s/%u\n",
      (char*) car((yyvsp[(2) - (5)].node)),
      length((yyvsp[(4) - (5)].node)));

  (yyval.node) = new(MODULE, cons((yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node)), 0);
}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 135 "src/grammar.y"
    {
  (yyval.node) = cons((yyvsp[(1) - (1)].node), 0);
}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 140 "src/grammar.y"
    {
  (yyval.node) = cons((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 148 "src/grammar.y"
    {
  (yyval.node) = 0;
}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 153 "src/grammar.y"
    {
  (yyval.node) = cons((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 161 "src/grammar.y"
    {
  (yyval.node) = new(VAR, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 166 "src/grammar.y"
    {
  (yyval.node) = new(IVAR, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 171 "src/grammar.y"
    {
  (yyval.node) = new(INIT, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 176 "src/grammar.y"
    {
  (yyval.node) = new(TRANS, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 181 "src/grammar.y"
    {
  (yyval.node) = new(INVAR, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 186 "src/grammar.y"
    {
  (yyval.node) = new(FAIRNESS, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 191 "src/grammar.y"
    {
  (yyval.node) = new(SPEC, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 196 "src/grammar.y"
    {
  (yyval.node) = new(LTLSPEC, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 201 "src/grammar.y"
    {
  (yyval.node) = new(COMPUTE, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 206 "src/grammar.y"
    {
  (yyval.node) = new(ISA, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 211 "src/grammar.y"
    {
  (yyval.node) = new(ASSIGN, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 216 "src/grammar.y"
    {
  (yyval.node) = new(DEFINE, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 224 "src/grammar.y"
    {
  (yyval.node) = 0;
}
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 229 "src/grammar.y"
    {
  (yyval.node) = cons((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 237 "src/grammar.y"
    {
  (yyval.node) = new(DECL, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
}
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 245 "src/grammar.y"
    {
  (yyval.node) = new(BOOLEAN, 0, 0);
}
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 250 "src/grammar.y"
    {
  if(((long)car((yyvsp[(2) - (6)].node))) > ((long)car((yyvsp[(4) - (6)].node)))) yyerror("non valid range");
  (yyval.node) = new(ARRAY, new(TWODOTS, (yyvsp[(2) - (6)].node), (yyvsp[(4) - (6)].node)), (yyvsp[(6) - (6)].node));
}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 256 "src/grammar.y"
    {
  (yyval.node) = new(INSTANCE, cons((yyvsp[(1) - (1)].node), 0), 0);
}
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 261 "src/grammar.y"
    {
  (yyval.node) = new(PROCESS, new(INSTANCE, cons((yyvsp[(2) - (2)].node), 0), 0), 0);
}
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 266 "src/grammar.y"
    {
  (yyval.node) = new(INSTANCE, cons((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node)), 0);
}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 271 "src/grammar.y"
    {
  (yyval.node) = new(PROCESS, new(INSTANCE, cons((yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node)), 0), 0);
}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 284 "src/grammar.y"
    {
  if(contains_same_constant_twice((yyvsp[(2) - (3)].node)))
    yyerror("same constant occurs twice in enumeration");

  (yyval.node) = new(ENUM, (yyvsp[(2) - (3)].node), 0);
}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 295 "src/grammar.y"
    {
  if(((long)car((yyvsp[(1) - (3)].node))) > ((long)car((yyvsp[(3) - (3)].node)))) yyerror("non valid range");
  (yyval.node) = new(TWODOTS, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 304 "src/grammar.y"
    {
  (yyval.node) = cons((yyvsp[(1) - (1)].node), 0);
}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 309 "src/grammar.y"
    {
  (yyval.node) = cons((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 324 "src/grammar.y"
    {
  (yyval.node) = cons((yyvsp[(1) - (1)].node), 0);
}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 329 "src/grammar.y"
    {
  (yyval.node) = cons((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 337 "src/grammar.y"
    {
  (yyval.node) = new(MIN, (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node));
}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 342 "src/grammar.y"
    {
  (yyval.node) = new(MAX, (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node));
}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 350 "src/grammar.y"
    {
  (yyval.node) = 0;
}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 355 "src/grammar.y"
    {
  (yyval.node) = cons((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 363 "src/grammar.y"
    {
  (yyval.node) = new(INITASSIGNMENT, (yyvsp[(3) - (7)].node), (yyvsp[(6) - (7)].node));
}
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 368 "src/grammar.y"
    {
  (yyval.node) = new(TRANSASSIGNMENT, (yyvsp[(3) - (7)].node), (yyvsp[(6) - (7)].node));
}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 373 "src/grammar.y"
    {
  (yyval.node) = new(INVARASSIGNMENT, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
}
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 381 "src/grammar.y"
    {
  (yyval.node) = 0;
}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 386 "src/grammar.y"
    {
  (yyval.node) = cons((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
}
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 394 "src/grammar.y"
    {
  (yyval.node) = new(DEFINEASSIGNMENT, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
}
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 409 "src/grammar.y"
    {
  (yyval.node) = new(IMPLIES, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 419 "src/grammar.y"
    {
  (yyval.node) = new(IFF, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 429 "src/grammar.y"
    {
  (yyval.node) = new(OR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 439 "src/grammar.y"
    {
  (yyval.node) = new(AND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 451 "src/grammar.y"
    {
  (yyval.node) = new(UNTIL, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 461 "src/grammar.y"
    {
  (yyval.node) = new(NOT, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 466 "src/grammar.y"
    {
  (yyval.node) = new(EX, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 471 "src/grammar.y"
    {
  (yyval.node) = new(AX, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 476 "src/grammar.y"
    {
  (yyval.node) = new(F, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 481 "src/grammar.y"
    {
  (yyval.node) = new(X, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 486 "src/grammar.y"
    {
  (yyval.node) = new(EF, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 491 "src/grammar.y"
    {
  (yyval.node) = new(AF, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 496 "src/grammar.y"
    {
  (yyval.node) = new(G, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 501 "src/grammar.y"
    {
  (yyval.node) = new(EG, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 506 "src/grammar.y"
    {
  (yyval.node) = new(AG, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 511 "src/grammar.y"
    {
  (yyval.node) = new(AU, (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node));
}
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 516 "src/grammar.y"
    {
  (yyval.node) = new(EU, (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node));
}
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 526 "src/grammar.y"
    {
  (yyval.node) = new(NOT, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 536 "src/grammar.y"
    {
  (yyval.node) = new(EQUAL, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 546 "src/grammar.y"
    {
  (yyval.node) = new(NOT, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 556 "src/grammar.y"
    {
  (yyval.node) = new (NOTEQUAL, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 566 "src/grammar.y"
    {
  (yyval.node) = new(NOT, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 576 "src/grammar.y"
    {
  (yyval.node) = new(LT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 586 "src/grammar.y"
    {
  (yyval.node) = new(NOT, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 596 "src/grammar.y"
    {
  (yyval.node) = new(GT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 606 "src/grammar.y"
    {
  (yyval.node) = new(NOT, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 616 "src/grammar.y"
    {
  (yyval.node) = new(LE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 626 "src/grammar.y"
    {
  (yyval.node) = new(NOT, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 636 "src/grammar.y"
    { 
  (yyval.node) = new(GE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 646 "src/grammar.y"
    {
  (yyval.node) = new(NOT, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 656 "src/grammar.y"
    {
  (yyval.node) = new(UNION, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 666 "src/grammar.y"
    {
  (yyval.node) = new(NOT, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 676 "src/grammar.y"
    {
  (yyval.node) = new(SETIN, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 686 "src/grammar.y"
    {
  (yyval.node) = new(NOT, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 696 "src/grammar.y"
    {
  (yyval.node) = new(SETNOTIN, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 706 "src/grammar.y"
    {
  (yyval.node) = new(NOT, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 716 "src/grammar.y"
    {
  (yyval.node) = new(MOD, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 726 "src/grammar.y"
    {
  (yyval.node) = new(NOT, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 736 "src/grammar.y"
    {
  (yyval.node) = new(PLUS, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 746 "src/grammar.y"
    {
  (yyval.node) = new(NOT, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 756 "src/grammar.y"
    {
  (yyval.node) = new(MINUS, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 766 "src/grammar.y"
    {
  (yyval.node) = new(NOT, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 776 "src/grammar.y"
    {
  (yyval.node) = new(TIMES, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 786 "src/grammar.y"
    {
  (yyval.node) = new(NOT, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 796 "src/grammar.y"
    {
  (yyval.node) = new(DIVIDE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 806 "src/grammar.y"
    {
  (yyval.node) = new(UMINUS, (yyvsp[(2) - (2)].node), 0);
}
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 818 "src/grammar.y"
    {
  (yyval.node) = (yyvsp[(2) - (3)].node);
}
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 825 "src/grammar.y"
    {
  (yyval.node) = new(NEXT, (yyvsp[(3) - (4)].node), 0);
}
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 832 "src/grammar.y"
    {
  (yyval.node) = new(CASE, (yyvsp[(2) - (3)].node), 0);
}
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 840 "src/grammar.y"
    {
  if((yyvsp[(2) - (2)].node)) (yyval.node) = new(ACCESS, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
  else (yyval.node) = (yyvsp[(1) - (2)].node);
}
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 849 "src/grammar.y"
    {
  (yyval.node) = 0;
}
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 854 "src/grammar.y"
    {
  (yyval.node) = new(ACCESS, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
}
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 859 "src/grammar.y"
    {
  (yyval.node) = new(ACCESS, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 867 "src/grammar.y"
    {
  (yyval.node) = cons((yyvsp[(1) - (1)].node), 0);
}
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 872 "src/grammar.y"
    {
  (yyval.node) = cons((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
}
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 880 "src/grammar.y"
    {
  (yyval.node) = new(COLON, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
}
    break;



/* Line 1806 of yacc.c  */
#line 2786 "y.tab.c"
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
#line 885 "src/grammar.y"


static int contains_same_constant_twice(Node * node)
{
  Node * p, * q;
  int res;

  assert(node);
  assert(node -> tag == LIST);

  for(res = 0, p = node; !res && p; p = cdr(p))
    {
      for(q = cdr(p); !res && q; q = cdr(q))
        {
	  res = (car(p) == car(q));
	}
    }
  
  return res;
}

/*------------------------------------------------------------------------*/

int yyerror(const char * fmt, ...)
{
  va_list ap;

  fprintf(stderr, "%s:%d: ", yyin_name ? yyin_name : "<stdin>", yylineno);
  if(yytext[0]) fprintf(stderr, "at '%s': ", yytext);

  va_start(ap, fmt);
  vfprintf(stderr, fmt, ap);
  va_end(ap);

  fputc('\n', stderr);
  fflush(stderr);

  exit(1);
  return(1);
}

