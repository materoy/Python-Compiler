/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     DIGITS = 258,
     NAME = 259,
     PLUS = 260,
     MINUS = 261,
     MUL = 262,
     DIVIDE = 263,
     NUM = 264,
     STRING = 265,
     INTEGER = 266,
     SPECIAL = 267,
     NL = 268,
     SPACE = 269,
     KEYWORD = 270,
     SPECIAL_START = 271,
     SPECIAL_END = 272,
     IF = 273,
     ELSE = 274,
     WHILE = 275,
     SEP = 276,
     END = 277,
     OR = 278,
     AND = 279,
     NOT = 280,
     IN = 281,
     NOTIN = 282,
     T = 283,
     F = 284,
     COLON = 285,
     SQUAREBRACKET_START = 286,
     SQUAREBRACKET_END = 287,
     MOD = 288,
     EQUAL = 289,
     PLUSEQUAL = 290,
     PRINT = 291,
     COMMENT = 292,
     RANGE = 293,
     SINGLEQUOTE = 294,
     DOUBLEQUOTE = 295,
     EXPONENTIAL = 296,
     COMMA = 297,
     INDENT = 298,
     LIST = 299,
     DIVIDEEQUAL = 300,
     MINUSEQUAL = 301,
     MULEQUAL = 302,
     LESSTHAN = 303,
     LESSTHANEQUAL = 304,
     GREATERTHAN = 305,
     GREATERTHANEQUAL = 306,
     DOUBLEEQUAL = 307,
     NOTEQUAL = 308,
     ENDMARKER = 309,
     BREAK = 310,
     PASS = 311,
     CONTINUE = 312,
     GLOBAL = 313,
     NONLOCAL = 314,
     NEWLINE = 315,
     ASYNC = 316,
     TYPE_COMMENT = 317,
     IMPORT = 318,
     RAISE = 319,
     FROM = 320,
     DEL = 321,
     NUMBER = 322,
     NONE = 323,
     TRUE = 324,
     FALSE = 325,
     CLASS = 326,
     IS = 327,
     AS = 328,
     FOR = 329,
     AWAIT = 330,
     ELIF = 331,
     WITH = 332,
     DEF = 333,
     DEDENT = 334,
     TRY = 335,
     EXCEPT = 336,
     FINALLY = 337,
     MATCH = 338,
     CASE = 339,
     RETURN = 340,
     ASSERT = 341,
     YIELD = 342,
     LAMBDA = 343
   };
#endif
/* Tokens.  */
#define DIGITS 258
#define NAME 259
#define PLUS 260
#define MINUS 261
#define MUL 262
#define DIVIDE 263
#define NUM 264
#define STRING 265
#define INTEGER 266
#define SPECIAL 267
#define NL 268
#define SPACE 269
#define KEYWORD 270
#define SPECIAL_START 271
#define SPECIAL_END 272
#define IF 273
#define ELSE 274
#define WHILE 275
#define SEP 276
#define END 277
#define OR 278
#define AND 279
#define NOT 280
#define IN 281
#define NOTIN 282
#define T 283
#define F 284
#define COLON 285
#define SQUAREBRACKET_START 286
#define SQUAREBRACKET_END 287
#define MOD 288
#define EQUAL 289
#define PLUSEQUAL 290
#define PRINT 291
#define COMMENT 292
#define RANGE 293
#define SINGLEQUOTE 294
#define DOUBLEQUOTE 295
#define EXPONENTIAL 296
#define COMMA 297
#define INDENT 298
#define LIST 299
#define DIVIDEEQUAL 300
#define MINUSEQUAL 301
#define MULEQUAL 302
#define LESSTHAN 303
#define LESSTHANEQUAL 304
#define GREATERTHAN 305
#define GREATERTHANEQUAL 306
#define DOUBLEEQUAL 307
#define NOTEQUAL 308
#define ENDMARKER 309
#define BREAK 310
#define PASS 311
#define CONTINUE 312
#define GLOBAL 313
#define NONLOCAL 314
#define NEWLINE 315
#define ASYNC 316
#define TYPE_COMMENT 317
#define IMPORT 318
#define RAISE 319
#define FROM 320
#define DEL 321
#define NUMBER 322
#define NONE 323
#define TRUE 324
#define FALSE 325
#define CLASS 326
#define IS 327
#define AS 328
#define FOR 329
#define AWAIT 330
#define ELIF 331
#define WITH 332
#define DEF 333
#define DEDENT 334
#define TRY 335
#define EXCEPT 336
#define FINALLY 337
#define MATCH 338
#define CASE 339
#define RETURN 340
#define ASSERT 341
#define YIELD 342
#define LAMBDA 343




/* Copy the first part of user declarations.  */
#line 1 "new.y"

	#include<stdio.h>
	#include<stdlib.h>
	int v = 1;
	#include<string.h>
	#include<math.h>
	#include <ctype.h>
	#define null 0
	int size = 0;
	int g = 0;
	void insert(char* l,char* t,int v,char* s,int ln);
	int search(char lab[]);
	void display();
	int yyerror();
	int var = 0;
	int yylex(void);
	int lineno = 1;
	struct symbtab
	{
		int val;
		char label[20];
		char type[20];
		int value;
		char scope[20];
		int lineno;
		struct symbtab *next;
	};
	int error = 0;
	struct symbtab *first,*last,*temp;
	char* op;


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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 314 "y.tab.c"

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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  100
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6428

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  117
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  171
/* YYNRULES -- Number of rules.  */
#define YYNRULES  520
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1177

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   343

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    62,     2,     2,     2,    66,   108,     2,
      58,    59,    57,   107,    64,    60,    63,   112,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    70,     2,
     111,    71,    61,   113,    65,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,    56,   110,   114,     2,   105,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,   104,     2,     2,   106,     2,     2,     2,     2,
       2,     2,     2,   115,   109,   116,    72,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    55,
      67,    68,    69,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,     9,    11,    13,    14,    16,    17,
      19,    21,    23,    25,    27,    32,    34,    36,    38,    40,
      42,    44,    46,    47,    49,    51,    53,    55,    57,    59,
      61,    63,    64,    72,    77,    86,    93,   101,   107,   110,
     111,   114,   117,   120,   123,   126,   129,   132,   135,   139,
     143,   147,   151,   156,   161,   163,   170,   171,   174,   176,
     178,   181,   182,   186,   195,   199,   206,   207,   214,   218,
     220,   221,   227,   228,   232,   233,   239,   240,   244,   246,
     247,   253,   261,   262,   268,   276,   277,   281,   282,   290,
     291,   304,   318,   319,   330,   340,   352,   363,   364,   371,
     373,   376,   378,   379,   384,   395,   396,   405,   409,   410,
     414,   415,   423,   424,   429,   431,   432,   439,   442,   443,
     445,   447,   448,   450,   452,   453,   457,   458,   462,   463,
     465,   467,   469,   471,   473,   475,   477,   479,   480,   485,
     488,   490,   492,   494,   496,   498,   499,   504,   507,   509,
     511,   513,   515,   517,   518,   522,   526,   527,   529,   532,
     533,   535,   538,   539,   541,   542,   544,   545,   547,   548,
     555,   557,   560,   561,   563,   564,   569,   571,   574,   575,
     579,   580,   582,   584,   585,   589,   590,   595,   600,   601,
     606,   607,   613,   614,   616,   618,   619,   622,   625,   626,
     629,   635,   643,   649,   650,   654,   655,   658,   663,   664,
     668,   669,   673,   680,   687,   696,   697,   701,   702,   706,
     707,   711,   716,   717,   724,   726,   727,   730,   732,   733,
     751,   770,   771,   779,   781,   782,   784,   785,   794,   801,
     808,   813,   815,   816,   820,   825,   826,   832,   839,   840,
     848,   855,   857,   861,   862,   867,   873,   874,   880,   887,
     888,   895,   903,   907,   910,   913,   919,   920,   923,   925,
     926,   938,   939,   944,   946,   947,   956,   959,   961,   962,
     965,   967,   974,   975,   978,   980,   981,   987,   988,   990,
     995,   997,   999,  1000,  1006,  1008,  1010,  1011,  1018,  1019,
    1021,  1022,  1029,  1036,  1043,  1048,  1050,  1051,  1055,  1060,
    1061,  1067,  1074,  1075,  1083,  1090,  1092,  1096,  1097,  1100,
    1104,  1105,  1109,  1114,  1115,  1120,  1126,  1128,  1129,  1135,
    1137,  1138,  1144,  1146,  1147,  1150,  1152,  1153,  1156,  1158,
    1159,  1161,  1163,  1165,  1167,  1169,  1171,  1173,  1175,  1177,
    1179,  1183,  1184,  1190,  1194,  1197,  1201,  1204,  1208,  1211,
    1215,  1218,  1219,  1223,  1225,  1226,  1230,  1232,  1233,  1237,
    1239,  1240,  1245,  1250,  1252,  1253,  1257,  1261,  1263,  1264,
    1268,  1272,  1277,  1281,  1285,  1287,  1288,  1291,  1294,  1297,
    1299,  1300,  1305,  1307,  1308,  1311,  1313,  1314,  1318,  1321,
    1328,  1333,  1335,  1336,  1340,  1347,  1348,  1362,  1364,  1365,
    1367,  1369,  1371,  1373,  1375,  1377,  1380,  1382,  1385,  1388,
    1391,  1394,  1396,  1398,  1401,  1405,  1407,  1408,  1414,  1415,
    1420,  1421,  1431,  1432,  1436,  1440,  1441,  1445,  1453,  1457,
    1458,  1463,  1464,  1470,  1471,  1476,  1483,  1484,  1488,  1490,
    1494,  1495,  1497,  1498,  1510,  1521,  1522,  1526,  1531,  1532,
    1539,  1540,  1545,  1548,  1561,  1563,  1564,  1572,  1576,  1580,
    1581,  1584,  1585,  1589,  1591,  1592,  1596,  1600,  1601,  1605,
    1615,  1622,  1623,  1632,  1635,  1636,  1643,  1645,  1646,  1652,
    1659,  1661,  1662,  1664,  1668,  1674,  1680,  1681,  1683,  1685,
    1689,  1690,  1696,  1703,  1713,  1720,  1721,  1727,  1734,  1736,
    1740,  1746,  1752,  1753,  1758,  1764,  1768,  1776,  1780,  1782,
    1784
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     118,     0,    -1,    54,   119,    56,    -1,   120,    -1,   123,
      -1,   121,    -1,    -1,   122,    -1,    -1,   124,    -1,   206,
      -1,   185,    -1,   131,    -1,   186,    -1,   104,   105,   106,
     106,    -1,   130,    -1,   128,    -1,   129,    -1,    67,    -1,
      69,    -1,   126,    -1,   127,    -1,    -1,   187,    -1,   139,
      -1,   203,    -1,   144,    -1,   143,    -1,   146,    -1,   142,
      -1,   149,    -1,    -1,     4,    70,   213,    54,    71,   212,
      56,    -1,    58,    58,   281,    59,    -1,   282,    59,    70,
     213,    54,    71,   212,    56,    -1,    58,   275,    71,    59,
      58,   268,    -1,   206,    59,    62,    71,    54,    77,    56,
      -1,   281,   125,    72,    58,   268,    -1,   206,    59,    -1,
      -1,   107,    71,    -1,    60,    71,    -1,    57,    71,    -1,
      65,    71,    -1,    66,    71,    -1,   108,    71,    -1,   109,
      71,    -1,   110,    71,    -1,   111,   111,    71,    -1,    61,
      61,    71,    -1,    57,    57,    71,    -1,   112,   112,    71,
      -1,    73,    64,    63,     4,    -1,    74,    64,    63,     4,
      -1,   268,    -1,   101,   213,    54,    64,   213,    56,    -1,
      -1,    81,   285,    -1,   132,    -1,   133,    -1,    78,   136,
      -1,    -1,    80,    58,    63,    -1,    63,    63,    63,    59,
      57,   138,    78,   134,    -1,    80,    58,    63,    -1,    63,
      63,    63,    59,    78,   134,    -1,    -1,    58,   135,    54,
      64,    56,    59,    -1,   135,    62,    64,    -1,    57,    -1,
      -1,     4,    54,    88,     4,    56,    -1,    -1,    64,    63,
     137,    -1,    -1,   138,    54,    88,     4,    56,    -1,    -1,
     138,    63,     4,    -1,     4,    -1,    -1,    18,   211,    70,
     205,   140,    -1,    18,   211,    70,   205,    54,   141,    56,
      -1,    -1,    91,   211,    70,   205,   140,    -1,    91,   211,
      70,   205,    54,   141,    56,    -1,    -1,    19,    70,   205,
      -1,    -1,    20,   211,    70,   205,    54,   141,    56,    -1,
      -1,    89,   275,    26,    72,   206,    70,    54,    77,    56,
     205,    54,   141,    -1,    76,    89,   275,    26,    72,   206,
      70,    54,    77,    56,   205,    54,   141,    -1,    -1,    92,
      58,    64,    63,   145,    64,   113,    59,    70,   205,    -1,
      92,    64,    63,   145,    70,    54,    77,    56,   205,    -1,
      76,    92,    58,    64,    63,   145,    64,   113,    59,    70,
     205,    -1,    76,    92,    64,    63,   145,    70,    54,    77,
      56,   205,    -1,    -1,   213,    88,   278,   108,    58,    64,
      -1,    59,    -1,    70,    59,    -1,   213,    -1,    -1,    95,
      70,   205,   148,    -1,    95,    70,   205,   147,    54,   141,
      56,    54,   148,    56,    -1,    -1,    96,   213,    54,    88,
       4,    56,    70,   205,    -1,    96,    70,   205,    -1,    -1,
      97,    70,   205,    -1,    -1,    98,   150,    70,    75,    43,
     151,    94,    -1,    -1,   209,    64,   208,   113,    -1,   211,
      -1,    -1,    99,   153,   152,   113,    70,   205,    -1,    18,
     211,    -1,    -1,   173,    -1,   154,    -1,    -1,   155,    -1,
     156,    -1,    -1,   156,    88,   166,    -1,    -1,   109,    63,
     157,    -1,    -1,   158,    -1,   165,    -1,   167,    -1,   168,
      -1,   171,    -1,   172,    -1,   177,    -1,   181,    -1,    -1,
     161,    62,    58,   107,    -1,    60,    59,    -1,   160,    -1,
     253,    -1,    83,    -1,    84,    -1,    85,    -1,    -1,   161,
      62,    58,   107,    -1,    60,    59,    -1,   160,    -1,   253,
      -1,    83,    -1,    84,    -1,    85,    -1,    -1,   162,   107,
     164,    -1,   162,    60,   164,    -1,    -1,    82,    -1,    60,
      82,    -1,    -1,   163,    -1,    60,   163,    -1,    -1,    82,
      -1,    -1,    82,    -1,    -1,   166,    -1,    -1,    62,   114,
       4,    62,    58,    63,    -1,    58,    -1,    71,    59,    -1,
      -1,   114,    -1,    -1,   169,    62,    58,    63,    -1,    58,
      -1,    71,    59,    -1,    -1,   170,    63,     4,    -1,    -1,
     169,    -1,     4,    -1,    -1,    58,   154,    59,    -1,    -1,
      54,   174,   113,    56,    -1,    58,   173,   113,    59,    -1,
      -1,   175,    64,   174,   113,    -1,    -1,    64,    63,   175,
      64,   113,    -1,    -1,   176,    -1,   154,    -1,    -1,    57,
     166,    -1,    57,   167,    -1,    -1,   115,   116,    -1,   115,
     180,    64,   113,   116,    -1,   115,   178,    64,   180,    64,
     113,   116,    -1,   115,   178,    64,   113,   116,    -1,    -1,
      64,    63,   179,    -1,    -1,    58,   159,    -1,   169,    59,
      70,   154,    -1,    -1,    57,    57,   166,    -1,    -1,   170,
      58,    59,    -1,   170,    58,   182,    64,   113,    59,    -1,
     170,    58,   183,    64,   113,    59,    -1,   170,    58,   182,
      64,   183,    64,   113,    59,    -1,    -1,    64,    63,   154,
      -1,    -1,    64,    63,   184,    -1,    -1,     4,    71,   154,
      -1,   100,    54,   283,    56,    -1,    -1,    79,   213,    54,
      80,   213,    56,    -1,    79,    -1,    -1,   202,   188,    -1,
     188,    -1,    -1,    93,     4,    58,    54,   190,    56,    59,
      54,    60,    61,   213,    56,    70,    54,   189,    56,   205,
      -1,    76,    93,     4,    58,    54,   190,    56,    59,    54,
      60,    61,   213,    56,    70,    54,   189,    56,   205,    -1,
      -1,    75,    77,   108,    58,    75,    43,    59,    -1,    77,
      -1,    -1,   191,    -1,    -1,   192,   196,    57,   197,    57,
      54,   194,    56,    -1,   193,   197,    57,    54,   194,    56,
      -1,   196,   197,    57,    54,   194,    56,    -1,   197,    54,
     194,    56,    -1,   194,    -1,    -1,   196,   112,    64,    -1,
     196,   112,   108,    59,    -1,    -1,   196,    57,   197,   112,
      64,    -1,   196,    57,   197,   112,   108,    59,    -1,    -1,
      57,   196,   198,    57,    54,   195,    56,    -1,    57,    64,
     198,    54,   195,    56,    -1,   195,    -1,    57,    57,   196,
      -1,    -1,   199,    64,    77,   113,    -1,   199,    77,   113,
     108,    59,    -1,    -1,   199,   201,    64,    77,   113,    -1,
     199,   201,    77,   113,   108,    59,    -1,    -1,   199,   201,
     113,    64,    77,   113,    -1,   199,   201,   113,    77,   113,
     108,    59,    -1,     4,   200,   113,    -1,    70,   213,    -1,
      71,   213,    -1,    58,    65,   211,    75,    59,    -1,    -1,
     202,   204,    -1,   204,    -1,    -1,    86,     4,    54,    58,
      54,   269,    56,    59,    56,    70,   205,    -1,    -1,    75,
      43,   119,    94,    -1,   121,    -1,    -1,   207,    58,    64,
     207,    59,    54,    64,    56,    -1,   207,    64,    -1,   207,
      -1,    -1,    57,   240,    -1,   213,    -1,    64,    63,   209,
      54,    64,    56,    -1,    -1,    57,   240,    -1,   211,    -1,
      -1,     4,    70,    71,    72,   213,    -1,    -1,   210,    -1,
     213,    62,    70,    71,    -1,   268,    -1,   206,    -1,    -1,
     225,    18,   225,    19,   213,    -1,   225,    -1,   214,    -1,
      -1,   103,    54,   215,    56,    70,   213,    -1,    -1,   216,
      -1,    -1,   217,   221,    57,   222,    57,    54,    -1,   218,
     222,    57,    54,   219,    56,    -1,   221,   222,    57,    54,
     219,    56,    -1,   222,    54,   219,    56,    -1,   219,    -1,
      -1,   221,   112,    64,    -1,   221,   112,   108,    70,    -1,
      -1,   221,    57,   222,   112,    64,    -1,   221,    57,   222,
     112,   108,    70,    -1,    -1,    57,   221,   223,    57,    54,
     220,    56,    -1,    57,    64,   223,    54,   220,    56,    -1,
     220,    -1,    57,    57,   221,    -1,    -1,   224,    64,    -1,
     224,   108,    70,    -1,    -1,   224,   201,    64,    -1,   224,
     201,   108,    70,    -1,    -1,   224,   201,   113,    64,    -1,
     224,   201,   113,   108,    70,    -1,     4,    -1,    -1,   226,
      58,    23,   226,    59,    -1,   226,    -1,    -1,   227,    58,
      24,   227,    59,    -1,   227,    -1,    -1,    25,   227,    -1,
     228,    -1,    -1,   240,   229,    -1,   240,    -1,    -1,   230,
      -1,   231,    -1,   232,    -1,   233,    -1,   234,    -1,   235,
      -1,   236,    -1,   237,    -1,   238,    -1,   239,    -1,    71,
      71,   240,    -1,    -1,    58,    62,    71,    59,   240,    -1,
     111,    71,   240,    -1,   111,   240,    -1,    61,    71,   240,
      -1,    61,   240,    -1,    25,    26,   240,    -1,    26,   240,
      -1,    87,    25,   240,    -1,    87,   240,    -1,    -1,   240,
     109,   241,    -1,   241,    -1,    -1,   241,   110,   242,    -1,
     242,    -1,    -1,   242,   108,   243,    -1,   243,    -1,    -1,
     243,   111,   111,   244,    -1,   243,    61,    61,   244,    -1,
     244,    -1,    -1,   244,   107,   245,    -1,   244,    60,   245,
      -1,   245,    -1,    -1,   245,    57,   246,    -1,   245,   112,
     246,    -1,   245,   112,   112,   246,    -1,   245,    66,   246,
      -1,   245,    65,   246,    -1,   246,    -1,    -1,   107,   246,
      -1,    60,   246,    -1,    72,   246,    -1,   247,    -1,    -1,
     248,    57,    57,   246,    -1,   248,    -1,    -1,    90,   249,
      -1,   249,    -1,    -1,   249,    63,     4,    -1,   249,   258,
      -1,   249,    58,    54,   269,    56,    59,    -1,   249,    54,
     250,    56,    -1,   252,    -1,    -1,   251,    62,    64,    -1,
      64,    63,   251,    54,    64,    56,    -1,    -1,    54,   213,
      56,    70,    54,   213,    56,    54,    70,    54,   213,    56,
      56,    -1,   211,    -1,    -1,     4,    -1,    84,    -1,    85,
      -1,    83,    -1,   253,    -1,    82,    -1,    58,   256,    -1,
     257,    -1,   258,    59,    -1,    58,   254,    -1,   255,    59,
      -1,    58,   261,    -1,   259,    -1,   262,    -1,   260,    59,
      -1,    63,    63,    63,    -1,    10,    -1,    -1,    54,    54,
     208,    56,    56,    -1,    -1,    54,   211,   266,    56,    -1,
      -1,    58,    54,   209,    64,    54,   208,    56,    56,    59,
      -1,    -1,    58,    58,   268,    -1,   211,    59,    59,    -1,
      -1,    58,    58,   210,    -1,   213,    62,    70,    71,    59,
     266,    59,    -1,   115,   208,   116,    -1,    -1,   115,   211,
     266,   116,    -1,    -1,   115,    54,   263,    56,   116,    -1,
      -1,   115,   265,   266,   116,    -1,    64,    63,   264,    54,
      64,    56,    -1,    -1,    57,    57,   240,    -1,   265,    -1,
     213,    70,   213,    -1,    -1,   267,    -1,    -1,    76,    89,
     275,    26,    72,   225,    58,    18,   225,    59,    57,    -1,
      89,   275,    26,    72,   225,    58,    18,   225,    59,    57,
      -1,    -1,   102,    80,   213,    -1,   102,    54,   206,    56,
      -1,    -1,   270,    54,    64,    56,   108,    59,    -1,    -1,
      64,    63,    58,   272,    -1,    58,   210,    -1,   213,    62,
      70,    71,    59,    62,    71,    59,    54,    64,   271,    56,
      -1,   271,    -1,    -1,    64,    63,   273,    64,    64,    63,
     274,    -1,    64,    63,   273,    -1,    64,    63,   274,    -1,
      -1,    57,   213,    -1,    -1,     4,    71,   213,    -1,   272,
      -1,    -1,     4,    71,   213,    -1,    57,    57,   213,    -1,
      -1,   278,    62,    64,    -1,   278,    58,    64,   278,    59,
      57,    54,    64,    56,    -1,    64,    63,   278,    54,    64,
      56,    -1,    -1,   278,    58,    64,   278,    59,    54,    64,
      56,    -1,   278,    64,    -1,    -1,    57,    58,    62,    57,
     278,    59,    -1,   279,    -1,    -1,   286,    63,     4,    62,
     287,    -1,   286,    54,   250,    56,    62,   287,    -1,   280,
      -1,    -1,     4,    -1,    58,   279,    59,    -1,    58,    54,
     277,    56,    59,    -1,    54,    54,   276,    56,    56,    -1,
      -1,   282,    -1,     4,    -1,    58,   281,    59,    -1,    -1,
     286,    63,     4,    62,   287,    -1,   286,    54,   250,    56,
      62,   287,    -1,   213,    58,    64,   213,    59,    57,    54,
      64,    56,    -1,    64,    63,   285,    54,    64,    56,    -1,
      -1,   286,    63,     4,    62,   287,    -1,   286,    54,   250,
      56,    62,   287,    -1,     4,    -1,    58,   285,    59,    -1,
      58,    54,   284,    56,    59,    -1,    54,    54,   284,    56,
      56,    -1,    -1,    63,     4,   108,   287,    -1,    54,   250,
      56,   108,   287,    -1,   258,   108,   287,    -1,    58,    54,
     269,    56,    59,   108,   287,    -1,   252,   108,   287,    -1,
      58,    -1,    54,    -1,    63,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    43,    43,    56,    58,    59,    67,    68,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    99,   100,   101,   102,   103,   103,   104,   104,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   122,   124,   128,   130,   135,   136,   140,   141,
     143,   146,   147,   147,   148,   148,   150,   151,   152,   153,
     155,   156,   158,   159,   161,   162,   164,   165,   166,   171,
     172,   173,   177,   178,   179,   181,   182,   185,   186,   189,
     190,   191,   194,   195,   196,   197,   198,   200,   201,   201,
     201,   202,   206,   207,   208,   210,   211,   212,   214,   215,
     221,   222,   224,   225,   226,   229,   230,   233,   236,   237,
     238,   240,   241,   242,   245,   246,   248,   249,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   263,   264,   264,
     265,   266,   267,   268,   269,   272,   273,   273,   274,   275,
     276,   277,   278,   280,   281,   282,   284,   285,   286,   288,
     289,   290,   292,   293,   295,   296,   299,   300,   302,   303,
     303,   303,   305,   306,   308,   309,   309,   309,   311,   312,
     314,   315,   316,   318,   319,   321,   322,   323,   325,   326,
     328,   329,   331,   332,   333,   335,   336,   337,   339,   340,
     341,   342,   343,   345,   346,   348,   349,   349,   351,   352,
     354,   355,   356,   357,   358,   360,   361,   363,   364,   366,
     367,   371,   376,   377,   378,   382,   383,   384,   386,   387,
     388,   390,   391,   392,   396,   397,   399,   400,   401,   402,
     403,   404,   406,   407,   408,   410,   411,   412,   414,   415,
     416,   417,   419,   421,   422,   423,   425,   426,   427,   429,
     430,   431,   433,   436,   438,   441,   445,   446,   447,   449,
     450,   455,   456,   457,   461,   462,   463,   464,   467,   468,
     469,   471,   473,   474,   475,   477,   478,   481,   482,   483,
     487,   488,   496,   497,   498,   499,   503,   504,   507,   508,
     510,   511,   512,   513,   514,   515,   517,   518,   519,   521,
     522,   523,   525,   526,   527,   528,   530,   532,   533,   534,
     536,   537,   538,   540,   541,   542,   544,   547,   548,   549,
     551,   552,   553,   555,   556,   557,   559,   560,   561,   563,
     564,   565,   566,   567,   568,   569,   570,   571,   572,   573,
     575,   577,   578,   580,   582,   584,   586,   588,   590,   592,
     594,   596,   597,   598,   600,   601,   602,   604,   605,   606,
     608,   609,   610,   611,   613,   614,   615,   616,   618,   619,
     620,   621,   622,   623,   624,   626,   627,   628,   629,   630,
     632,   633,   634,   636,   637,   638,   640,   642,   643,   644,
     645,   646,   649,   650,   651,   653,   654,   655,   657,   658,
     659,   660,   661,   662,   663,   664,   664,   664,   665,   665,
     666,   666,   666,   666,   667,   669,   671,   672,   674,   675,
     677,   678,   680,   681,   681,   683,   684,   684,   686,   688,
     689,   691,   692,   696,   697,   699,   701,   702,   703,   705,
     707,   708,   710,   711,   712,   714,   715,   716,   718,   719,
     722,   723,   723,   723,   724,   727,   728,   729,   730,   732,
     733,   735,   736,   737,   739,   740,   741,   743,   744,   745,
     747,   749,   750,   751,   753,   754,   755,   757,   758,   759,
     760,   762,   763,   764,   765,   766,   768,   769,   770,   771,
     773,   774,   775,   781,   790,   793,   794,   795,   796,   797,
     798,   799,   801,   802,   803,   804,   805,   806,   808,   808,
     808
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DIGITS", "NAME", "PLUS", "MINUS", "MUL",
  "DIVIDE", "NUM", "STRING", "INTEGER", "SPECIAL", "NL", "SPACE",
  "KEYWORD", "SPECIAL_START", "SPECIAL_END", "IF", "ELSE", "WHILE", "SEP",
  "END", "OR", "AND", "NOT", "IN", "NOTIN", "T", "F", "COLON",
  "SQUAREBRACKET_START", "SQUAREBRACKET_END", "MOD", "EQUAL", "PLUSEQUAL",
  "PRINT", "COMMENT", "RANGE", "SINGLEQUOTE", "DOUBLEQUOTE", "EXPONENTIAL",
  "COMMA", "INDENT", "LIST", "DIVIDEEQUAL", "MINUSEQUAL", "MULEQUAL",
  "LESSTHAN", "LESSTHANEQUAL", "GREATERTHAN", "GREATERTHANEQUAL",
  "DOUBLEEQUAL", "NOTEQUAL", "'['", "ENDMARKER", "']'", "'*'", "'('",
  "')'", "'-'", "'>'", "'!'", "'.'", "','", "'@'", "'%'", "BREAK", "PASS",
  "CONTINUE", "':'", "'='", "'~'", "GLOBAL", "NONLOCAL", "NEWLINE",
  "ASYNC", "TYPE_COMMENT", "IMPORT", "RAISE", "FROM", "DEL", "NUMBER",
  "NONE", "TRUE", "FALSE", "CLASS", "IS", "AS", "FOR", "AWAIT", "ELIF",
  "WITH", "DEF", "DEDENT", "TRY", "EXCEPT", "FINALLY", "MATCH", "CASE",
  "RETURN", "ASSERT", "YIELD", "LAMBDA", "'p'", "'a'", "'s'", "'+'", "'&'",
  "'|'", "'^'", "'<'", "'/'", "'?'", "'_'", "'{'", "'}'", "$accept",
  "file", "statements", "statement", "simple_stmts", "simple_stmt",
  "compound_stmt", "assignment", "augassign", "global_stmt",
  "nonlocal_stmt", "yield_stmt", "assert_stmt", "del_stmt", "import_stmt",
  "import_name", "import_from", "import_from_targets",
  "import_from_as_names", "dotted_as_names", "dotted_as_name",
  "dotted_name", "if_stmt", "elif_stmt", "else_block", "while_stmt",
  "for_stmt", "with_stmt", "with_item", "try_stmt", "except_block",
  "finally_block", "match_stmt", "subject_expr", "case_block", "guard",
  "patterns", "pattern", "as_pattern", "or_pattern", "closed_pattern",
  "literal_pattern", "literal_expr", "complex_number", "signed_number",
  "signed_real_number", "real_number", "imaginary_number",
  "capture_pattern", "pattern_capture_target", "wildcard_pattern",
  "value_pattern", "attr", "name_or_attr", "group_pattern",
  "sequence_pattern", "open_sequence_pattern", "maybe_sequence_pattern",
  "maybe_star_pattern", "star_pattern", "mapping_pattern", "items_pattern",
  "key_value_pattern", "double_star_pattern", "class_pattern",
  "positional_patterns", "keyword_patterns", "keyword_pattern",
  "return_stmt", "raise_stmt", "function_def", "function_def_raw",
  "func_type_comment", "params", "parameters", "slash_no_default",
  "slash_with_default", "star_etc", "kwds", "param_no_default",
  "param_with_default", "param_maybe_default", "param", "annotation",
  "default", "decorators", "class_def", "class_def_raw", "block",
  "star_expressions", "star_expression", "star_named_expressions",
  "star_named_expression", "assigment_expression", "named_expression",
  "annotated_rhs", "expression", "lambdef", "lambda_params",
  "lambda_parameters", "lambda_slash_no_default",
  "lambda_slash_with_default", "lambda_star_etc", "lambda_kwds",
  "lambda_param_no_default", "lambda_param_with_default",
  "lambda_param_maybe_default", "lambda_param", "disjunction",
  "conjunction", "inversion", "comparison", "compare_op_bitwise_or_pair",
  "eq_bitwise_or", "noteq_bitwise_or", "lte_bitwise_or", "lt_bitwise_or",
  "gte_bitwise_or", "gt_bitwise_or", "notin_bitwise_or", "in_bitwise_or",
  "isnot_bitwise_or", "is_bitwise_or", "bitwise_or", "bitwise_xor",
  "bitwise_and", "shift_expr", "sum", "term", "factor", "power",
  "await_primary", "primary", "slices", "slice", "atom", "strings", "list",
  "listcomp", "tuple", "group", "genexp", "set", "setcomp", "dict",
  "dictcomp", "double_starred_kvpairs", "double_starred_kvpair", "kvpair",
  "for_if_clauses", "for_if_clause", "yield_expr", "arguments", "args",
  "kwargs", "starred_expression", "kwarg_or_starred",
  "kwarg_or_double_starred", "star_targets", "star_targets_list_seq",
  "star_targets_tuple_seq", "star_target", "target_with_star_atom",
  "star_atom", "single_target", "single_subscript_attribute_target",
  "expression_list", "del_targets", "del_target", "t_primary",
  "t_lookahead", 0
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
     305,   306,   307,   308,    91,   309,    93,    42,    40,    41,
      45,    62,    33,    46,    44,    64,    37,   310,   311,   312,
      58,    61,   126,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   112,    97,   115,    43,    38,   124,
      94,    60,    47,    63,    95,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   117,   118,   119,   120,   120,   121,   121,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   124,   124,   124,   124,   124,   124,   124,   124,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   126,   127,   128,   129,   130,   130,   131,   131,
     132,   133,   133,   133,   133,   133,   134,   134,   134,   134,
     135,   135,   136,   136,   137,   137,   138,   138,   138,   139,
     139,   139,   140,   140,   140,   141,   141,   142,   142,   143,
     143,   143,   144,   144,   144,   144,   144,   145,   145,   145,
     145,   145,   146,   146,   146,   147,   147,   147,   148,   148,
     149,   149,   150,   150,   150,   151,   151,   152,   153,   153,
     153,   154,   154,   154,   155,   155,   156,   156,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   158,   158,   158,
     158,   158,   158,   158,   158,   159,   159,   159,   159,   159,
     159,   159,   159,   160,   160,   160,   161,   161,   161,   162,
     162,   162,   163,   163,   164,   164,   165,   165,   166,   166,
     166,   166,   167,   167,   168,   168,   168,   168,   169,   169,
     170,   170,   170,   171,   171,   172,   172,   172,   173,   173,
     174,   174,   175,   175,   175,   176,   176,   176,   177,   177,
     177,   177,   177,   178,   178,   179,   179,   179,   180,   180,
     181,   181,   181,   181,   181,   182,   182,   183,   183,   184,
     184,   185,   186,   186,   186,   187,   187,   187,   188,   188,
     188,   189,   189,   189,   190,   190,   191,   191,   191,   191,
     191,   191,   192,   192,   192,   193,   193,   193,   194,   194,
     194,   194,   195,   196,   196,   196,   197,   197,   197,   198,
     198,   198,   199,   200,   201,   202,   203,   203,   203,   204,
     204,   205,   205,   205,   206,   206,   206,   206,   207,   207,
     207,   208,   209,   209,   209,   210,   210,   211,   211,   211,
     212,   212,   213,   213,   213,   213,   214,   214,   215,   215,
     216,   216,   216,   216,   216,   216,   217,   217,   217,   218,
     218,   218,   219,   219,   219,   219,   220,   221,   221,   221,
     222,   222,   222,   223,   223,   223,   224,   225,   225,   225,
     226,   226,   226,   227,   227,   227,   228,   228,   228,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     230,   231,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   240,   240,   241,   241,   241,   242,   242,   242,
     243,   243,   243,   243,   244,   244,   244,   244,   245,   245,
     245,   245,   245,   245,   245,   246,   246,   246,   246,   246,
     247,   247,   247,   248,   248,   248,   249,   249,   249,   249,
     249,   249,   250,   250,   250,   251,   251,   251,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   253,   254,   254,   255,   255,
     256,   256,   257,   257,   257,   258,   258,   258,   259,   260,
     260,   261,   261,   262,   262,   263,   264,   264,   264,   265,
     266,   266,   267,   267,   267,   268,   268,   268,   269,   269,
     270,   270,   270,   270,   270,   271,   271,   271,   271,   272,
     272,   273,   273,   273,   274,   274,   274,   275,   275,   275,
     276,   277,   277,   277,   278,   278,   278,   279,   279,   279,
     279,   280,   280,   280,   280,   280,   281,   281,   281,   281,
     282,   282,   282,   283,   284,   285,   285,   285,   285,   285,
     285,   285,   286,   286,   286,   286,   286,   286,   287,   287,
     287
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     1,     1,     0,     1,     0,     1,
       1,     1,     1,     1,     4,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     7,     4,     8,     6,     7,     5,     2,     0,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     3,
       3,     3,     4,     4,     1,     6,     0,     2,     1,     1,
       2,     0,     3,     8,     3,     6,     0,     6,     3,     1,
       0,     5,     0,     3,     0,     5,     0,     3,     1,     0,
       5,     7,     0,     5,     7,     0,     3,     0,     7,     0,
      12,    13,     0,    10,     9,    11,    10,     0,     6,     1,
       2,     1,     0,     4,    10,     0,     8,     3,     0,     3,
       0,     7,     0,     4,     1,     0,     6,     2,     0,     1,
       1,     0,     1,     1,     0,     3,     0,     3,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     4,     2,
       1,     1,     1,     1,     1,     0,     4,     2,     1,     1,
       1,     1,     1,     0,     3,     3,     0,     1,     2,     0,
       1,     2,     0,     1,     0,     1,     0,     1,     0,     6,
       1,     2,     0,     1,     0,     4,     1,     2,     0,     3,
       0,     1,     1,     0,     3,     0,     4,     4,     0,     4,
       0,     5,     0,     1,     1,     0,     2,     2,     0,     2,
       5,     7,     5,     0,     3,     0,     2,     4,     0,     3,
       0,     3,     6,     6,     8,     0,     3,     0,     3,     0,
       3,     4,     0,     6,     1,     0,     2,     1,     0,    17,
      18,     0,     7,     1,     0,     1,     0,     8,     6,     6,
       4,     1,     0,     3,     4,     0,     5,     6,     0,     7,
       6,     1,     3,     0,     4,     5,     0,     5,     6,     0,
       6,     7,     3,     2,     2,     5,     0,     2,     1,     0,
      11,     0,     4,     1,     0,     8,     2,     1,     0,     2,
       1,     6,     0,     2,     1,     0,     5,     0,     1,     4,
       1,     1,     0,     5,     1,     1,     0,     6,     0,     1,
       0,     6,     6,     6,     4,     1,     0,     3,     4,     0,
       5,     6,     0,     7,     6,     1,     3,     0,     2,     3,
       0,     3,     4,     0,     4,     5,     1,     0,     5,     1,
       0,     5,     1,     0,     2,     1,     0,     2,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     0,     5,     3,     2,     3,     2,     3,     2,     3,
       2,     0,     3,     1,     0,     3,     1,     0,     3,     1,
       0,     4,     4,     1,     0,     3,     3,     1,     0,     3,
       3,     4,     3,     3,     1,     0,     2,     2,     2,     1,
       0,     4,     1,     0,     2,     1,     0,     3,     2,     6,
       4,     1,     0,     3,     6,     0,    13,     1,     0,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     2,     2,
       2,     1,     1,     2,     3,     1,     0,     5,     0,     4,
       0,     9,     0,     3,     3,     0,     3,     7,     3,     0,
       4,     0,     5,     0,     4,     6,     0,     3,     1,     3,
       0,     1,     0,    11,    10,     0,     3,     4,     0,     6,
       0,     4,     2,    12,     1,     0,     7,     3,     3,     0,
       2,     0,     3,     1,     0,     3,     3,     0,     3,     9,
       6,     0,     8,     2,     0,     6,     1,     0,     5,     6,
       1,     0,     1,     3,     5,     5,     0,     1,     1,     3,
       0,     5,     6,     9,     6,     0,     5,     6,     1,     3,
       5,     5,     0,     4,     5,     3,     7,     3,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   361,     0,   409,   425,   361,   361,   333,   361,   361,
     361,   385,     0,    18,    19,   385,     0,     0,     0,    72,
     361,     0,   361,   414,   412,   410,   411,     0,   361,   396,
       0,     0,     0,   361,     0,   361,     0,     0,     0,   385,
     361,     0,     3,     5,     7,     4,     9,    20,    21,    16,
      17,    15,    12,    58,    59,    24,    29,    27,    26,    28,
      30,    11,    13,    23,   227,   228,    25,   268,    10,   277,
     288,     0,   280,   295,   294,   329,   332,   335,   338,   363,
     366,   369,   373,   377,   384,   389,   392,   395,   401,   413,
       0,   416,     0,   421,     0,   422,    54,    39,   497,     0,
       1,   361,   409,   361,   426,     0,     0,     0,   401,     0,
       0,   334,   361,     0,   407,     0,     0,   279,   409,   361,
       0,   361,     0,   361,   361,   418,   415,   420,     0,     0,
     486,   490,     0,   497,     0,   387,     0,     0,   388,     0,
       0,   361,     0,     0,     0,    60,     0,     0,   409,   361,
     361,    57,     0,     0,   409,   361,   361,     0,     0,   394,
       0,     0,     0,   361,   361,     0,     0,   114,   361,     0,
     361,   292,   298,     0,   386,     0,     0,   450,     0,   450,
       2,     0,   226,   267,    38,     0,   276,     0,     0,   361,
       0,     0,     0,   361,     0,   361,     0,   361,   364,   361,
     337,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   367,   370,     0,     0,   378,   378,   385,   385,   385,
     385,     0,   361,   426,     0,   398,     0,   419,   417,     0,
     423,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   361,     0,     0,     0,     0,   450,
       0,   285,     0,     0,   361,   361,     0,   361,     0,   361,
       0,   451,     0,     0,   361,   426,     0,     0,     0,     0,
     464,     0,   361,   361,   288,   433,     0,     0,     0,   361,
       0,     0,     0,   499,   361,     0,     0,   424,     0,     0,
       0,     0,     0,     0,    74,     0,    62,   361,   361,   361,
       0,   361,     0,     0,   361,   361,   361,     0,   361,     0,
       0,   361,     0,   361,     0,   273,   108,   283,     0,     0,
       0,     0,     0,     0,   456,   326,     0,     0,   299,   317,
     320,   305,   315,     0,     0,     0,     0,   361,   438,     0,
     361,     0,     0,   361,   434,     0,   294,   361,   361,   361,
     358,     0,   361,   356,   361,   361,   360,   362,   361,   354,
     365,   368,   374,   374,   376,   375,   379,   383,   382,   385,
     380,   385,     0,   361,   397,   519,   518,   520,   517,   515,
       0,    42,    41,     0,    43,    44,    40,    45,    46,    47,
       0,     0,     0,   361,   407,     0,     0,   292,     0,     0,
       0,   361,   436,     0,   424,    82,     0,     0,     0,   361,
       0,   429,     0,   403,     0,     0,     0,   462,   361,     0,
       0,     0,     0,   361,   361,   361,     0,   284,     0,     0,
     493,    33,     0,     0,     0,     0,   361,   478,     0,     0,
     513,     0,    52,    53,     0,     0,   361,     0,    78,    73,
       0,   361,     0,     0,   361,     0,     0,   361,   509,     0,
       0,     0,     0,   361,     0,     0,   361,    99,     0,     0,
     101,   234,   361,   361,     0,     0,   103,     0,     0,     0,
     221,   361,   457,   317,   323,   323,     0,     0,     0,     0,
       0,   320,     0,     0,   312,   318,   361,     0,     0,    14,
       0,   284,   440,   449,   444,     0,     0,   289,   292,   329,
     332,   357,     0,   355,   350,   359,   353,   372,   371,   381,
     391,   400,   361,     0,     0,    50,    49,    48,    51,   455,
       0,     0,     0,   286,   361,    85,   361,    80,    85,     0,
       0,     0,     0,   514,   361,     0,     0,   409,   361,   426,
     473,   467,   468,     0,     0,     0,   361,     0,   426,   288,
       0,     0,     0,   483,   265,   361,     0,   455,     0,     0,
       0,    76,    66,   361,   361,     0,   234,     0,     0,     0,
     361,     0,     0,   361,     0,     0,     0,   361,   361,     0,
       0,     0,     0,   100,     0,   361,     0,     0,     0,   235,
     253,   256,   241,   251,     0,     0,     0,     0,   361,     0,
     361,    85,   115,   113,   361,     0,   316,     0,     0,     0,
     292,   320,     0,     0,   307,     0,     0,     0,   264,   319,
     321,     0,     0,     0,     0,   450,   293,   328,   331,   361,
     469,     0,    37,     0,     0,   501,   291,     0,   290,     0,
       0,     0,     0,   361,     0,     0,   361,     0,   427,   495,
     361,   361,   470,   361,   461,     0,   289,     0,     0,     0,
     361,     0,   494,   361,     0,     0,   448,   442,    35,     0,
       0,   488,     0,     0,    69,    70,    65,     0,     0,     0,
       0,     0,     0,    77,   223,     0,   511,   361,   409,   361,
     361,   510,     0,   506,     0,     0,     0,   488,     0,     0,
       0,   361,     0,   253,   259,   259,     0,     0,     0,     0,
       0,   256,     0,     0,   248,     0,     0,     0,   272,   107,
       0,   109,     0,   118,     0,     0,    55,     0,     0,     0,
     297,     0,   312,     0,   308,   312,   304,   322,     0,     0,
       0,     0,   352,     0,   469,   399,   361,   502,    32,   361,
      81,   361,    88,     0,   404,   361,   294,     0,   472,   476,
       0,   450,   516,     0,   485,   361,   284,     0,     0,   361,
       0,     0,   489,    66,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   507,     0,     0,   489,     0,     0,     0,
     263,   262,   252,     0,     0,     0,     0,   256,     0,     0,
     243,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     168,     0,     0,   120,   122,   123,   119,     0,   193,   111,
       0,     0,     0,     0,     0,     0,     0,   310,     0,     0,
     281,    36,     0,   437,     0,    86,    82,     0,   294,     0,
       0,   474,     0,   459,     0,     0,   338,     0,     0,    63,
       0,     0,    68,     0,     0,     0,     0,    75,     0,     0,
       0,     0,   361,     0,     0,     0,     0,     0,     0,   248,
       0,   244,   248,   240,   254,     0,     0,     0,     0,   108,
     170,     0,     0,   173,   196,   197,   128,   361,     0,   168,
     190,     0,   314,   324,     0,     0,   301,   302,   311,   303,
     275,    34,    85,    83,     0,     0,   361,   480,     0,     0,
     466,     0,     0,     0,   445,     0,     0,     0,     0,     0,
     361,     0,   504,     0,   361,   361,    94,    98,     0,     0,
       0,     0,     0,     0,     0,   246,     0,     0,   255,   257,
       0,     0,     0,     0,   171,   182,   190,   121,   162,     0,
     163,   142,   143,   144,     0,   127,   129,   140,     0,     0,
     160,   130,   167,   131,   132,   181,     0,   133,   134,   135,
     136,   141,   117,     0,   125,     0,     0,     0,   325,   313,
       0,     0,   361,   294,   361,     0,   431,     0,   479,    71,
       0,   361,   361,    96,     0,   361,     0,    93,   250,     0,
       0,     0,   361,   248,   238,   247,   239,   258,   361,   104,
       0,     0,   194,     0,   139,   163,   161,   171,     0,     0,
     199,     0,     0,     0,   164,   164,     0,     0,     0,   361,
     121,   189,     0,    84,   361,   294,     0,   475,     0,   482,
      67,     0,    95,   361,   270,    85,     0,     0,   249,     0,
       0,   106,     0,     0,   184,     0,   168,   178,   208,     0,
       0,   165,   155,   154,     0,   211,     0,     0,     0,   179,
     116,   194,     0,   503,     0,     0,   454,   465,    85,     0,
      90,   260,     0,     0,   237,     0,   186,   187,   209,   145,
     181,     0,   204,     0,     0,     0,   138,   175,   121,     0,
       0,     0,     0,   453,     0,     0,    91,     0,   261,     0,
     169,   162,   150,   151,   152,   206,   148,     0,   149,     0,
     202,     0,   200,     0,   216,   218,     0,     0,     0,     0,
     191,   406,   469,   463,     0,   231,   147,     0,   121,     0,
     121,   219,   212,     0,   213,   231,     0,   233,     0,     0,
     207,   201,   220,     0,     0,     0,   361,   146,   214,   361,
       0,   229,   230,     0,     0,     0,   232
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    41,    42,   315,    44,    45,    46,   242,    47,
      48,    49,    50,    51,    52,    53,    54,   686,   687,   145,
     449,   450,    55,   537,   650,    56,    57,    58,   469,    59,
     475,   476,    60,   165,   734,   898,   822,   823,   824,   825,
     965,   966,  1125,   967,   968,   969,   970,  1072,   971,   894,
     895,   974,   975,   976,   977,   978,   826,   986,   827,   828,
     979,  1031,  1102,  1032,   980,  1077,  1078,  1135,    61,    62,
      63,    64,  1158,   598,   599,   600,   601,   602,   603,   604,
     605,   803,   720,   712,   498,    65,    66,    67,   316,    68,
      69,   415,   500,    70,    71,   647,   107,    73,   327,   328,
     329,   330,   331,   332,   333,   334,   617,   490,    74,    75,
      76,    77,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,   115,   116,   108,    89,   125,    90,   126,
      91,   109,    93,    94,   127,    95,   434,   675,   179,   260,
     261,    96,   268,   269,   270,   550,   551,   552,   128,   416,
     428,   129,   130,   131,    97,    98,   321,   453,   300,    99,
     378
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -919
static const yytype_int16 yypact[] =
{
      66,  1332,   228,   176,  -919,  4248,  4248,  6246,  2346,  5262,
    3291,  1968,    90,  -919,  -919,  1968,   243,   296,   504,   322,
    2220,   221,  2283,  -919,  -919,  -919,  -919,   346,  5325,  1968,
     468,   489,   413,  3612,   449,  5262,    39,   462,   465,  1968,
    1185,   526,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,   154,  -919,  -919,   545,   471,
    -919,   547,   523,  -919,   593,   550,   558,  -919,   286,   510,
     514,    89,   153,   179,  -919,  -919,   570,  2031,   528,  -919,
     572,  -919,    23,  -919,   575,  -919,  -919,   769,   578,    63,
    -919,  4311,   574,  3354,    25,   582,   331,   523,  -919,   587,
     393,   203,  3354,   584,   370,   592,   588,   750,   574,  2409,
     591,  1045,   135,  4374,  1248,  -919,  -919,  -919,   583,   457,
    -919,  -919,   594,  -919,   421,   480,   559,   595,   480,   605,
     606,  5325,   472,   651,   607,  -919,   320,   609,   323,  2472,
    5388,  -919,   445,   612,   479,  2535,  5451,   647,   446,  2031,
     611,   613,   621,  1528,  5262,   610,   618,   475,  5262,   419,
    3675,  6313,    42,   585,   480,   625,   568,    27,   363,   348,
    -919,   596,  -919,  -919,   631,   630,  -919,   640,   632,  4443,
     678,   681,   680,  6246,   646,  6144,   638,  6297,  5514,  6195,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  4506,  3738,   652,   604,  3738,  3738,  1968,  1968,  1968,
    2094,   659,  2346,    31,   188,   587,   438,  -919,  -919,   438,
    -919,    41,   649,   656,   650,   653,   654,   655,   658,   661,
     616,   622,   665,   648,  3801,   719,   666,   423,   662,    27,
     676,    54,   685,   679,  1616,  1880,   488,  5577,   660,  5325,
     687,  -919,   636,   683,  2598,    37,   682,   686,   694,   697,
    -919,   692,  2661,  4569,   657,  -919,   698,   702,   239,  2724,
     703,   699,   700,  -919,  3801,   762,   438,   708,   766,   768,
     751,   714,   716,   722,   193,   704,  -919,  2787,  2850,  4632,
     723,  3801,   782,   729,  2913,  2976,  4695,   720,  3801,   784,
     733,  3864,   743,  2157,   756,  -919,   226,   750,   726,   741,
     469,   753,   742,   763,   523,  -919,    50,   764,  -919,   803,
     803,  -919,  -919,    64,   770,   131,   712,  5640,  -919,   711,
     865,   715,   757,  5703,  -919,   761,   442,  5262,  5262,  6246,
     750,   765,  6246,   750,  6246,  6246,   750,   510,  6246,   750,
     514,    89,  3738,  3738,   179,   179,  -919,  -919,  -919,  1968,
    -919,  1968,   777,  3933,  -919,  -919,  -919,  -919,  -919,  -919,
     771,  -919,  -919,   772,  -919,  -919,  -919,  -919,  -919,  -919,
     773,   776,   781,  5262,   547,   785,   778,  6313,   779,   741,
     574,  4758,  -919,   787,  -919,   309,   794,   788,   798,  5325,
     828,  -919,   438,  -919,   792,   801,   804,  -919,  4821,   795,
     805,   802,   810,  3039,  5766,  5451,   806,   332,   812,   494,
    -919,   813,   814,   811,   826,   829,  5325,  -919,   830,   822,
    -919,    35,  -919,  -919,   819,   834,  3864,   838,  -919,  -919,
     450,  4884,   835,   837,  3102,   836,   844,  3165,  -919,   845,
     840,   850,   842,  3996,   851,   846,  3417,  -919,   847,   839,
     220,    47,  1433,  4947,   841,   856,  -919,   870,   823,   852,
    -919,  4884,  -919,   803,   803,   803,   198,   848,   857,   869,
     861,   803,   211,   881,   882,  -919,  3486,   872,   237,  -919,
     886,   547,  -919,   523,  -919,   890,   887,   892,  6313,   536,
     556,   750,   894,   750,   750,   750,   750,   153,   153,  -919,
     480,  -919,  3228,   895,   889,  -919,  -919,  -919,  -919,   858,
     435,   897,   438,   523,  3549,   942,  4248,  -919,   942,   908,
     899,   938,   893,  -919,  5829,   910,   911,   555,  4059,    20,
    -919,   905,  -919,   900,   862,   922,  5325,   916,    13,   929,
     930,   926,   923,  -919,  -919,  5010,   873,   858,   927,   928,
     438,   984,   210,  3996,  3417,   921,    47,   904,   990,   497,
    5892,   939,   933,  5073,   943,   935,   438,  4122,  5325,   936,
     941,   438,   934,  -919,   951,  5325,   937,    65,   952,  -919,
    1005,  1005,  -919,  -919,    68,   956,   371,   918,  1880,   463,
    1704,   942,   914,  -919,  5262,   499,  -919,   960,   861,   959,
    6313,   803,   964,   907,  -919,   950,   967,   966,   523,  -919,
    -919,   955,   965,   953,   974,   348,   523,  -919,  -919,  6246,
     201,   972,  -919,   961,   438,  -919,  -919,   977,  -919,   969,
     978,   396,   979,  4884,   980,   970,  5262,   983,  -919,  -919,
    4185,  4884,   523,  5262,  -919,   981,   982,   438,   940,   985,
    5955,   741,  -919,  5325,   989,   993,  -919,  -919,  -919,   994,
     438,  -919,    24,   996,  -919,  1049,  -919,   992,   986,   995,
    1003,  1002,  1056,  -919,  -919,  1008,  -919,  6018,   555,  2472,
    6081,  -919,   438,  -919,  1009,  1010,   438,  -919,   954,   991,
     958,  5136,   962,  1005,  1005,  1005,   238,  1012,  1015,  1016,
     861,  1005,   254,  1017,  1019,  1000,   968,   372,  -919,  -919,
     997,  -919,  1022,   200,   988,   521,  -919,  1023,   971,  1025,
     523,  1026,   882,   256,  -919,   882,  -919,  -919,  1030,  1032,
    1027,  1031,   750,  1018,  1035,  -919,  3549,  -919,  -919,  1704,
    -919,  1616,  -919,   500,  -919,  5262,   274,  1029,   523,   523,
    1034,   368,  -919,  1036,  -919,  2535,   547,  1038,  1041,  5262,
    1042,  1058,  -919,   210,  1028,  1059,  1050,  1061,  1006,  1043,
    1062,  1066,  1054,  -919,  1064,  1047,  -919,  1067,  1069,  1073,
     523,  -919,  -919,  1078,   861,  1076,  1083,  1005,  1084,  1039,
    -919,  1081,  1089,  1088,  1046,  1048,  1077,  1051,  1154,  1107,
     164,  1099,  1145,  1102,  -919,  1079,  -919,  1105,  -919,  -919,
    1114,  1115,  1119,   269,  1023,  1122,  1121,  -919,  1109,  1124,
    -919,  -919,  1125,  -919,  1126,  -919,   315,  1129,   295,  1166,
    1130,    77,  1116,  -919,  1134,  1138,   603,  1137,  1132,  -919,
    1190,  1133,  -919,  1123,  1139,  1143,  1147,  -919,  1146,  1148,
    1149,  1136,  1704,  1144,  1150,  1096,  1157,  1152,  1156,  1019,
     291,  -919,  1019,  -919,  -919,  1155,  1106,  1110,  1159,  1127,
    -919,  1108,  1162,  -919,  -919,  -919,   731,  5199,  1112,   420,
    1163,  1169,  -919,  -919,  1158,  1170,  -919,  -919,  -919,  -919,
    -919,  -919,   942,  -919,  1160,  1211,  5262,  -919,  1161,  1174,
    -919,  1175,  1176,  1172,  -919,  1181,  1182,  1184,  1197,  1171,
    1704,  1186,  -919,  1189,  1880,  1704,  -919,  -919,  1199,  1206,
     377,  1150,  1203,  1217,  1209,  -919,  1213,  1220,  -919,  -919,
    1218,  1208,  1223,  1276,  -919,  -919,  1163,    48,   142,  1222,
    1221,  -919,  -919,  -919,    33,  -919,  -919,  -919,  1224,   167,
    -919,  -919,  -919,  -919,  -919,  1227,   518,  -919,  -919,  -919,
    -919,  -919,   547,  1212,  -919,  1228,  1191,  1230,  -919,  -919,
    1229,  1244,  5262,   275,  4884,  1245,  -919,  1247,  -919,  -919,
    1225,  1880,  1704,  -919,  1254,  1704,  1255,  -919,  -919,  1239,
    1204,  1263,  4884,  1019,  -919,  -919,  -919,  -919,  1880,  -919,
    1259,  1210,  1266,  1214,  -919,  1260,  -919,  -919,  1269,  1265,
    -919,  1270,  1271,  1281,  1258,  1258,  1283,   520,  1325,  1792,
     161,  -919,  1287,  -919,  4884,   282,  1288,   523,  1280,  -919,
    -919,  1292,  -919,  4884,  -919,   942,  1234,  1240,  -919,   509,
    1293,  -919,  1295,  1298,  -919,  1300,   420,    69,    53,  1249,
    1261,  -919,  -919,  -919,  1302,  -919,  1303,  1297,  1305,  -919,
    -919,  -919,  1306,  -919,   512,  1310,  -919,  1307,   942,   513,
    -919,  -919,  1313,  1304,  -919,  1312,  -919,  -919,  -919,   327,
    1314,  1315,  -919,  1264,  1318,  1267,  -919,  -919,   102,    51,
    1272,  1274,  1320,  -919,  1316,  1321,  -919,  1323,  -919,  1346,
    -919,   321,  -919,  -919,  -919,  -919,  -919,  1340,  -919,  1333,
    -919,  1294,  -919,  1338,  -919,  -919,  1356,  1361,  1359,  1367,
    -919,  -919,   216,  -919,  1374,   524,  -919,  1371,   314,  1322,
     314,  1427,  -919,  1328,  -919,   524,  1368,  -919,  1390,  1341,
    -919,  -919,  -919,  1391,  1393,  1344,  1704,  -919,  -919,  1704,
    1396,  -919,  -919,  1380,  1413,  1398,  -919
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -919,  -919,   987,  -919,     7,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,   677,   780,  -919,
    -919,   891,  -919,   615,  -531,  -919,  -919,  -919,  -390,  -919,
    -919,   577,  -919,  -919,  -919,  -919,  -919,  -898,  -919,  -919,
    -919,  -919,  -919,   364,   365,  -919,  -918,   432,  -919,  -847,
     573,  -919,   401,   403,  -919,  -919,   515,   517,   431,  -919,
    -919,  -919,  -919,   406,  -919,  -919,   366,  -919,  -919,  -919,
    -919,  1411,   324,   901,  -919,  -919,  -919,  -696,  -809,  -536,
    -566,   767,  -429,  -919,  -575,  -919,  -919,  1415,  -249,  -158,
    1135,   -36,   -17,  -100,   399,   725,    -1,  -919,  -919,  -919,
    -919,  -919,  -476,  -690,  -266,  -297,   998,  -117,  -188,  1141,
       3,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,    -6,  1286,  1275,  1273,   276,   426,    14,
    -919,  -919,  1460,  -160,  -243,   215,  -876,  -919,  -919,  -919,
    -919,    22,  -919,  -919,  -919,  -919,  -919,  -919,   945,  -168,
    -919,   -91,  -349,  -919,   407,  -512,  -919,   669,   -11,  -919,
    -919,  -257,   -99,  -919,    16,    17,  -919,  -253,   -20,   590,
    -216
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -509
static const yytype_int16 yytable[] =
{
      72,   346,   151,   117,   176,   405,   406,   652,    43,   339,
     111,   341,   323,   379,   408,   429,   166,   157,   627,   146,
     981,   274,   276,    92,   524,   135,   132,   133,   813,   138,
     275,   727,    92,   489,   169,   719,   493,   664,   723,   178,
    1026,   400,   606,   738,    92,   456,   325,   832,   429,   972,
      92,   596,   984,   174,   325,   335,   575,   276,   400,  1022,
     485,   715,   372,   488,   718,   939,  -170,   250,   325,   596,
     440,   251,   596,   955,   250,   422,   592,   663,   251,   250,
     732,   918,   228,   251,   395,   373,   187,   578,   176,   251,
    1028,   250,   571,   170,   136,   251,  -320,  1029,   380,   326,
     247,  -256,   783,   258,   597,   820,  1133,   483,   401,   225,
    1028,   256,   381,   572,   484,  1136,   259,   244,   267,   171,
       1,   491,   713,   178,   438,   721,   245,  1099,   252,   714,
     290,   229,  1011,  -205,   919,   252,  -126,   277,   133,   136,
     252,   459,  1081,    92,   905,   727,   252,   606,   464,  1030,
     213,   402,   252,   137,  -317,   809,    36,   821,   317,  -253,
     275,  -188,    72,    92,  1137,   417,  1103,   320,   716,    72,
     324,   716,    92,   274,   276,   408,   492,   802,    92,   568,
     722,   225,   275,   944,   689,    92,   947,   350,   664,   353,
    -126,   356,   374,   359,   623,   495,   543,   448,   253,   274,
     214,  1024,   496,  1026,   456,   753,   274,   276,   275,   486,
    1134,   821,   486,   215,   683,   275,    88,   616,   820,  1098,
     753,  -332,   890,  1128,  1025,    88,   891,  1034,   100,   875,
     181,   366,   367,   368,   370,   892,   217,    88,   704,   497,
      27,   878,   664,    88,   218,   219,   101,    31,   410,  -126,
    1160,   253,  1162,    72,    72,   426,   -76,   820,   548,   754,
     216,   191,   495,   256,  -121,  -332,   836,   684,   685,   839,
     821,   267,   -70,   548,  1035,   624,    92,    92,   893,   147,
    -105,    92,   188,   478,   716,   804,   804,   657,  -126,   132,
     133,   220,   189,   189,    92,    92,   256,   267,   187,   669,
     189,   630,   725,   256,   267,   589,   497,   139,   595,   821,
     470,   192,   193,   189,   432,   726,   645,  1060,   810,   625,
     837,    92,   473,   474,   741,   559,   276,    92,    92,   132,
     133,   657,   849,   903,  1046,    92,    88,     4,   710,   503,
     408,  1085,    72,   511,   194,   631,   513,   195,   514,   515,
     153,   510,   516,   915,   681,   945,    88,   196,   111,   729,
     140,   731,   811,   535,   838,    88,   486,   618,   618,   912,
     703,    88,   267,   197,   295,   707,   646,   904,    88,  -508,
    1146,   990,   188,   519,   426,   520,   144,  1121,  -450,  -156,
     187,   187,   530,   248,  -407,   198,   533,   199,   541,   946,
     536,   254,  -126,  1025,   106,   110,   536,   114,   258,   960,
    1122,  1123,  1124,   657,  -508,   688,   778,  -508,   317,  -508,
    -508,   259,   256,   821,   258,   188,  -450,   408,   757,   187,
     852,    92,   167,   340,  -159,   725,   816,   259,   642,   177,
     426,  1009,   496,   648,   258,   470,   258,    92,   726,   817,
     579,   772,   187,   256,  1010,   187,   267,   259,    92,   259,
     189,   508,    72,   255,   782,   470,   761,   751,   766,    88,
      88,    72,   609,   322,    88,   284,   678,   398,   890,    43,
     615,   188,   891,   163,   285,   188,   793,    88,    88,   643,
     796,   892,   375,   162,    92,   628,   376,   188,  -384,   301,
     308,   377,   249,   168,   577,  -384,  -384,   636,   302,   309,
     845,   249,   846,   578,    88,   281,   172,   730,   114,   282,
      88,    88,   278,   177,  1090,   188,   160,   479,    88,   185,
     291,   188,   161,    72,   187,   186,   292,  -384,  -384,  -284,
    -384,  -384,  -384,  -492,   407,  -384,  -384,   662,   114,   248,
     188,  -384,   562,   694,   114,   736,   847,  1116,   563,   188,
     695,   188,   188,   695,   178,  1093,    92,  -384,  1112,  1117,
     173,   188,    72,   470,   188,   188,  1037,   848,    92,  1075,
     830,  1038,   180,   188,  1076,   188,   267,  -384,  -384,  -384,
    -384,  -384,  -384,   141,   190,   637,   142,   143,   646,  1156,
     134,  1157,    92,   751,   184,    92,   187,    72,   190,    72,
      92,   189,   152,   735,   191,   638,   191,    92,   158,   740,
     211,   114,   212,   936,    88,   248,   660,   221,   192,   193,
      92,   227,    92,   752,   230,   777,   226,   243,   517,   518,
      88,   364,   365,   394,   248,   253,   228,   257,   262,   271,
     263,    88,   763,   283,   280,   293,   394,  -447,   287,   768,
     769,   194,   662,   249,   195,   648,   303,   286,   288,   289,
     294,   427,   296,   307,   196,   310,   311,   695,   249,   312,
     318,  1003,   319,   394,   338,  1006,  1007,    88,   337,   143,
     197,   336,    92,   342,   343,    92,   249,   114,   256,   344,
     394,   347,   345,   249,   114,   348,   349,   394,   351,   354,
     800,   134,   198,   362,   199,   363,   371,   383,   393,    92,
     382,   384,    92,   396,   385,   386,   387,   390,   993,   388,
     399,   158,   389,   246,   391,   955,   501,   392,   397,   403,
     152,     4,   404,   411,   412,   418,   158,   413,   419,   409,
     420,   421,  1051,  1052,   422,    72,  1054,   430,    72,    88,
      72,   431,   435,   436,   437,  -436,   439,   441,  -338,  1061,
     442,    88,   443,   856,   256,   192,   193,   444,   445,   446,
     447,    92,   458,    92,   451,   956,   460,   461,   465,   957,
    1080,   958,   463,   891,  -178,    88,   466,   471,    88,   472,
     501,   477,   959,    88,  1045,   175,   481,   325,   194,   480,
      88,   195,  -338,   960,   961,   962,   963,   394,   499,   482,
     487,   196,   114,    88,   494,    88,   231,   502,   505,   232,
     233,   504,   507,   521,   234,   235,   512,   197,  -159,   529,
     532,   531,   525,   526,   527,   893,   964,   528,   538,   158,
     534,   433,   540,   249,   542,   544,   427,   545,   539,   198,
     546,   199,   158,   134,   554,   553,   555,   556,   561,   102,
     560,    72,  -499,   564,   565,     4,   236,   237,   238,   239,
     240,   241,   566,  -327,   570,    88,   569,   567,    88,   152,
       7,   573,   576,   581,    92,   158,   158,   574,   580,   583,
     584,   585,   586,   134,   587,   588,   593,   590,   591,   594,
     611,   610,    88,   612,   621,    88,   614,  1171,   620,   103,
    1172,   249,  -378,   104,  -285,    11,   622,  -292,   105,    72,
    -378,  -378,   496,    72,    72,   651,   613,    15,   626,   326,
     632,  -292,   629,   501,   633,   641,   634,    23,    24,    25,
      26,   635,    92,   639,  -292,    29,    92,    92,   640,   644,
      36,   649,   653,   654,   655,   656,   658,   659,    37,   665,
     667,   666,    39,  -367,    88,  -364,    88,  -378,   668,   670,
      40,  -292,   394,  -462,   671,   672,   679,   673,   448,   677,
     680,   690,   692,  1047,   693,   696,   697,   702,   708,   158,
      72,    72,   701,   706,    72,   709,   705,   711,   717,   596,
     724,  1059,   728,   733,   737,   158,   739,    72,   742,   743,
     744,   745,   746,    92,    92,   747,   158,    92,   750,   748,
     749,   755,   756,   758,   760,   762,   764,   767,    72,   759,
      92,   771,   765,  1084,   774,   770,   779,   780,   773,   118,
     784,   781,  1089,   683,   786,     4,   787,   789,   790,   788,
     791,    92,   792,  -327,   795,   794,   799,   797,   798,   776,
       7,   806,   807,   808,   812,   801,   597,   814,   819,   834,
     831,   815,   829,   835,   833,   818,   840,    88,   841,   660,
     843,   842,   663,   850,   854,   853,   501,   851,   114,   272,
     855,  -455,  -378,   273,  -285,    11,   857,  -292,   122,  -455,
    -378,  -378,   858,   861,   862,   863,   860,    15,   868,   864,
     865,   866,   867,   869,   870,   872,   871,    23,    24,    25,
      26,   873,   874,   876,   158,    29,  -455,   877,   879,  -455,
     881,  -455,  -455,   882,   883,    88,   158,    36,    37,    88,
      88,   880,    39,  -285,   886,  -364,   885,  -378,   888,   884,
     124,   889,   896,   897,   887,    72,  -194,   899,    72,   900,
     152,   901,   483,   152,   114,   902,   906,   907,   158,   908,
     909,   910,   911,   914,   916,   158,   917,   921,    92,   102,
     922,    92,   923,   924,   926,     4,   925,   927,   929,   930,
     928,   931,   932,  -327,   933,   934,   935,   938,   937,   940,
       7,   941,   942,   943,   948,   951,    88,    88,   950,   949,
      88,   954,   953,   987,   474,   983,   989,   985,   988,   992,
     991,   661,   994,    88,   995,   996,   997,   998,   999,   103,
    1000,  1002,  -378,   104,  -285,    11,  1004,  -292,   105,   175,
    -378,  -378,   102,  1001,    88,  -292,   713,    15,     4,  1005,
     158,  -285,  1008,   158,  1012,  1014,  -327,    23,    24,    25,
      26,  1013,  1015,     7,  -285,    29,  1016,  1017,  1018,  1019,
    1020,  1027,  1039,  -157,  1050,  1043,  1033,   152,    37,  1036,
     152,  1040,    39,  -367,  1042,  -364,   982,  -378,  1044,  1048,
      40,  -285,   279,  1049,  1041,  -378,   104,  -285,    11,  1055,
    -292,   105,   175,  -378,  -378,  1053,  1056,  1057,  -292,  1058,
      15,  1062,  -158,  1063,  -285,  1064,  1066,  1065,  1067,  1079,
      23,    24,    25,    26,  1068,  1069,     3,  -285,    29,  1070,
    1071,  1074,     4,  1083,  1087,  1086,  1088,  1091,  1092,  1094,
       5,    37,     6,  1095,  1096,    39,  -367,     7,  -364,  1097,
    -378,  1109,  1105,    40,  -285,  1107,  1108,  1113,  1106,  1110,
    1111,  1114,  1118,  1129,  1119,  1120,  1141,  1143,  1038,  1142,
    1130,    88,  1131,  1132,    88,  1139,     8,  1140,    -6,     9,
      10,  -274,    11,  1144,  -292,    12,  -278,  -378,  -378,    13,
    1145,    14,  1147,  1148,    15,    16,    17,  1149,    18,  1150,
      19,    20,    21,    22,    23,    24,    25,    26,    27,  1151,
    1152,    28,    29,  1153,    30,    31,  1154,    32,  1155,  1159,
      33,  1133,    34,    35,    36,    37,    38,     3,  1161,    39,
    -367,  1163,  -364,     4,  -378,  1165,  1166,    40,  1167,  1169,
    1168,     5,  1170,     6,  1173,  1174,  1175,  1176,     7,   607,
     859,   913,   682,  1126,  1127,   785,   952,  1073,  1100,   973,
    1101,  1082,  1023,  1021,  1104,  1138,   182,   691,   506,  1164,
     183,   844,   805,   619,   357,   361,   360,     8,   509,   159,
       9,    10,  -274,    11,  1115,  -292,    12,  -278,  -378,  -378,
      13,     0,    14,     0,     0,    15,    16,    17,     0,    18,
     676,    19,    20,    21,    22,    23,    24,    25,    26,    27,
     920,     0,    28,    29,     0,    30,    31,    -6,    32,     0,
       0,    33,     3,    34,    35,    36,    37,    38,     4,     0,
      39,  -367,     0,  -364,     0,  -378,  -327,     0,    40,     0,
       0,     0,     0,     7,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     0,    -6,     9,   313,  -274,    11,     0,
    -292,    12,  -278,  -378,  -378,    13,     0,    14,     0,     0,
      15,    16,    17,   314,     0,     0,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,    29,     0,
       3,     0,    -6,     0,    -6,    -6,     4,     0,    34,    35,
      36,    37,    38,     0,  -327,    39,  -367,     0,  -364,     0,
    -378,     7,     0,    40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       8,     0,    -6,     9,   313,  -274,    11,     0,  -292,    12,
    -278,  -378,  -378,    13,     0,    14,     0,     0,    15,    16,
      17,   314,     0,     0,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,    29,    -6,     3,     0,
      -6,     0,     0,     0,     4,     0,    34,    35,    36,    37,
      38,     0,  -327,    39,  -367,     0,  -364,     0,  -378,     7,
       0,    40,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     8,     0,
      -6,     9,   313,  -274,    11,     0,  -292,    12,  -278,  -378,
    -378,    13,     0,    14,     0,     0,    15,    16,    17,   314,
       0,     0,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,    29,     0,     3,     0,    -6,     0,
       0,     0,     4,     0,    34,    35,    36,    37,    38,     0,
    -327,    39,  -367,     0,  -364,     0,  -378,     7,     0,    40,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     0,     0,     9,
     313,  -274,    11,     0,  -292,    12,  -278,  -378,  -378,    13,
       0,    14,     0,     0,    15,    16,    17,   314,     0,     0,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,    29,     0,     3,     0,    -6,     0,     0,     0,
       4,     0,    34,    35,    36,    37,    38,     0,  -327,    39,
    -367,     0,  -364,     0,  -378,     7,     0,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     8,     0,     0,     9,   313,  -274,
      11,     0,  -292,    12,  -278,  -378,  -378,    13,     0,    14,
       0,     0,    15,    16,    17,   314,     0,     0,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
      29,     0,   102,     0,     0,     0,     0,     0,     4,     0,
      34,    35,    36,    37,    38,     0,  -327,    39,  -367,     0,
    -364,     0,  -378,     7,  -361,    40,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   103,     0,     0,  -378,   104,  -285,    11,  -361,
    -292,   105,     0,  -378,  -378,   102,     0,     0,     0,  -361,
      15,     4,     0,     0,     0,     0,     0,     0,     0,  -327,
      23,    24,    25,    26,     0,  -361,     7,  -361,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    37,     0,     0,     0,    39,  -367,  -361,  -364,  -361,
    -378,     0,     0,    40,     0,   222,     0,     0,  -378,   223,
    -285,    11,  -361,  -292,   224,     0,  -378,  -378,   102,     0,
       0,     0,  -361,    15,     4,     0,     0,     0,     0,     0,
       0,     0,  -327,    23,    24,    25,    26,     0,  -361,     7,
    -361,    29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    37,     0,     0,     0,    39,  -367,
    -361,  -364,  -361,  -378,     0,     0,    40,     0,   103,     0,
       0,  -378,   104,  -285,    11,  -361,  -292,   105,     0,  -378,
    -378,   118,     0,     0,     0,  -361,    15,     4,     0,     0,
       0,     0,     0,     0,     0,  -327,    23,    24,    25,    26,
       0,  -361,     7,     0,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    37,     0,     0,
       0,    39,  -367,  -361,  -364,  -361,   369,     0,     0,    40,
       0,   119,     0,  -426,   120,   121,  -285,    11,     0,  -292,
     122,  -426,  -378,  -378,   102,     0,     0,     0,     0,    15,
       4,     0,     0,     0,     0,     0,     0,     0,  -327,    23,
      24,    25,    26,     0,     0,     7,     0,    29,  -426,     0,
       0,  -426,     0,  -426,  -426,     0,     0,     0,     0,     0,
      37,     0,     0,     0,    39,  -367,     0,  -364,     0,  -378,
       0,     0,   124,     0,   103,     0,  -224,  -378,   104,  -285,
      11,     0,  -292,   105,     0,  -378,  -378,   148,     0,     0,
       0,     0,    15,     4,     0,     0,     0,     0,     0,     0,
       0,  -327,    23,    24,    25,    26,     0,     0,     7,     0,
      29,  -224,     0,     0,  -224,     0,  -224,  -224,     0,     0,
       0,     0,     0,    37,     0,     0,     0,    39,  -367,     0,
    -364,     0,  -378,     0,     0,    40,     0,   149,     0,  -505,
    -378,   150,  -285,    11,     0,  -292,   122,     0,  -378,  -378,
     102,     0,     0,     0,     0,    15,     4,     0,     0,     0,
       0,     0,     0,     0,  -327,    23,    24,    25,    26,     0,
       0,     7,     0,    29,  -505,     0,     0,  -505,     0,  -505,
    -505,     0,     0,     0,     0,     0,    37,     0,     0,     0,
      39,  -367,     0,  -364,     0,  -378,     0,     0,    40,     0,
     112,     0,  -285,  -378,   104,  -285,    11,     0,  -285,   105,
     113,  -378,  -378,   102,     0,     0,     0,     0,    15,     4,
       0,     0,  -285,     0,     0,     0,     0,  -327,    23,    24,
      25,    26,     0,     0,     7,  -285,    29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    37,
       0,     0,     0,    39,  -367,     0,  -364,     0,  -378,     0,
       0,    40,     0,   264,     0,  -285,  -378,   265,  -285,    11,
       0,  -285,   105,   266,  -378,  -378,   102,     0,     0,     0,
       0,    15,     4,     0,     0,  -285,     0,     0,     0,     0,
    -327,    23,    24,    25,    26,     0,     0,     7,  -285,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    37,     0,     0,     0,    39,  -367,     0,  -364,
       0,  -378,     0,     0,    40,     0,   297,     0,  -285,  -378,
     104,  -285,    11,     0,  -285,   105,   113,  -378,  -378,   102,
       0,     0,     0,     0,    15,     4,     0,     0,  -285,     0,
       0,     0,     0,  -327,    23,    24,    25,    26,     0,     0,
       7,  -285,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    37,     0,     0,     0,    39,
    -367,     0,  -364,     0,  -378,     0,     0,    40,     0,   304,
       0,  -285,  -378,   104,  -285,    11,     0,  -285,   105,   113,
    -378,  -378,   102,     0,     0,     0,     0,    15,     4,     0,
       0,  -285,     0,     0,     0,     0,  -327,    23,    24,    25,
      26,     0,     0,     7,  -285,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,    39,  -367,     0,  -364,     0,  -378,     0,     0,
      40,     0,   103,     0,  -285,  -378,   104,  -285,    11,     0,
    -292,   105,   414,  -378,  -378,   154,     0,     0,     0,     0,
      15,     4,     0,     0,  -285,     0,     0,     0,     0,  -327,
      23,    24,    25,    26,     0,     0,     7,  -285,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    37,     0,     0,     0,    39,  -367,     0,  -364,     0,
    -378,     0,     0,    40,     0,   423,     0,  -285,   424,   425,
    -285,    11,     0,  -285,   122,   266,  -378,  -378,   102,     0,
       0,     0,     0,    15,     4,     0,     0,  -285,     0,     0,
       0,     0,  -327,    23,    24,    25,    26,     0,     0,     7,
    -285,    29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    37,     0,     0,     0,    39,  -367,
       0,  -364,     0,  -378,     0,     0,    40,     0,   103,     0,
    -285,  -378,   104,  -285,    11,     0,  -292,   105,   433,  -378,
    -378,   102,     0,     0,     0,     0,    15,     4,     0,     0,
    -285,     0,     0,     0,     0,  -327,    23,    24,    25,    26,
       0,     0,     7,  -285,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    37,     0,     0,
       0,    39,  -367,     0,  -364,     0,  -378,     0,     0,    40,
       0,   103,     0,  -285,  -378,   104,  -285,    11,     0,  -292,
     105,   452,  -378,  -378,   102,     0,     0,     0,     0,    15,
       4,     0,     0,  -285,     0,     0,     0,     0,  -327,    23,
      24,    25,    26,     0,     0,     7,  -285,    29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      37,     0,     0,     0,    39,  -367,     0,  -364,     0,  -378,
       0,     0,    40,     0,   454,     0,  -285,  -378,   265,  -285,
      11,     0,  -285,   105,   455,  -378,  -378,   102,     0,     0,
       0,     0,    15,     4,     0,     0,  -285,     0,     0,     0,
       0,  -327,    23,    24,    25,    26,     0,     0,     7,  -285,
      29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    37,     0,     0,     0,    39,  -367,     0,
    -364,     0,  -378,     0,     0,    40,     0,   103,     0,  -285,
    -378,   104,  -285,    11,     0,  -292,   105,   462,  -378,  -378,
     154,     0,     0,     0,     0,    15,     4,     0,     0,  -285,
       0,     0,     0,     0,  -327,    23,    24,    25,    26,     0,
       0,     7,  -285,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    37,     0,     0,     0,
      39,  -367,     0,  -364,     0,  -378,     0,     0,    40,     0,
     423,     0,  -285,   120,   425,  -285,    11,     0,  -285,   122,
     266,  -378,  -378,   102,     0,     0,     0,     0,    15,     4,
       0,     0,  -285,     0,     0,     0,     0,  -327,    23,    24,
      25,    26,     0,     0,     7,  -285,    29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    37,
       0,     0,     0,    39,  -367,     0,  -364,     0,  -378,     0,
       0,    40,     0,   304,     0,  -285,  -378,   104,  -285,    11,
       0,  -285,   105,   557,  -378,  -378,   102,     0,     0,     0,
       0,    15,     4,     0,     0,  -285,     0,     0,     0,     0,
    -327,    23,    24,    25,    26,     0,     0,     7,  -285,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    37,     0,     0,     0,    39,  -367,     0,  -364,
       0,  -378,     0,     0,    40,     0,   103,     0,  -285,  -378,
     104,  -285,    11,     0,  -292,   105,   582,  -378,  -378,   102,
       0,     0,     0,     0,    15,     4,     0,     0,  -285,     0,
       0,     0,     0,  -327,    23,    24,    25,    26,     0,     0,
       7,  -285,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    37,     0,     0,     0,    39,
    -367,     0,  -364,     0,  -378,     0,     0,    40,     0,   454,
       0,  -285,   164,   265,  -285,    11,     0,  -285,   105,   455,
    -378,  -378,   102,     0,     0,     0,     0,    15,     4,     0,
       0,  -285,     0,     0,     0,     0,  -327,    23,    24,    25,
      26,     0,     0,     7,  -285,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,    39,  -367,     0,  -364,     0,  -378,     0,     0,
      40,     0,   103,     0,  -285,  -378,   104,  -285,    11,     0,
    -292,   105,   175,  -378,  -378,   118,     0,     0,     0,     0,
      15,     4,     0,     0,  -285,     0,     0,     0,     0,  -327,
      23,    24,    25,    26,     0,     0,     7,  -285,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    37,     0,     0,     0,    39,  -367,     0,  -364,     0,
    -378,     0,     0,    40,     0,   119,     0,  -426,   120,   121,
    -285,    11,     0,  -292,   122,  -426,   123,  -378,   102,     0,
       0,     0,     0,    15,     4,     0,     0,     0,     0,     0,
       0,     0,  -327,    23,    24,    25,    26,     0,     0,     7,
       0,    29,     0,     0,     0,  -426,     0,     0,     0,     0,
       0,     0,     0,     0,    37,     0,     0,     0,    39,  -367,
       0,  -364,     0,  -378,     0,     0,   124,     0,   103,     0,
    -285,  -378,   104,  -285,    11,     0,  -292,   105,     0,  -378,
    -378,   102,     0,     0,     0,     0,    15,     4,     0,     0,
    -285,     0,     0,     0,     0,  -327,    23,    24,    25,    26,
       0,     0,     7,  -285,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    37,     0,     0,
       0,    39,  -367,     0,  -364,     0,  -378,     0,     0,    40,
       0,   103,     0,     0,  -378,   104,   467,    11,     0,  -292,
     105,   -97,  -378,  -378,     0,     0,     0,   468,     0,    15,
     102,     0,     0,     0,     0,     0,     4,     0,     0,    23,
      24,    25,    26,     0,  -327,  -292,     0,    29,     0,     0,
       0,     7,     0,     0,     0,     0,     0,     0,     0,     0,
      37,     0,     0,     0,    39,  -367,     0,  -364,     0,  -378,
       0,     0,    40,     0,     0,     0,     0,     0,     0,     0,
     103,     0,     0,  -378,   104,  -285,    11,     0,  -292,   105,
    -292,  -378,  -378,   102,     0,     0,     0,     0,    15,     4,
       0,     0,     0,  -292,     0,     0,     0,  -327,    23,    24,
      25,    26,     0,     0,     7,     0,    29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    37,
       0,     0,     0,    39,  -292,     0,  -364,     0,  -378,  -292,
       0,    40,     0,   103,     0,  -274,     9,   104,  -285,    11,
       0,  -292,   105,  -278,  -378,  -378,   102,     0,     0,     0,
       0,    15,     4,     0,     0,     0,     0,     0,     0,     0,
    -327,    23,    24,    25,    26,     0,     0,     7,     0,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    36,    37,     0,     0,     0,    39,  -367,     0,  -364,
       0,  -378,     0,     0,    40,     0,   103,     0,     0,   164,
     104,  -285,    11,     0,  -292,   105,  -282,  -378,  -378,   102,
       0,     0,  -112,     0,    15,     4,     0,     0,     0,     0,
       0,     0,     0,  -327,    23,    24,    25,    26,     0,     0,
       7,     0,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    37,     0,     0,     0,    39,
    -367,     0,  -364,     0,  -378,     0,     0,    40,     0,   103,
       0,  -274,     9,   104,  -285,    11,     0,  -292,   105,  -278,
    -378,  -378,   102,     0,     0,     0,     0,    15,     4,     0,
       0,     0,     0,     0,     0,     0,  -327,    23,    24,    25,
      26,     0,     0,     7,  -361,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,    39,  -367,     0,  -364,     0,  -378,     0,     0,
      40,     0,   103,     0,     0,     0,   104,  -285,    11,  -361,
    -292,   105,     0,     0,     0,   102,     0,     0,     0,  -361,
      15,     4,     0,     0,     0,     0,     0,     0,     0,  -327,
      23,    24,    25,    26,     0,  -361,     7,     0,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    37,     0,     0,     0,    39,  -367,  -361,  -364,  -361,
       0,     0,     0,    40,     0,   112,     0,  -402,  -378,   104,
    -285,    11,     0,  -285,   105,   113,  -378,  -378,   102,     0,
       0,     0,     0,    15,     4,     0,     0,     0,     0,     0,
       0,     0,  -327,    23,    24,    25,    26,     0,     0,     7,
       0,    29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    37,     0,     0,     0,    39,  -367,
       0,  -364,     0,  -378,     0,     0,    40,     0,   103,     0,
       0,  -378,   104,   467,    11,     0,  -292,   105,     0,  -378,
    -378,     0,     0,     0,   468,     0,    15,   102,     0,     0,
       0,     0,     0,     4,     0,     0,    23,    24,    25,    26,
       0,  -327,  -292,     0,    29,     0,     0,     0,     7,     0,
       0,     0,     0,     0,     0,     0,     0,    37,     0,     0,
       0,    39,  -367,     0,  -364,     0,  -378,     0,     0,    40,
       0,     0,     0,     0,     0,     0,     0,   522,     0,  -458,
    -378,   265,  -285,    11,     0,  -292,   105,   523,  -378,  -378,
     102,     0,     0,     0,     0,    15,     4,     0,     0,     0,
       0,     0,     0,     0,  -327,    23,    24,    25,    26,     0,
       0,     7,     0,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    37,     0,     0,     0,
      39,  -367,     0,  -364,     0,  -378,     0,     0,    40,     0,
     103,     0,     0,     9,   104,  -285,    11,     0,  -292,   105,
    -278,  -378,  -378,   102,     0,     0,  -274,     0,    15,     4,
       0,     0,     0,     0,     0,     0,     0,  -327,    23,    24,
      25,    26,     0,     0,     7,     0,    29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    37,
       0,     0,     0,    39,  -367,     0,  -364,     0,  -378,     0,
       0,    40,     0,   103,     0,  -292,   661,   104,  -285,    11,
       0,  -292,   105,  -292,  -378,  -378,   102,     0,     0,     0,
       0,    15,     4,     0,     0,     0,     0,     0,     0,     0,
    -327,    23,    24,    25,    26,     0,     0,     7,     0,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    37,     0,     0,     0,    39,  -367,     0,  -364,
       0,  -378,     0,     0,    40,     0,   103,     0,  -458,  -378,
     265,  -285,    11,     0,  -292,   105,   523,  -378,  -378,   102,
       0,     0,     0,     0,    15,     4,     0,     0,     0,     0,
       0,     0,     0,  -327,    23,    24,    25,    26,     0,     0,
       7,     0,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    37,     0,     0,     0,    39,
    -367,     0,  -364,     0,  -378,     0,     0,    40,     0,   103,
       0,  -292,  -378,   104,  -285,    11,     0,  -292,   105,  -292,
    -378,  -378,   102,     0,     0,     0,     0,    15,     4,     0,
       0,     0,     0,     0,     0,     0,  -327,    23,    24,    25,
      26,     0,     0,     7,     0,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,    39,  -367,     0,  -364,     0,  -378,     0,     0,
      40,     0,   103,     0,     0,  -378,   104,  -285,    11,     0,
    -292,   105,     0,  -378,  -378,   102,     0,     0,  -285,     0,
      15,     4,     0,     0,     0,     0,     0,     0,     0,  -327,
      23,    24,    25,    26,     0,     0,     7,     0,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    37,     0,     0,     0,    39,  -367,     0,  -364,     0,
    -378,     0,     0,    40,     0,   103,     0,     0,  -378,   104,
    -285,    11,     0,  -292,   105,     0,  -378,  -378,   102,     0,
       0,     0,   246,    15,     4,     0,     0,     0,     0,     0,
       0,     0,  -327,    23,    24,    25,    26,     0,     0,     7,
       0,    29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    37,     0,     0,     0,    39,  -367,
       0,  -364,     0,  -378,     0,     0,    40,     0,   103,     0,
       0,  -378,   104,  -285,    11,     0,  -292,   105,     0,  -378,
    -378,     0,     0,     0,     0,     0,    15,   102,     0,  -285,
       0,     0,     0,     4,     0,     0,    23,    24,    25,    26,
       0,  -327,  -327,     0,    29,     0,     0,     0,     7,     0,
       0,     0,     0,     0,     0,     0,     0,    37,     0,     0,
       0,    39,  -367,     0,  -364,     0,  -378,     0,     0,    40,
       0,     0,     0,     0,     0,     0,     0,   103,     0,     0,
    -378,   104,  -285,    11,     0,  -292,   105,     0,  -378,  -378,
     102,     0,     0,     0,     0,    15,     4,     0,     0,     0,
       0,     0,     0,     0,  -327,    23,    24,    25,    26,     0,
       0,     7,  -361,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    37,     0,     0,     0,
      39,  -367,     0,  -364,     0,  -378,     0,     0,    40,     0,
     103,     0,     0,     0,   104,  -285,    11,  -361,  -292,   105,
       0,     0,     0,   118,     0,     0,     0,  -361,    15,     4,
       0,     0,     0,     0,     0,     0,     0,  -327,    23,    24,
      25,    26,     0,  -361,     7,     0,    29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    37,
       0,     0,     0,    39,     0,  -361,  -364,  -361,     0,     0,
       0,    40,     0,   272,     0,     0,  -378,   273,  -285,    11,
       0,  -292,   122,     0,  -378,  -378,   148,     0,     0,     0,
       0,    15,     4,     0,     0,     0,     0,     0,     0,     0,
    -327,    23,    24,    25,    26,     0,     0,     7,     0,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    36,    37,     0,     0,     0,    39,  -285,     0,  -364,
       0,  -378,     0,     0,   124,     0,   457,     0,     0,  -378,
     299,  -285,    11,     0,  -292,   122,     0,  -378,  -378,   154,
       0,     0,     0,     0,    15,     4,     0,     0,     0,     0,
       0,     0,     0,  -327,    23,    24,    25,    26,     0,     0,
       7,     0,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    36,    37,     0,     0,     0,    39,
    -285,     0,  -364,     0,  -378,     0,     0,   124,     0,   272,
       0,     0,  -378,   306,  -285,    11,     0,  -292,   122,     0,
    -378,  -378,   102,     0,     0,     0,     0,    15,     4,     0,
       0,     0,     0,     0,     0,     0,  -327,    23,    24,    25,
      26,     0,     0,     7,     0,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    36,    37,     0,
       0,     0,    39,  -285,     0,  -364,     0,  -378,     0,     0,
     124,     0,   103,     0,     0,   164,   104,  -285,    11,     0,
    -292,   105,  -282,  -378,  -378,   547,     0,     0,     0,     0,
      15,     4,     0,     0,     0,     0,     0,     0,     0,  -327,
      23,    24,    25,    26,     0,     0,     7,     0,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    37,     0,     0,     0,    39,  -367,     0,  -364,     0,
    -378,     0,     0,    40,     0,   112,     0,     0,   548,   549,
    -285,    11,     0,  -292,   105,  -469,  -378,  -378,   102,     0,
       0,     0,     0,    15,     4,     0,     0,     0,     0,     0,
       0,     0,  -327,    23,    24,    25,    26,     0,     0,     7,
       0,    29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    37,     0,     0,     0,    39,  -367,
       0,  -364,     0,  -378,     0,     0,    40,     0,   103,     0,
    -292,  -378,   104,  -285,    11,     0,  -292,   105,     0,  -378,
    -378,   102,     0,     0,     0,     0,    15,     4,     0,     0,
       0,     0,     0,     0,     0,  -327,    23,    24,    25,    26,
       0,     0,     7,     0,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    37,     0,     0,
       0,    39,  -367,     0,  -364,     0,  -378,     0,     0,    40,
       0,   103,     0,     0,  -378,   104,  -285,    11,     0,  -292,
     105,     0,  -378,  -378,   102,     0,     0,   608,     0,    15,
       4,     0,     0,     0,     0,     0,     0,     0,  -327,    23,
      24,    25,    26,     0,     0,     7,     0,    29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      37,     0,     0,     0,    39,  -367,     0,  -364,     0,  -378,
       0,     0,    40,     0,   103,     0,     0,   674,   104,  -285,
      11,     0,  -292,   105,     0,  -378,  -378,   698,     0,     0,
    -292,     0,    15,     4,     0,     0,     0,     0,     0,     0,
       0,  -327,    23,    24,    25,    26,     0,     0,     7,     0,
      29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    37,     0,     0,     0,    39,  -367,     0,
    -364,     0,  -378,     0,     0,    40,     0,   699,     0,     0,
     548,   700,  -285,    11,     0,  -292,   122,  -469,  -378,  -378,
     102,     0,     0,     0,     0,    15,     4,     0,     0,     0,
       0,     0,     0,     0,  -327,    23,    24,    25,    26,     0,
       0,     7,     0,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    37,     0,     0,     0,
      39,  -367,     0,  -364,     0,  -378,     0,     0,    40,     0,
     103,     0,     0,  -378,   104,  -285,    11,     0,  -292,   105,
       0,  -378,  -378,   102,     0,     0,     0,     0,    15,     4,
       0,     0,     0,     0,     0,     0,     0,  -327,    23,    24,
      25,    26,     0,     0,     7,     0,    29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    37,
       0,     0,     0,    39,  -367,     0,  -364,     0,  -378,  -292,
       0,    40,     0,   103,     0,     0,  -378,   104,  -285,    11,
       0,  -292,   105,     0,  -378,  -378,   102,     0,     0,     0,
       0,    15,     4,     0,     0,     0,     0,     0,     0,     0,
    -327,    23,    24,    25,    26,     0,     0,     7,     0,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    37,     0,     0,     0,    39,  -367,     0,  -364,
       0,  -378,  -285,     0,    40,     0,   103,     0,     0,  -378,
     104,  -285,    11,     0,  -292,   105,     0,  -378,  -378,   154,
       0,     0,     0,     0,    15,     4,     0,     0,     0,     0,
       0,     0,     0,  -327,    23,    24,    25,    26,     0,     0,
       7,     0,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    37,     0,     0,     0,    39,
    -367,     0,  -364,     0,  -378,     0,     0,    40,     0,   155,
       0,     0,   120,   156,  -285,    11,     0,  -292,   122,     0,
    -378,  -378,   148,     0,     0,     0,     0,    15,     4,     0,
       0,     0,     0,     0,     0,     0,  -327,    23,    24,    25,
      26,     0,     0,     7,     0,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,    39,  -367,     0,  -364,     0,  -378,     0,     0,
      40,     0,   298,     0,     0,  -378,   299,  -285,    11,     0,
    -292,   122,     0,  -378,  -378,   154,     0,     0,     0,     0,
      15,     4,     0,     0,     0,     0,     0,     0,     0,  -327,
      23,    24,    25,    26,     0,     0,     7,     0,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    37,     0,     0,     0,    39,  -367,     0,  -364,     0,
    -378,     0,     0,   124,     0,   305,     0,     0,  -378,   306,
    -285,    11,     0,  -292,   122,     0,  -378,  -378,   102,     0,
       0,     0,     0,    15,     4,     0,     0,     0,     0,     0,
       0,     0,  -327,    23,    24,    25,    26,     0,     0,     7,
    -361,    29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    37,     0,     0,     0,    39,  -367,
       0,  -364,     0,  -378,     0,     0,   124,     0,   103,     0,
       0,     0,   104,  -285,    11,  -361,  -292,   105,     0,     0,
       0,   102,     0,     0,     0,  -361,    15,     4,     0,     0,
       0,     0,     0,     0,     0,  -327,    23,    24,    25,    26,
       0,  -361,     7,     0,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    37,     0,     0,
       0,    39,     0,  -361,     0,  -361,     0,     0,     0,    40,
       0,   112,     0,     0,  -378,   104,  -285,    11,     0,  -292,
     105,     0,  -378,  -378,   102,     0,     0,     0,     0,    15,
       4,     0,     0,     0,     0,     0,     0,     0,  -327,    23,
      24,    25,    26,     0,     0,     7,     0,    29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      37,     0,     0,     0,    39,  -367,     0,  -364,     0,  -378,
       0,     0,    40,     0,   103,     0,     0,   164,   104,  -285,
      11,     0,  -292,   105,     0,  -378,  -378,   102,     0,     0,
       0,     0,    15,     4,     0,     0,     0,     0,     0,     0,
       0,  -327,    23,    24,    25,    26,     0,     0,     7,     0,
      29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    37,     0,     0,     0,    39,  -367,     0,
    -364,     0,  -378,     0,     0,    40,     0,   103,     0,     0,
       9,   104,  -278,    11,     0,  -292,   105,     0,  -378,  -378,
     102,     0,     0,     0,     0,    15,     4,     0,     0,     0,
       0,     0,     0,     0,  -327,    23,    24,    25,    26,     0,
       0,     7,     0,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    37,     0,     0,     0,
      39,  -367,     0,  -364,     0,  -378,     0,     0,    40,     0,
     103,     0,     0,  -378,   558,  -285,    11,     0,  -292,   105,
       0,  -378,  -378,   154,     0,     0,     0,     0,    15,     4,
       0,     0,     0,     0,     0,     0,     0,  -327,    23,    24,
      25,    26,     0,     0,     7,     0,    29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    37,
       0,     0,     0,    39,  -367,     0,  -364,     0,  -378,     0,
       0,    40,     0,   155,     0,     0,   424,   156,  -285,    11,
       0,  -292,   122,     0,  -378,  -378,   148,     0,     0,     0,
       0,    15,     4,     0,     0,     0,     0,     0,     0,     0,
    -327,    23,    24,    25,    26,     0,     0,     7,     0,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    37,     0,     0,     0,    39,  -367,     0,  -364,
       0,  -378,     0,     0,    40,     0,   149,     0,     0,  -378,
     150,  -285,    11,     0,  -292,   122,     0,  -378,  -378,   154,
       0,     0,     0,     0,    15,     4,     0,     0,     0,     0,
       0,     0,     0,  -327,    23,    24,    25,    26,     0,     0,
       7,     0,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    37,     0,     0,     0,    39,
    -367,     0,  -364,     0,  -378,     0,     0,    40,     0,   775,
       0,     0,   424,   156,  -285,    11,     0,  -292,   122,     0,
    -378,  -378,   148,     0,     0,     0,     0,    15,     4,     0,
       0,     0,     0,     0,     0,     0,  -327,    23,    24,    25,
      26,     0,     0,     7,     0,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,    39,  -367,     0,  -364,     0,  -378,     0,     0,
      40,     0,   149,     0,     0,   164,   150,  -285,    11,     0,
    -292,   122,     0,  -378,  -378,   148,     0,     0,     0,     0,
      15,     4,     0,     0,     0,     0,     0,     0,     0,  -327,
      23,    24,    25,    26,     0,     0,     7,     0,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    37,     0,     0,     0,    39,  -367,     0,  -364,     0,
    -378,     0,     0,    40,     0,   298,     0,     0,   663,   299,
    -285,    11,     0,  -292,   122,     0,  -378,  -378,   102,     0,
       0,     0,     0,    15,     4,     0,     0,     0,     0,     0,
       0,     0,  -327,    23,    24,    25,    26,     0,     0,     7,
       0,    29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    37,     0,     0,     0,    39,  -367,
       0,  -364,     0,  -378,     0,     0,   124,     0,   103,   102,
       0,     0,   104,  -285,    11,     4,  -292,   105,     0,     0,
       0,     0,     0,  -327,     0,   352,    15,     0,     0,     0,
       7,     0,     0,     0,     0,     0,    23,    24,    25,    26,
       0,     0,     0,     0,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    37,     0,   103,
     102,    39,     0,   104,  -285,    11,     4,  -292,   105,    40,
       0,     0,     0,     0,  -327,     0,   358,    15,     0,     0,
       0,     7,     0,     0,     0,     0,     0,    23,    24,    25,
      26,     0,     0,     0,     0,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,     0,
     103,   102,    39,     0,   104,  -285,    11,     4,  -292,   105,
      40,     0,     0,     0,     0,  -327,     0,   102,    15,     0,
       0,     0,   355,     4,     0,     0,     0,     0,    23,    24,
      25,    26,     0,     0,     0,     0,    29,     0,     7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    37,
       0,   103,     0,    39,     0,   104,  -285,    11,     0,  -292,
     105,    40,     0,     0,     0,     0,     0,   103,     0,    15,
       0,   104,  -285,    11,     0,     0,   105,     0,     0,    23,
      24,    25,    26,     0,     0,    15,     0,    29,     0,     0,
       0,     0,     0,     0,     0,    23,    24,    25,    26,     0,
      37,     0,     0,    29,    39,     0,     0,     0,     0,     0,
       0,     0,    40,     0,     0,     0,    37,     0,     0,     0,
      39,     0,     0,     0,     0,     0,     0,     0,    40
};

static const yytype_int16 yycheck[] =
{
       1,   189,    22,     9,    40,   254,   255,   538,     1,   177,
       7,   179,   170,   229,   257,   272,    33,    28,   494,    20,
     896,   121,   121,     1,   373,    11,    10,    10,   724,    15,
     121,   606,    10,   330,    35,   601,   333,   549,   604,    40,
     958,     4,   471,   618,    22,   298,     4,   737,   305,   896,
      28,     4,   899,    39,     4,   172,   446,   156,     4,   957,
     326,   597,   222,   329,   600,   874,    18,    54,     4,     4,
     286,    58,     4,     4,    54,    62,   466,    57,    58,    54,
     611,     4,    59,    58,   244,    54,    59,    63,   124,    58,
      57,    54,    57,    54,     4,    58,    54,    64,    57,    57,
     101,    54,    78,    76,    57,    57,     4,    57,    54,    87,
      57,   112,    71,    78,    64,    64,    89,    54,   119,    80,
      54,    57,    57,   124,   284,    57,    63,    58,   115,    64,
     141,   108,   941,    64,    57,   115,    88,   121,   121,     4,
     115,   301,  1040,   121,   834,   720,   115,   576,   308,   116,
      61,   251,   115,    63,   112,   721,   102,   109,   164,   112,
     251,   113,   163,   141,   113,   265,   113,   168,   597,   170,
     171,   600,   150,   273,   273,   418,   112,   713,   156,   436,
     112,   159,   273,   879,   574,   163,   882,   193,   700,   195,
      88,   197,     4,   199,   491,    64,   412,     4,    63,   299,
     111,    59,    71,  1121,   457,     4,   306,   306,   299,   326,
    1108,   109,   329,    60,     4,   306,     1,   483,    57,  1066,
       4,    18,    58,  1099,    82,    10,    62,    60,     0,   804,
      76,   217,   218,   219,   220,    71,    57,    22,   587,   108,
      86,   807,   754,    28,    65,    66,    70,    93,   259,    88,
    1148,    63,  1150,   254,   255,   272,    63,    57,    57,    58,
     107,    58,    64,   264,    64,    62,   742,    57,    58,   745,
     109,   272,    62,    57,   107,    64,   254,   255,   114,    58,
      54,   259,    62,   319,   713,   714,   715,   544,    88,   273,
     273,   112,    18,    18,   272,   273,   297,   298,    59,   556,
      18,    64,    64,   304,   305,   463,   108,    64,    88,   109,
     311,    25,    26,    18,    75,    77,   532,  1013,    64,   108,
      64,   299,    96,    97,   621,   425,   425,   305,   306,   313,
     313,   588,    58,    64,    59,   313,   121,    10,   595,   340,
     583,    59,   343,   349,    58,   108,   352,    61,   354,   355,
       4,   348,   358,    58,   570,    64,   141,    71,   355,   608,
      64,   610,   108,    54,   108,   150,   483,   484,   485,    54,
     586,   156,   373,    87,    54,   591,   534,   108,   163,    56,
      59,   912,    62,   369,   401,   371,    64,    60,    56,    62,
      59,    59,   393,    70,    62,   109,   397,   111,   409,   108,
      91,    70,    88,    82,     5,     6,    91,     8,    76,    82,
      83,    84,    85,   670,    91,   573,   673,    94,   424,    96,
      97,    89,   423,   109,    76,    62,    56,   670,   644,    59,
      62,   409,    33,    70,   107,    64,    64,    89,   529,    40,
     457,    64,    71,   534,    76,   446,    76,   425,    77,    77,
     451,   667,    59,   454,    77,    59,   457,    89,   436,    89,
      18,    19,   463,    70,   680,   466,    70,   635,   656,   254,
     255,   472,   473,    54,   259,    54,   567,    54,    58,   472,
     481,    62,    62,    70,    63,    62,   702,   272,   273,    54,
     706,    71,    54,     4,   472,   496,    58,    62,    18,    54,
      54,    63,   103,    54,    54,    25,    26,   508,    63,    63,
     759,   112,   761,    63,   299,    58,    54,    54,   119,    62,
     305,   306,   123,   124,  1055,    62,    58,    58,   313,    58,
      58,    62,    64,   534,    59,    64,    64,    57,    58,    64,
      60,    61,    62,    64,    56,    65,    66,   548,   149,    70,
      62,    71,    58,    56,   155,    56,    56,  1088,    64,    62,
     580,    62,    62,   583,   565,    56,   544,    87,    56,    56,
     105,    62,   573,   574,    62,    62,    58,   765,   556,    59,
      59,    63,    56,    62,    64,    62,   587,   107,   108,   109,
     110,   111,   112,    89,    58,    59,    92,    93,   756,    75,
      10,    77,   580,   771,    59,   583,    59,   608,    58,   610,
     588,    18,    22,   614,    58,    59,    58,   595,    28,   620,
     110,   222,   108,   872,   409,    70,    71,    57,    25,    26,
     608,    59,   610,   639,    59,   671,   108,    59,   362,   363,
     425,   215,   216,   244,    70,    63,    59,    63,    56,    58,
      62,   436,   653,    59,    71,     4,   257,    54,    63,   660,
     661,    58,   663,   264,    61,   756,    54,   108,    63,    63,
      63,   272,    63,    26,    71,    64,    63,   697,   279,    58,
      70,   930,    64,   284,   116,   934,   935,   472,    63,    93,
      87,   106,   670,    62,    64,   673,   297,   298,   699,    59,
     301,    23,    70,   304,   305,    24,    26,   308,    62,    71,
     711,   121,   109,    61,   111,   111,    57,    61,    70,   697,
      71,    71,   700,     4,    71,    71,    71,   111,   916,    71,
      54,   141,    71,    71,   112,     4,   337,    72,    72,    54,
     150,    10,    63,    56,   108,    63,   156,    64,    62,    89,
      56,    54,  1001,  1002,    62,   756,  1005,    59,   759,   544,
     761,    59,    59,    64,    64,   108,     4,    59,    18,  1018,
       4,   556,     4,   779,   775,    25,    26,    26,    64,    63,
      58,   759,    59,   761,    80,    54,     4,    58,     4,    58,
    1039,    60,    72,    62,    63,   580,    63,    54,   583,    43,
     401,    75,    71,   588,   992,    64,    64,     4,    58,    56,
     595,    61,    62,    82,    83,    84,    85,   418,   106,    56,
      56,    71,   423,   608,    54,   610,    57,   116,    71,    60,
      61,   116,    71,    56,    65,    66,    71,    87,   107,    58,
      62,    56,    71,    71,    71,   114,   115,    71,    54,   259,
      71,    64,    54,   454,    26,    63,   457,    56,    70,   109,
      56,   111,   272,   273,    59,    70,    64,    57,    56,     4,
      64,   872,    59,    59,    63,    10,   107,   108,   109,   110,
     111,   112,    56,    18,    62,   670,    56,    58,   673,   299,
      25,    72,    54,    56,   872,   305,   306,    63,    63,    63,
      56,    56,    62,   313,    54,    63,    59,    56,    62,    70,
      54,    70,   697,    43,    57,   700,    64,  1166,    70,    54,
    1169,   522,    57,    58,    59,    60,    57,    62,    63,   930,
      65,    66,    71,   934,   935,   536,   113,    72,    57,    57,
      54,    76,    70,   544,    54,    56,    59,    82,    83,    84,
      85,    59,   930,    59,    89,    90,   934,   935,    63,    62,
     102,    19,    54,    64,    26,    72,    56,    56,   103,    64,
     108,    71,   107,   108,   759,   110,   761,   112,    56,    63,
     115,   116,   583,    54,    54,    59,    59,    64,     4,   116,
      62,    70,    88,   994,     4,    56,    63,    62,    64,   409,
    1001,  1002,    59,    62,  1005,    54,    70,    70,    56,     4,
      54,  1012,    94,    99,    54,   425,    57,  1018,    54,   112,
      70,    54,    56,  1001,  1002,    70,   436,  1005,    54,    64,
      77,    59,    71,    56,    56,    56,    56,    54,  1039,    70,
    1018,    59,    72,  1044,    59,    64,    57,    54,   108,     4,
      54,    57,  1053,     4,    62,    10,    70,    54,    56,    64,
       4,  1039,    54,    18,    54,    56,   108,   113,    77,   670,
      25,    59,    57,    57,    57,   113,    57,    77,    56,    54,
      57,   113,    94,    57,   113,    88,    56,   872,    56,    71,
      59,    64,    57,    64,    56,    59,   697,    63,   699,    54,
      59,    56,    57,    58,    59,    60,    64,    62,    63,    64,
      65,    66,    54,    54,    64,    54,    88,    72,    64,   113,
      77,    59,    56,    59,    77,    56,    59,    82,    83,    84,
      85,    58,    54,    57,   544,    90,    91,    54,    54,    94,
      59,    96,    97,    54,    56,   930,   556,   102,   103,   934,
     935,   112,   107,   108,    77,   110,   108,   112,     4,   113,
     115,    54,    63,    18,   113,  1166,    64,    88,  1169,    64,
     580,    57,    57,   583,   775,    56,    54,    56,   588,    70,
      56,    56,    56,    54,    18,   595,    56,    71,  1166,     4,
      56,  1169,    54,    56,     4,    10,    64,    64,    59,    56,
      77,    54,    56,    18,    56,    56,    70,    57,    64,   113,
      25,    54,    60,    57,    59,    56,  1001,  1002,   108,   113,
    1005,    59,   114,    54,    97,   113,    56,    64,    70,    18,
      70,    57,    71,  1018,    59,    59,    64,    56,    56,    54,
      56,    70,    57,    58,    59,    60,    60,    62,    63,    64,
      65,    66,     4,    56,  1039,    70,    57,    72,    10,    70,
     670,    76,    56,   673,    61,    56,    18,    82,    83,    84,
      85,    54,    59,    25,    89,    90,    56,    59,    70,    56,
       4,    59,    70,    62,    59,    56,    62,   697,   103,    62,
     700,    63,   107,   108,    64,   110,   897,   112,    54,    54,
     115,   116,    54,    56,   113,    57,    58,    59,    60,    54,
      62,    63,    64,    65,    66,    61,    77,   113,    70,    56,
      72,    62,    62,   113,    76,    59,    57,   113,    63,     4,
      82,    83,    84,    85,    64,    64,     4,    89,    90,    58,
      82,    58,    10,    56,    64,    57,    54,   113,   108,    56,
      18,   103,    20,    58,    56,   107,   108,    25,   110,    59,
     112,    64,   113,   115,   116,    63,    63,    57,   107,    64,
      64,    64,    59,    59,    70,    63,    56,    56,    63,    63,
     116,  1166,    64,   116,  1169,   113,    54,   113,    56,    57,
      58,    59,    60,    70,    62,    63,    64,    65,    66,    67,
      54,    69,    62,    70,    72,    73,    74,   113,    76,    71,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    63,
      59,    89,    90,    64,    92,    93,    59,    95,    54,    58,
      98,     4,   100,   101,   102,   103,   104,     4,   116,   107,
     108,   113,   110,    10,   112,    77,    56,   115,   107,    56,
      59,    18,   108,    20,    58,    75,    43,    59,    25,   472,
     783,   846,   571,  1099,  1099,   685,   889,  1035,  1067,   896,
    1067,  1040,   957,   956,  1068,  1109,    65,   576,   343,  1155,
      65,   756,   715,   485,   198,   212,   211,    54,   347,    29,
      57,    58,    59,    60,  1087,    62,    63,    64,    65,    66,
      67,    -1,    69,    -1,    -1,    72,    73,    74,    -1,    76,
     565,    78,    79,    80,    81,    82,    83,    84,    85,    86,
     851,    -1,    89,    90,    -1,    92,    93,    94,    95,    -1,
      -1,    98,     4,   100,   101,   102,   103,   104,    10,    -1,
     107,   108,    -1,   110,    -1,   112,    18,    -1,   115,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,    65,    66,    67,    -1,    69,    -1,    -1,
      72,    73,    74,    75,    -1,    -1,    78,    79,    80,    81,
      82,    83,    84,    85,    -1,    -1,    -1,    -1,    90,    -1,
       4,    -1,    94,    -1,    96,    97,    10,    -1,   100,   101,
     102,   103,   104,    -1,    18,   107,   108,    -1,   110,    -1,
     112,    25,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    -1,    69,    -1,    -1,    72,    73,
      74,    75,    -1,    -1,    78,    79,    80,    81,    82,    83,
      84,    85,    -1,    -1,    -1,    -1,    90,    91,     4,    -1,
      94,    -1,    -1,    -1,    10,    -1,   100,   101,   102,   103,
     104,    -1,    18,   107,   108,    -1,   110,    -1,   112,    25,
      -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,    65,
      66,    67,    -1,    69,    -1,    -1,    72,    73,    74,    75,
      -1,    -1,    78,    79,    80,    81,    82,    83,    84,    85,
      -1,    -1,    -1,    -1,    90,    -1,     4,    -1,    94,    -1,
      -1,    -1,    10,    -1,   100,   101,   102,   103,   104,    -1,
      18,   107,   108,    -1,   110,    -1,   112,    25,    -1,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    57,
      58,    59,    60,    -1,    62,    63,    64,    65,    66,    67,
      -1,    69,    -1,    -1,    72,    73,    74,    75,    -1,    -1,
      78,    79,    80,    81,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    90,    -1,     4,    -1,    94,    -1,    -1,    -1,
      10,    -1,   100,   101,   102,   103,   104,    -1,    18,   107,
     108,    -1,   110,    -1,   112,    25,    -1,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,    59,
      60,    -1,    62,    63,    64,    65,    66,    67,    -1,    69,
      -1,    -1,    72,    73,    74,    75,    -1,    -1,    78,    79,
      80,    81,    82,    83,    84,    85,    -1,    -1,    -1,    -1,
      90,    -1,     4,    -1,    -1,    -1,    -1,    -1,    10,    -1,
     100,   101,   102,   103,   104,    -1,    18,   107,   108,    -1,
     110,    -1,   112,    25,    26,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    -1,    65,    66,     4,    -1,    -1,    -1,    71,
      72,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      82,    83,    84,    85,    -1,    87,    25,    26,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    -1,    -1,    -1,   107,   108,   109,   110,   111,
     112,    -1,    -1,   115,    -1,    54,    -1,    -1,    57,    58,
      59,    60,    61,    62,    63,    -1,    65,    66,     4,    -1,
      -1,    -1,    71,    72,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    82,    83,    84,    85,    -1,    87,    25,
      26,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,
     109,   110,   111,   112,    -1,    -1,   115,    -1,    54,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    -1,    65,
      66,     4,    -1,    -1,    -1,    71,    72,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    82,    83,    84,    85,
      -1,    87,    25,    -1,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,
      -1,   107,   108,   109,   110,   111,   112,    -1,    -1,   115,
      -1,    54,    -1,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,    65,    66,     4,    -1,    -1,    -1,    -1,    72,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    82,
      83,    84,    85,    -1,    -1,    25,    -1,    90,    91,    -1,
      -1,    94,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
     103,    -1,    -1,    -1,   107,   108,    -1,   110,    -1,   112,
      -1,    -1,   115,    -1,    54,    -1,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    65,    66,     4,    -1,    -1,
      -1,    -1,    72,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    82,    83,    84,    85,    -1,    -1,    25,    -1,
      90,    91,    -1,    -1,    94,    -1,    96,    97,    -1,    -1,
      -1,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,    -1,
     110,    -1,   112,    -1,    -1,   115,    -1,    54,    -1,    56,
      57,    58,    59,    60,    -1,    62,    63,    -1,    65,    66,
       4,    -1,    -1,    -1,    -1,    72,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    82,    83,    84,    85,    -1,
      -1,    25,    -1,    90,    91,    -1,    -1,    94,    -1,    96,
      97,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,
     107,   108,    -1,   110,    -1,   112,    -1,    -1,   115,    -1,
      54,    -1,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,     4,    -1,    -1,    -1,    -1,    72,    10,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    18,    82,    83,
      84,    85,    -1,    -1,    25,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,
      -1,    -1,    -1,   107,   108,    -1,   110,    -1,   112,    -1,
      -1,   115,    -1,    54,    -1,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    65,    66,     4,    -1,    -1,    -1,
      -1,    72,    10,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      18,    82,    83,    84,    85,    -1,    -1,    25,    89,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   103,    -1,    -1,    -1,   107,   108,    -1,   110,
      -1,   112,    -1,    -1,   115,    -1,    54,    -1,    56,    57,
      58,    59,    60,    -1,    62,    63,    64,    65,    66,     4,
      -1,    -1,    -1,    -1,    72,    10,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    18,    82,    83,    84,    85,    -1,    -1,
      25,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,   107,
     108,    -1,   110,    -1,   112,    -1,    -1,   115,    -1,    54,
      -1,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      65,    66,     4,    -1,    -1,    -1,    -1,    72,    10,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    18,    82,    83,    84,
      85,    -1,    -1,    25,    89,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
      -1,    -1,   107,   108,    -1,   110,    -1,   112,    -1,    -1,
     115,    -1,    54,    -1,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,    65,    66,     4,    -1,    -1,    -1,    -1,
      72,    10,    -1,    -1,    76,    -1,    -1,    -1,    -1,    18,
      82,    83,    84,    85,    -1,    -1,    25,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    -1,    -1,    -1,   107,   108,    -1,   110,    -1,
     112,    -1,    -1,   115,    -1,    54,    -1,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    65,    66,     4,    -1,
      -1,    -1,    -1,    72,    10,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    18,    82,    83,    84,    85,    -1,    -1,    25,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,
      -1,   110,    -1,   112,    -1,    -1,   115,    -1,    54,    -1,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,    65,
      66,     4,    -1,    -1,    -1,    -1,    72,    10,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    18,    82,    83,    84,    85,
      -1,    -1,    25,    89,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,
      -1,   107,   108,    -1,   110,    -1,   112,    -1,    -1,   115,
      -1,    54,    -1,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,    65,    66,     4,    -1,    -1,    -1,    -1,    72,
      10,    -1,    -1,    76,    -1,    -1,    -1,    -1,    18,    82,
      83,    84,    85,    -1,    -1,    25,    89,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     103,    -1,    -1,    -1,   107,   108,    -1,   110,    -1,   112,
      -1,    -1,   115,    -1,    54,    -1,    56,    57,    58,    59,
      60,    -1,    62,    63,    64,    65,    66,     4,    -1,    -1,
      -1,    -1,    72,    10,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    18,    82,    83,    84,    85,    -1,    -1,    25,    89,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,    -1,
     110,    -1,   112,    -1,    -1,   115,    -1,    54,    -1,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    65,    66,
       4,    -1,    -1,    -1,    -1,    72,    10,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    18,    82,    83,    84,    85,    -1,
      -1,    25,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,
     107,   108,    -1,   110,    -1,   112,    -1,    -1,   115,    -1,
      54,    -1,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,     4,    -1,    -1,    -1,    -1,    72,    10,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    18,    82,    83,
      84,    85,    -1,    -1,    25,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,
      -1,    -1,    -1,   107,   108,    -1,   110,    -1,   112,    -1,
      -1,   115,    -1,    54,    -1,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    65,    66,     4,    -1,    -1,    -1,
      -1,    72,    10,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      18,    82,    83,    84,    85,    -1,    -1,    25,    89,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   103,    -1,    -1,    -1,   107,   108,    -1,   110,
      -1,   112,    -1,    -1,   115,    -1,    54,    -1,    56,    57,
      58,    59,    60,    -1,    62,    63,    64,    65,    66,     4,
      -1,    -1,    -1,    -1,    72,    10,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    18,    82,    83,    84,    85,    -1,    -1,
      25,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,   107,
     108,    -1,   110,    -1,   112,    -1,    -1,   115,    -1,    54,
      -1,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      65,    66,     4,    -1,    -1,    -1,    -1,    72,    10,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    18,    82,    83,    84,
      85,    -1,    -1,    25,    89,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
      -1,    -1,   107,   108,    -1,   110,    -1,   112,    -1,    -1,
     115,    -1,    54,    -1,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,    65,    66,     4,    -1,    -1,    -1,    -1,
      72,    10,    -1,    -1,    76,    -1,    -1,    -1,    -1,    18,
      82,    83,    84,    85,    -1,    -1,    25,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    -1,    -1,    -1,   107,   108,    -1,   110,    -1,
     112,    -1,    -1,   115,    -1,    54,    -1,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    65,    66,     4,    -1,
      -1,    -1,    -1,    72,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    82,    83,    84,    85,    -1,    -1,    25,
      -1,    90,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,
      -1,   110,    -1,   112,    -1,    -1,   115,    -1,    54,    -1,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    65,
      66,     4,    -1,    -1,    -1,    -1,    72,    10,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    18,    82,    83,    84,    85,
      -1,    -1,    25,    89,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,
      -1,   107,   108,    -1,   110,    -1,   112,    -1,    -1,   115,
      -1,    54,    -1,    -1,    57,    58,    59,    60,    -1,    62,
      63,    64,    65,    66,    -1,    -1,    -1,    70,    -1,    72,
       4,    -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,    82,
      83,    84,    85,    -1,    18,    88,    -1,    90,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     103,    -1,    -1,    -1,   107,   108,    -1,   110,    -1,   112,
      -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,     4,    -1,    -1,    -1,    -1,    72,    10,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    18,    82,    83,
      84,    85,    -1,    -1,    25,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,
      -1,    -1,    -1,   107,   108,    -1,   110,    -1,   112,   113,
      -1,   115,    -1,    54,    -1,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    65,    66,     4,    -1,    -1,    -1,
      -1,    72,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    82,    83,    84,    85,    -1,    -1,    25,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,   103,    -1,    -1,    -1,   107,   108,    -1,   110,
      -1,   112,    -1,    -1,   115,    -1,    54,    -1,    -1,    57,
      58,    59,    60,    -1,    62,    63,    64,    65,    66,     4,
      -1,    -1,    70,    -1,    72,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    82,    83,    84,    85,    -1,    -1,
      25,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,   107,
     108,    -1,   110,    -1,   112,    -1,    -1,   115,    -1,    54,
      -1,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      65,    66,     4,    -1,    -1,    -1,    -1,    72,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    82,    83,    84,
      85,    -1,    -1,    25,    26,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
      -1,    -1,   107,   108,    -1,   110,    -1,   112,    -1,    -1,
     115,    -1,    54,    -1,    -1,    -1,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,     4,    -1,    -1,    -1,    71,
      72,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      82,    83,    84,    85,    -1,    87,    25,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    -1,    -1,    -1,   107,   108,   109,   110,   111,
      -1,    -1,    -1,   115,    -1,    54,    -1,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    65,    66,     4,    -1,
      -1,    -1,    -1,    72,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    82,    83,    84,    85,    -1,    -1,    25,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,
      -1,   110,    -1,   112,    -1,    -1,   115,    -1,    54,    -1,
      -1,    57,    58,    59,    60,    -1,    62,    63,    -1,    65,
      66,    -1,    -1,    -1,    70,    -1,    72,     4,    -1,    -1,
      -1,    -1,    -1,    10,    -1,    -1,    82,    83,    84,    85,
      -1,    18,    88,    -1,    90,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,
      -1,   107,   108,    -1,   110,    -1,   112,    -1,    -1,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    65,    66,
       4,    -1,    -1,    -1,    -1,    72,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    82,    83,    84,    85,    -1,
      -1,    25,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,
     107,   108,    -1,   110,    -1,   112,    -1,    -1,   115,    -1,
      54,    -1,    -1,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,     4,    -1,    -1,    70,    -1,    72,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    82,    83,
      84,    85,    -1,    -1,    25,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,
      -1,    -1,    -1,   107,   108,    -1,   110,    -1,   112,    -1,
      -1,   115,    -1,    54,    -1,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    65,    66,     4,    -1,    -1,    -1,
      -1,    72,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    82,    83,    84,    85,    -1,    -1,    25,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   103,    -1,    -1,    -1,   107,   108,    -1,   110,
      -1,   112,    -1,    -1,   115,    -1,    54,    -1,    56,    57,
      58,    59,    60,    -1,    62,    63,    64,    65,    66,     4,
      -1,    -1,    -1,    -1,    72,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    82,    83,    84,    85,    -1,    -1,
      25,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,   107,
     108,    -1,   110,    -1,   112,    -1,    -1,   115,    -1,    54,
      -1,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      65,    66,     4,    -1,    -1,    -1,    -1,    72,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    82,    83,    84,
      85,    -1,    -1,    25,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
      -1,    -1,   107,   108,    -1,   110,    -1,   112,    -1,    -1,
     115,    -1,    54,    -1,    -1,    57,    58,    59,    60,    -1,
      62,    63,    -1,    65,    66,     4,    -1,    -1,    70,    -1,
      72,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      82,    83,    84,    85,    -1,    -1,    25,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    -1,    -1,    -1,   107,   108,    -1,   110,    -1,
     112,    -1,    -1,   115,    -1,    54,    -1,    -1,    57,    58,
      59,    60,    -1,    62,    63,    -1,    65,    66,     4,    -1,
      -1,    -1,    71,    72,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    82,    83,    84,    85,    -1,    -1,    25,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,
      -1,   110,    -1,   112,    -1,    -1,   115,    -1,    54,    -1,
      -1,    57,    58,    59,    60,    -1,    62,    63,    -1,    65,
      66,    -1,    -1,    -1,    -1,    -1,    72,     4,    -1,    75,
      -1,    -1,    -1,    10,    -1,    -1,    82,    83,    84,    85,
      -1,    18,    19,    -1,    90,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,
      -1,   107,   108,    -1,   110,    -1,   112,    -1,    -1,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      57,    58,    59,    60,    -1,    62,    63,    -1,    65,    66,
       4,    -1,    -1,    -1,    -1,    72,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    82,    83,    84,    85,    -1,
      -1,    25,    26,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,
     107,   108,    -1,   110,    -1,   112,    -1,    -1,   115,    -1,
      54,    -1,    -1,    -1,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,     4,    -1,    -1,    -1,    71,    72,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    82,    83,
      84,    85,    -1,    87,    25,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,
      -1,    -1,    -1,   107,    -1,   109,   110,   111,    -1,    -1,
      -1,   115,    -1,    54,    -1,    -1,    57,    58,    59,    60,
      -1,    62,    63,    -1,    65,    66,     4,    -1,    -1,    -1,
      -1,    72,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    82,    83,    84,    85,    -1,    -1,    25,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,   103,    -1,    -1,    -1,   107,   108,    -1,   110,
      -1,   112,    -1,    -1,   115,    -1,    54,    -1,    -1,    57,
      58,    59,    60,    -1,    62,    63,    -1,    65,    66,     4,
      -1,    -1,    -1,    -1,    72,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    82,    83,    84,    85,    -1,    -1,
      25,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,   103,    -1,    -1,    -1,   107,
     108,    -1,   110,    -1,   112,    -1,    -1,   115,    -1,    54,
      -1,    -1,    57,    58,    59,    60,    -1,    62,    63,    -1,
      65,    66,     4,    -1,    -1,    -1,    -1,    72,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    82,    83,    84,
      85,    -1,    -1,    25,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,    -1,
      -1,    -1,   107,   108,    -1,   110,    -1,   112,    -1,    -1,
     115,    -1,    54,    -1,    -1,    57,    58,    59,    60,    -1,
      62,    63,    64,    65,    66,     4,    -1,    -1,    -1,    -1,
      72,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      82,    83,    84,    85,    -1,    -1,    25,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    -1,    -1,    -1,   107,   108,    -1,   110,    -1,
     112,    -1,    -1,   115,    -1,    54,    -1,    -1,    57,    58,
      59,    60,    -1,    62,    63,    64,    65,    66,     4,    -1,
      -1,    -1,    -1,    72,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    82,    83,    84,    85,    -1,    -1,    25,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,
      -1,   110,    -1,   112,    -1,    -1,   115,    -1,    54,    -1,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    65,
      66,     4,    -1,    -1,    -1,    -1,    72,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    82,    83,    84,    85,
      -1,    -1,    25,    -1,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,
      -1,   107,   108,    -1,   110,    -1,   112,    -1,    -1,   115,
      -1,    54,    -1,    -1,    57,    58,    59,    60,    -1,    62,
      63,    -1,    65,    66,     4,    -1,    -1,    70,    -1,    72,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    82,
      83,    84,    85,    -1,    -1,    25,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     103,    -1,    -1,    -1,   107,   108,    -1,   110,    -1,   112,
      -1,    -1,   115,    -1,    54,    -1,    -1,    57,    58,    59,
      60,    -1,    62,    63,    -1,    65,    66,     4,    -1,    -1,
      70,    -1,    72,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    82,    83,    84,    85,    -1,    -1,    25,    -1,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,    -1,
     110,    -1,   112,    -1,    -1,   115,    -1,    54,    -1,    -1,
      57,    58,    59,    60,    -1,    62,    63,    64,    65,    66,
       4,    -1,    -1,    -1,    -1,    72,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    82,    83,    84,    85,    -1,
      -1,    25,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,
     107,   108,    -1,   110,    -1,   112,    -1,    -1,   115,    -1,
      54,    -1,    -1,    57,    58,    59,    60,    -1,    62,    63,
      -1,    65,    66,     4,    -1,    -1,    -1,    -1,    72,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    82,    83,
      84,    85,    -1,    -1,    25,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,
      -1,    -1,    -1,   107,   108,    -1,   110,    -1,   112,   113,
      -1,   115,    -1,    54,    -1,    -1,    57,    58,    59,    60,
      -1,    62,    63,    -1,    65,    66,     4,    -1,    -1,    -1,
      -1,    72,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    82,    83,    84,    85,    -1,    -1,    25,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   103,    -1,    -1,    -1,   107,   108,    -1,   110,
      -1,   112,   113,    -1,   115,    -1,    54,    -1,    -1,    57,
      58,    59,    60,    -1,    62,    63,    -1,    65,    66,     4,
      -1,    -1,    -1,    -1,    72,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    82,    83,    84,    85,    -1,    -1,
      25,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,   107,
     108,    -1,   110,    -1,   112,    -1,    -1,   115,    -1,    54,
      -1,    -1,    57,    58,    59,    60,    -1,    62,    63,    -1,
      65,    66,     4,    -1,    -1,    -1,    -1,    72,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    82,    83,    84,
      85,    -1,    -1,    25,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
      -1,    -1,   107,   108,    -1,   110,    -1,   112,    -1,    -1,
     115,    -1,    54,    -1,    -1,    57,    58,    59,    60,    -1,
      62,    63,    -1,    65,    66,     4,    -1,    -1,    -1,    -1,
      72,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      82,    83,    84,    85,    -1,    -1,    25,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    -1,    -1,    -1,   107,   108,    -1,   110,    -1,
     112,    -1,    -1,   115,    -1,    54,    -1,    -1,    57,    58,
      59,    60,    -1,    62,    63,    -1,    65,    66,     4,    -1,
      -1,    -1,    -1,    72,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    82,    83,    84,    85,    -1,    -1,    25,
      26,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,
      -1,   110,    -1,   112,    -1,    -1,   115,    -1,    54,    -1,
      -1,    -1,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,     4,    -1,    -1,    -1,    71,    72,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    82,    83,    84,    85,
      -1,    87,    25,    -1,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,
      -1,   107,    -1,   109,    -1,   111,    -1,    -1,    -1,   115,
      -1,    54,    -1,    -1,    57,    58,    59,    60,    -1,    62,
      63,    -1,    65,    66,     4,    -1,    -1,    -1,    -1,    72,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    82,
      83,    84,    85,    -1,    -1,    25,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     103,    -1,    -1,    -1,   107,   108,    -1,   110,    -1,   112,
      -1,    -1,   115,    -1,    54,    -1,    -1,    57,    58,    59,
      60,    -1,    62,    63,    -1,    65,    66,     4,    -1,    -1,
      -1,    -1,    72,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    82,    83,    84,    85,    -1,    -1,    25,    -1,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,    -1,
     110,    -1,   112,    -1,    -1,   115,    -1,    54,    -1,    -1,
      57,    58,    59,    60,    -1,    62,    63,    -1,    65,    66,
       4,    -1,    -1,    -1,    -1,    72,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    82,    83,    84,    85,    -1,
      -1,    25,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,
     107,   108,    -1,   110,    -1,   112,    -1,    -1,   115,    -1,
      54,    -1,    -1,    57,    58,    59,    60,    -1,    62,    63,
      -1,    65,    66,     4,    -1,    -1,    -1,    -1,    72,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    82,    83,
      84,    85,    -1,    -1,    25,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,
      -1,    -1,    -1,   107,   108,    -1,   110,    -1,   112,    -1,
      -1,   115,    -1,    54,    -1,    -1,    57,    58,    59,    60,
      -1,    62,    63,    -1,    65,    66,     4,    -1,    -1,    -1,
      -1,    72,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    82,    83,    84,    85,    -1,    -1,    25,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   103,    -1,    -1,    -1,   107,   108,    -1,   110,
      -1,   112,    -1,    -1,   115,    -1,    54,    -1,    -1,    57,
      58,    59,    60,    -1,    62,    63,    -1,    65,    66,     4,
      -1,    -1,    -1,    -1,    72,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    82,    83,    84,    85,    -1,    -1,
      25,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,   107,
     108,    -1,   110,    -1,   112,    -1,    -1,   115,    -1,    54,
      -1,    -1,    57,    58,    59,    60,    -1,    62,    63,    -1,
      65,    66,     4,    -1,    -1,    -1,    -1,    72,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    82,    83,    84,
      85,    -1,    -1,    25,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
      -1,    -1,   107,   108,    -1,   110,    -1,   112,    -1,    -1,
     115,    -1,    54,    -1,    -1,    57,    58,    59,    60,    -1,
      62,    63,    -1,    65,    66,     4,    -1,    -1,    -1,    -1,
      72,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      82,    83,    84,    85,    -1,    -1,    25,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    -1,    -1,    -1,   107,   108,    -1,   110,    -1,
     112,    -1,    -1,   115,    -1,    54,    -1,    -1,    57,    58,
      59,    60,    -1,    62,    63,    -1,    65,    66,     4,    -1,
      -1,    -1,    -1,    72,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    82,    83,    84,    85,    -1,    -1,    25,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,
      -1,   110,    -1,   112,    -1,    -1,   115,    -1,    54,     4,
      -1,    -1,    58,    59,    60,    10,    62,    63,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    71,    72,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    82,    83,    84,    85,
      -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    54,
       4,   107,    -1,    58,    59,    60,    10,    62,    63,   115,
      -1,    -1,    -1,    -1,    18,    -1,    71,    72,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    82,    83,    84,
      85,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
      54,     4,   107,    -1,    58,    59,    60,    10,    62,    63,
     115,    -1,    -1,    -1,    -1,    18,    -1,     4,    72,    -1,
      -1,    -1,    25,    10,    -1,    -1,    -1,    -1,    82,    83,
      84,    85,    -1,    -1,    -1,    -1,    90,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,
      -1,    54,    -1,   107,    -1,    58,    59,    60,    -1,    62,
      63,   115,    -1,    -1,    -1,    -1,    -1,    54,    -1,    72,
      -1,    58,    59,    60,    -1,    -1,    63,    -1,    -1,    82,
      83,    84,    85,    -1,    -1,    72,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    83,    84,    85,    -1,
     103,    -1,    -1,    90,   107,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   115,    -1,    -1,    -1,   103,    -1,    -1,    -1,
     107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    54,   118,     4,    10,    18,    20,    25,    54,    57,
      58,    60,    63,    67,    69,    72,    73,    74,    76,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    89,    90,
      92,    93,    95,    98,   100,   101,   102,   103,   104,   107,
     115,   119,   120,   121,   122,   123,   124,   126,   127,   128,
     129,   130,   131,   132,   133,   139,   142,   143,   144,   146,
     149,   185,   186,   187,   188,   202,   203,   204,   206,   207,
     210,   211,   213,   214,   225,   226,   227,   228,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   252,   253,
     255,   257,   258,   259,   260,   262,   268,   281,   282,   286,
       0,    70,     4,    54,    58,    63,   211,   213,   252,   258,
     211,   227,    54,    64,   211,   250,   251,   240,     4,    54,
      57,    58,    63,    65,   115,   254,   256,   261,   275,   278,
     279,   280,   281,   282,   286,   246,     4,    63,   246,    64,
      64,    89,    92,    93,    64,   136,   213,    58,     4,    54,
      58,   285,   286,     4,     4,    54,    58,   275,   286,   249,
      58,    64,     4,    70,    57,   150,   209,   211,    54,   213,
      54,    80,    54,   105,   246,    64,   208,   211,   213,   265,
      56,    76,   188,   204,    59,    58,    64,    59,    62,    18,
      58,    58,    25,    26,    58,    61,    71,    87,   109,   111,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   110,   108,    61,   111,    60,   107,    57,    65,    66,
     112,    57,    54,    58,    63,   258,   108,    59,    59,   108,
      59,    57,    60,    61,    65,    66,   107,   108,   109,   110,
     111,   112,   125,    59,    54,    63,    71,   213,    70,   211,
      54,    58,   115,    63,    70,    70,   213,    63,    76,    89,
     266,   267,    56,    62,    54,    58,    64,   213,   269,   270,
     271,    58,    54,    58,   210,   268,   279,   281,   211,    54,
      71,    58,    62,    59,    54,    63,   108,    63,    63,    63,
     275,    58,    64,     4,    63,    54,    63,    54,    54,    58,
     285,    54,    63,    54,    54,    54,    58,    26,    54,    63,
      64,    63,    58,    58,    75,   121,   205,   240,    70,    64,
     213,   283,    54,   206,   213,     4,    57,   215,   216,   217,
     218,   219,   220,   221,   222,   224,   106,    63,   116,   266,
      70,   266,    62,    64,    59,    70,   225,    23,    24,    26,
     240,    62,    71,   240,    71,    25,   240,   241,    71,   240,
     242,   243,    61,   111,   245,   245,   246,   246,   246,   112,
     246,    57,   250,    54,     4,    54,    58,    63,   287,   287,
      57,    71,    71,    61,    71,    71,    71,    71,    71,    71,
     111,   112,    72,    70,   211,   250,     4,    72,    54,    54,
       4,    54,   210,    54,    63,   205,   205,    56,   251,    89,
     275,    56,   108,    64,    64,   208,   276,   210,    63,    62,
      56,    54,    62,    54,    57,    58,   209,   211,   277,   278,
      59,    59,    75,    64,   263,    59,    64,    64,   250,     4,
     287,    59,     4,     4,    26,    64,    63,    58,     4,   137,
     138,    80,    64,   284,    54,    64,   284,    54,    59,   250,
       4,    58,    64,    72,   250,     4,    63,    59,    70,   145,
     213,    54,    43,    96,    97,   147,   148,    75,   208,    58,
      56,    64,    56,    57,    64,   221,   224,    56,   221,   222,
     224,    57,   112,   222,    54,    64,    71,   108,   201,   106,
     209,   211,   116,   213,   116,    71,   207,    71,    19,   226,
     227,   240,    71,   240,   240,   240,   240,   244,   244,   246,
     246,    56,    54,    64,   269,    71,    71,    71,    71,    58,
     213,    56,    62,   213,    71,    54,    91,   140,    54,    70,
      54,   275,    26,   287,    63,    56,    56,     4,    57,    58,
     272,   273,   274,    70,    59,    64,    57,    64,    58,   210,
      64,    56,    58,    64,    59,    63,    56,    58,   278,    56,
      62,    57,    78,    72,    63,   145,    54,    54,    63,   213,
      63,    56,    64,    63,    56,    56,    62,    54,    63,   206,
      56,    62,   145,    59,    70,    88,     4,    57,   190,   191,
     192,   193,   194,   195,   196,   197,   199,   119,    70,   213,
      70,    54,    43,   113,    64,   213,   221,   223,   224,   223,
      70,    57,    57,   222,    64,   108,    57,   219,   213,    70,
      64,   108,    54,    54,    59,    59,   213,    59,    59,    59,
      63,    56,   268,    54,    62,   287,   206,   212,   268,    19,
     141,   211,   141,    54,    64,    26,    72,   278,    56,    56,
      71,    57,   213,    57,   272,    64,    71,   108,    56,   278,
      63,    54,    59,    64,    57,   264,   265,   116,   268,    59,
      62,   287,   138,     4,    57,    58,   134,   135,   206,   145,
      70,   190,    88,     4,    56,   285,    56,    63,     4,    54,
      58,    59,    62,   287,   269,    70,    62,   287,    64,    54,
     278,    70,   200,    57,    64,   196,   199,    56,   196,   197,
     199,    57,   112,   197,    54,    64,    77,   201,    94,   205,
      54,   205,   141,    99,   151,   213,    56,    54,   201,    57,
     213,   222,    54,   112,    70,    54,    56,    70,    64,    77,
      54,   266,   240,     4,    58,    59,    71,   287,    56,    70,
      56,    70,    56,   213,    56,    72,   225,    54,   213,   213,
      64,    59,   287,   108,    59,    54,   211,   208,   278,    57,
      54,    57,   287,    78,    54,   135,    62,    70,    64,    54,
      56,     4,    54,   287,    56,    54,   287,   113,    77,   108,
     213,   113,   196,   198,   199,   198,    59,    57,    57,   197,
      64,   108,    57,   194,    77,   113,    64,    77,    88,    56,
      57,   109,   153,   154,   155,   156,   173,   175,   176,    94,
      59,    57,   220,   113,    54,    57,   219,    64,   108,   219,
      56,    56,    64,    59,   212,   205,   205,    56,   225,    58,
      64,    63,    62,    59,    56,    59,   240,    64,    54,   134,
      88,    54,    64,    54,   113,    77,    59,    56,    64,    59,
      77,    59,    56,    58,    54,   201,    57,    54,   197,    54,
     112,    59,    54,    56,   113,   108,    77,   113,     4,    54,
      58,    62,    71,   114,   166,   167,    63,    18,   152,    88,
      64,    57,    56,    64,   108,   220,    54,    56,    70,    56,
      56,    56,    54,   140,    54,    58,    18,    56,     4,    57,
     274,    71,    56,    54,    56,    64,     4,    64,    77,    59,
      56,    54,    56,    56,    56,    70,   205,    64,    57,   195,
     113,    54,    60,    57,   194,    64,   108,   194,    59,   113,
     108,    56,   148,   114,    59,     4,    54,    58,    60,    71,
      82,    83,    84,    85,   115,   157,   158,   160,   161,   162,
     163,   165,   166,   167,   168,   169,   170,   171,   172,   177,
     181,   253,   211,   113,   166,    64,   174,    54,    70,    56,
     141,    70,    18,   225,    71,    59,    59,    64,    56,    56,
      56,    56,    70,   205,    60,    70,   205,   205,    56,    64,
      77,   195,    61,    54,    56,    59,    56,    59,    70,    56,
       4,   174,   154,   173,    59,    82,   163,    59,    57,    64,
     116,   178,   180,    62,    60,   107,    62,    58,    63,    70,
      63,   113,    64,    56,    54,   225,    59,   213,    54,    56,
      59,   205,   205,    61,   205,    54,    77,   113,    56,   213,
     194,   205,    62,   113,    59,   113,    57,    63,    64,    64,
      58,    82,   164,   164,    58,    59,    64,   182,   183,     4,
     205,   154,   175,    56,   213,    59,    57,    64,    54,   213,
     141,   113,   108,    56,    56,    58,    56,    59,   166,    58,
     169,   170,   179,   113,   180,   113,   107,    63,    63,    64,
      64,    64,    56,    57,    64,   271,   141,    56,    59,    70,
      63,    60,    83,    84,    85,   159,   160,   161,   253,    59,
     116,    64,   116,     4,   154,   184,    64,   113,   183,   113,
     113,    56,    63,    56,    70,    54,    59,    62,    70,   113,
      71,    63,    59,    64,    59,    54,    75,    77,   189,    58,
     154,   116,   154,   113,   189,    77,    56,   107,    59,    56,
     108,   205,   205,    58,    75,    43,    59
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
      
/* Line 1267 of yacc.c.  */
#line 3626 "y.tab.c"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
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


#line 811 "new.y"


int yyerror(){
        printf("\n------------------SYNTAX ERROR : at line number %d -------------------------\n",lineno);
    	error = 1;
	    v=0;
        return 0;
}
 void insert(char* l,char* t,int v,char* s,int ln)
{
	struct symbtab *n;
	n=search(l);
	if(n!=NULL)
        {
              	n->value = v;
              	n->lineno = ln;
              	strcpy(n->scope,s);  
        }
        else
        {
        	struct symbtab *p;
                p=malloc(sizeof(struct symbtab));
                strcpy(p->label,l);
                strcpy(p->type,t);
                p->value = v;
                p->lineno = ln;
                strcpy(p->scope,s);
                p->next=null;
                if(size==0)
                {
		        first=p;
		        last=p;
                }
                else
                {
                        last->next=p;
                        last=p;
                }
                size++;
        }
}

void display()
{
        int i;
        struct symbtab *p;
        p=first;
        printf("\n------------------SYMBOL TABLE----------------\n");
        printf("----------------------------------------------\n");
        printf("LABEL\tTYPE\t\tVALUE\tSCOPE\tLINENO\n");
        for(i=0;i<size;i++)
        {
                printf("%s\t%s\t%d\t%s\t%d\n",p->label,p->type,p->value,p->scope,p->lineno);
                p=p->next;
        }
}
int search(char lab[])
{
        int i=0;
        struct symbtab *p,*flag;
        p=first;
        for(i=0;i<size;i++)
        {
                if(strcmp(p->label,lab)==0)
                {
                	flag=p;
                	return flag;
                }
                p=p->next;
        }
        p=NULL;
        return p;
}
int main(){
     extern FILE* yyin;
	 yyin = fopen("inp.py","r");
	 yyparse();
	 if(v)
	 {
	    printf("------------------------------PARSE SUCCESSFUL---------------------------\n");
	 }
	 if(!error){
	 	display();
	 }
	 return 1;
	
}
