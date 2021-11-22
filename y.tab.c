
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

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

/* Line 189 of yacc.c  */
#line 1 "pyparsergen.y"

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


/* Line 189 of yacc.c  */
#line 106 "y.tab.c"

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
     GLOBAL = 309,
     YIELD = 310,
     IMPORT = 311,
     RETURN = 312,
     AS = 313,
     TYPE_COMMENT = 314,
     FOR = 315,
     DEL = 316,
     NONLOCAL = 317,
     ELIF = 318,
     NEWLINE = 319,
     TRUE = 320,
     NONE = 321,
     CLASS = 322,
     DEDENT = 323,
     FINALLY = 324,
     WITH = 325,
     EXPECT = 326,
     IS = 327,
     MATCH = 328,
     CONTINUE = 329,
     RAISE = 330,
     FROM = 331,
     PASS = 332,
     LAMBDA = 333,
     DEF = 334,
     FALSE = 335,
     CASE = 336,
     ASSERT = 337,
     AWAIT = 338,
     BREAK = 339,
     ASYNC = 340,
     TRY = 341
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
#define GLOBAL 309
#define YIELD 310
#define IMPORT 311
#define RETURN 312
#define AS 313
#define TYPE_COMMENT 314
#define FOR 315
#define DEL 316
#define NONLOCAL 317
#define ELIF 318
#define NEWLINE 319
#define TRUE 320
#define NONE 321
#define CLASS 322
#define DEDENT 323
#define FINALLY 324
#define WITH 325
#define EXPECT 326
#define IS 327
#define MATCH 328
#define CONTINUE 329
#define RAISE 330
#define FROM 331
#define PASS 332
#define LAMBDA 333
#define DEF 334
#define FALSE 335
#define CASE 336
#define ASSERT 337
#define AWAIT 338
#define BREAK 339
#define ASYNC 340
#define TRY 341




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 320 "y.tab.c"

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
# if YYENABLE_NLS
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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  89
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3942

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  112
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  169
/* YYNRULES -- Number of rules.  */
#define YYNRULES  452
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1225

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   341

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    97,     2,     2,     2,   104,   105,     2,
      90,    91,    89,    96,    94,    92,    95,   103,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    99,    98,
     107,     2,    93,   108,   102,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    87,     2,    88,   106,   109,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   110,   100,   111,   101,     2,     2,     2,
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
      85,    86
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    10,    12,    14,    16,    21,    30,
      32,    34,    36,    38,    40,    42,    44,    46,    48,    50,
      52,    54,    56,    58,    60,    62,    64,    66,    68,    70,
      72,    80,    85,    94,   110,   119,   120,   123,   126,   129,
     132,   135,   138,   141,   144,   147,   151,   155,   159,   163,
     169,   175,   177,   184,   193,   197,   200,   201,   214,   226,
     227,   234,   238,   240,   246,   251,   257,   261,   263,   269,
     277,   283,   291,   295,   303,   304,   318,   333,   345,   356,
     369,   381,   382,   394,   396,   397,   402,   414,   415,   424,
     428,   432,   441,   442,   447,   449,   456,   459,   460,   462,
     464,   465,   467,   469,   473,   474,   479,   480,   482,   484,
     486,   488,   490,   492,   494,   496,   497,   505,   507,   509,
     511,   513,   515,   516,   524,   526,   528,   530,   532,   534,
     535,   539,   543,   544,   546,   549,   550,   552,   555,   556,
     558,   559,   561,   562,   564,   565,   574,   577,   579,   580,
     590,   594,   595,   597,   599,   600,   604,   605,   610,   615,
     620,   627,   629,   631,   632,   635,   638,   639,   642,   648,
     656,   662,   667,   675,   679,   683,   690,   697,   706,   711,
     716,   720,   725,   732,   734,   737,   739,   757,   776,   784,
     786,   788,   797,   804,   812,   818,   820,   825,   831,   838,
     846,   847,   855,   863,   865,   869,   870,   875,   881,   882,
     888,   895,   896,   903,   911,   915,   918,   921,   928,   929,
     932,   934,   935,   947,   948,   953,   955,   956,   966,   969,
     971,   972,   975,   977,   985,   986,   989,   991,   992,   998,
     999,  1001,  1006,  1010,  1011,  1017,  1019,  1021,  1022,  1029,
    1031,  1032,  1039,  1046,  1054,  1060,  1062,  1063,  1068,  1074,
    1075,  1082,  1090,  1091,  1099,  1107,  1109,  1113,  1114,  1117,
    1121,  1122,  1126,  1131,  1132,  1137,  1143,  1145,  1146,  1153,
    1155,  1156,  1163,  1165,  1166,  1169,  1171,  1172,  1176,  1178,
    1179,  1181,  1183,  1185,  1187,  1189,  1191,  1193,  1195,  1198,
    1199,  1205,  1209,  1212,  1216,  1219,  1223,  1226,  1227,  1231,
    1233,  1234,  1238,  1240,  1241,  1245,  1247,  1248,  1253,  1258,
    1260,  1261,  1265,  1269,  1271,  1272,  1276,  1280,  1285,  1289,
    1293,  1295,  1296,  1299,  1302,  1305,  1307,  1308,  1313,  1315,
    1316,  1319,  1321,  1322,  1326,  1329,  1336,  1341,  1343,  1344,
    1348,  1356,  1357,  1371,  1373,  1374,  1376,  1378,  1380,  1382,
    1384,  1386,  1394,  1400,  1410,  1414,  1417,  1418,  1424,  1425,
    1430,  1431,  1441,  1442,  1450,  1451,  1463,  1467,  1468,  1473,
    1474,  1480,  1481,  1486,  1494,  1495,  1499,  1501,  1505,  1506,
    1509,  1510,  1522,  1533,  1534,  1538,  1543,  1544,  1551,  1552,
    1571,  1573,  1574,  1584,  1589,  1594,  1595,  1598,  1599,  1603,
    1605,  1606,  1610,  1614,  1615,  1619,  1629,  1637,  1638,  1648,
    1651,  1652,  1659,  1661,  1662,  1668,  1675,  1677,  1678,  1680,
    1684,  1690,  1696,  1697,  1699,  1701,  1705,  1706,  1712,  1719,
    1729,  1737,  1738,  1744,  1751,  1752,  1758,  1765,  1770,  1779,
    1783,  1785,  1787
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     113,     0,    -1,    87,   114,    88,    -1,   115,    96,    -1,
     118,    -1,   116,    -1,    79,    -1,   117,    97,    98,    64,
      -1,    98,    95,   117,    96,    87,    98,    88,    64,    -1,
     119,    -1,   201,    -1,   180,    -1,   126,    -1,   181,    -1,
      77,    -1,   125,    -1,   123,    -1,    84,    -1,    74,    -1,
     124,    -1,   121,    -1,   122,    -1,   182,    -1,   134,    -1,
     198,    -1,   139,    -1,   138,    -1,   141,    -1,   137,    -1,
     144,    -1,     4,    99,   208,    87,    34,   207,    88,    -1,
      90,    90,   274,    91,    -1,   275,    91,    99,   208,    87,
      34,   207,    88,    -1,    90,   268,    34,    91,    96,    90,
     261,   100,   201,    91,    97,    34,    87,    59,    88,    -1,
     274,   120,   101,    90,   261,   100,   201,    91,    -1,    -1,
      96,    34,    -1,    92,    34,    -1,    89,    34,    -1,   102,
      34,    -1,   103,    34,    -1,   104,    34,    -1,   105,    34,
      -1,   100,    34,    -1,   106,    34,    -1,   107,   107,    34,
      -1,    93,    93,    34,    -1,    89,    89,    34,    -1,   103,
     103,    34,    -1,    54,    94,    95,     4,    96,    -1,    62,
      94,    95,     4,    96,    -1,   261,    -1,    82,   208,    87,
      94,   208,    88,    -1,    61,   277,   105,    90,    98,   100,
      64,    91,    -1,   127,   100,   128,    -1,    56,   131,    -1,
      -1,    76,    90,    95,   100,    95,    95,    95,    91,    89,
     133,    56,   129,    -1,    76,    90,    95,   100,    95,    95,
      95,    91,    96,    56,   129,    -1,    -1,    90,   130,    87,
      94,    88,    91,    -1,   130,    97,    94,    -1,    89,    -1,
       4,    87,    58,     4,    88,    -1,    94,    95,   132,    96,
      -1,   133,    87,    58,     4,    88,    -1,   133,    95,     4,
      -1,     4,    -1,    18,   206,    99,   200,   135,    -1,    18,
     206,    99,   200,    87,   136,    88,    -1,    63,   206,    99,
     200,   135,    -1,    63,   206,    99,   200,    87,   136,    88,
      -1,    19,    99,   200,    -1,    20,   206,    99,   200,    87,
     136,    88,    -1,    -1,    60,   268,    26,   101,   201,    99,
      87,    59,    88,   200,    87,   136,    88,    -1,    85,    60,
     268,    26,   101,   201,    99,    87,    59,    88,   200,    87,
     136,    88,    -1,    70,    90,    94,    95,   140,    96,    94,
     108,    91,    99,   200,    -1,    70,    94,    95,   140,    96,
      99,    87,    59,    88,   200,    -1,    85,    70,    90,    94,
      95,   140,    96,    94,   108,    91,    99,   200,    -1,    85,
      70,    94,    95,   140,    96,    99,    87,    59,    88,   200,
      -1,    -1,   208,    58,   271,   105,    90,    94,   100,    91,
     100,    99,    91,    -1,   208,    -1,    -1,    86,    99,   200,
     143,    -1,    86,    99,   200,   142,    96,    87,   136,    88,
      87,   143,    88,    -1,    -1,    71,   208,    87,    58,     4,
      88,    99,   200,    -1,    71,    99,   200,    -1,    69,    99,
     200,    -1,    73,   145,    99,    64,    43,   146,    96,    68,
      -1,    -1,   204,    94,   203,   108,    -1,   206,    -1,    81,
     148,   147,   108,    99,   200,    -1,    18,   206,    -1,    -1,
     168,    -1,   149,    -1,    -1,   150,    -1,   151,    -1,   151,
      58,   161,    -1,    -1,   100,    95,   152,    96,    -1,    -1,
     153,    -1,   160,    -1,   162,    -1,   163,    -1,   166,    -1,
     167,    -1,   172,    -1,   176,    -1,    -1,   156,    97,    90,
      96,   100,    92,    91,    -1,   155,    -1,   246,    -1,    66,
      -1,    65,    -1,    80,    -1,    -1,   156,    97,    90,    96,
     100,    92,    91,    -1,   155,    -1,   246,    -1,    66,    -1,
      65,    -1,    80,    -1,    -1,   157,    96,   159,    -1,   157,
      92,   159,    -1,    -1,    11,    -1,    92,    11,    -1,    -1,
     158,    -1,    92,   158,    -1,    -1,    11,    -1,    -1,    11,
      -1,    -1,   161,    -1,    -1,    97,   109,     4,    97,    90,
      95,   100,    90,    -1,    34,    91,    -1,   109,    -1,    -1,
     164,    97,    90,    95,   100,    90,   100,    34,    91,    -1,
     165,    95,     4,    -1,    -1,   164,    -1,     4,    -1,    -1,
      90,   149,    91,    -1,    -1,    87,   169,   108,    88,    -1,
      90,   168,   108,    91,    -1,   170,    94,   169,   108,    -1,
      94,    95,   170,    96,    94,   108,    -1,   171,    -1,   149,
      -1,    -1,    89,   161,    -1,    89,   162,    -1,    -1,   110,
     111,    -1,   110,   175,    94,   108,   111,    -1,   110,   173,
      94,   175,    94,   108,   111,    -1,   110,   173,    94,   108,
     111,    -1,    94,    95,   174,    96,    -1,    90,   154,   100,
     164,    91,    99,   149,    -1,    89,    89,   161,    -1,   165,
      90,    91,    -1,   165,    90,   177,    94,   108,    91,    -1,
     165,    90,   178,    94,   108,    91,    -1,   165,    90,   177,
      94,   178,    94,   108,    91,    -1,    94,    95,   149,    96,
      -1,    94,    95,   179,    96,    -1,     4,    34,   149,    -1,
      57,    87,   276,    88,    -1,    75,   208,    87,    76,   208,
      88,    -1,    75,    -1,   197,   183,    -1,   183,    -1,    79,
       4,    90,    87,   185,    88,    91,    87,    92,    93,   208,
      88,    99,    87,   184,    88,   200,    -1,    85,    79,     4,
      90,    87,   185,    88,    91,    87,    92,    93,   208,    88,
      99,    87,   184,    88,   200,    -1,    64,    59,   105,    90,
      64,    43,    91,    -1,    59,    -1,   186,    -1,   187,   191,
      89,   192,    89,    87,   189,    88,    -1,   188,   192,    89,
      87,   189,    88,    -1,   191,    96,   192,    89,    87,   189,
      88,    -1,   192,    96,    87,   189,    88,    -1,   189,    -1,
     191,    96,   103,    94,    -1,   191,    96,   103,   105,    91,
      -1,   191,    89,   192,    96,   103,    94,    -1,   191,    89,
     192,    96,   103,   105,    91,    -1,    -1,    89,   191,   193,
      89,    87,   190,    88,    -1,    89,    94,   193,    96,    87,
     190,    88,    -1,   190,    -1,    89,    89,   191,    -1,    -1,
     194,    94,    59,   108,    -1,   194,    59,   108,   105,    91,
      -1,    -1,   194,   196,    94,    59,   108,    -1,   194,   196,
      59,   108,   105,    91,    -1,    -1,   194,   196,   108,    94,
      59,   108,    -1,   194,   196,   108,    59,   108,   105,    91,
      -1,     4,   195,   108,    -1,    99,   208,    -1,    34,   208,
      -1,    90,   102,   206,    64,    91,    96,    -1,    -1,   197,
     199,    -1,   199,    -1,    -1,    67,     4,    87,    90,    87,
     262,    88,    91,    88,    99,   200,    -1,    -1,    64,    43,
     114,    68,    -1,   116,    -1,    -1,   202,    90,    94,   202,
      91,    96,    87,    94,    88,    -1,   202,    94,    -1,   202,
      -1,    -1,    89,   233,    -1,   208,    -1,    94,    95,   204,
      96,    87,    94,    88,    -1,    -1,    89,   233,    -1,   206,
      -1,    -1,     4,    99,    34,   101,   208,    -1,    -1,   205,
      -1,   208,    97,    99,    34,    -1,   261,   100,   201,    -1,
      -1,   220,    18,   220,    19,   208,    -1,   220,    -1,   209,
      -1,    -1,    78,    87,   210,    88,    99,   208,    -1,   211,
      -1,    -1,   212,   216,    89,   217,    89,    87,    -1,   213,
     217,    89,    87,   214,    88,    -1,   216,    96,   217,    89,
      87,   214,    88,    -1,   217,    96,    87,   214,    88,    -1,
     214,    -1,    -1,   216,    96,   103,    94,    -1,   216,    96,
     103,   105,    99,    -1,    -1,   216,    89,   217,    96,   103,
      94,    -1,   216,    89,   217,    96,   103,   105,    99,    -1,
      -1,    89,   216,   218,    89,    87,   215,    88,    -1,    89,
      94,   218,    96,    87,   215,    88,    -1,   215,    -1,    89,
      89,   216,    -1,    -1,   219,    94,    -1,   219,   105,    99,
      -1,    -1,   219,   196,    94,    -1,   219,   196,   105,    99,
      -1,    -1,   219,   196,   108,    94,    -1,   219,   196,   108,
     105,    99,    -1,     4,    -1,    -1,   221,    90,    23,   221,
      91,    96,    -1,   221,    -1,    -1,   222,    90,    24,   222,
      91,    96,    -1,   222,    -1,    -1,    25,   222,    -1,   223,
      -1,    -1,   233,   224,    96,    -1,   233,    -1,    -1,   225,
      -1,   226,    -1,   227,    -1,   228,    -1,   229,    -1,   230,
      -1,   231,    -1,   232,    -1,    52,   233,    -1,    -1,    90,
      97,    34,    91,   233,    -1,    93,    34,   233,    -1,    93,
     233,    -1,    25,    26,   233,    -1,    26,   233,    -1,    72,
      25,   233,    -1,    72,   233,    -1,    -1,   233,   100,   234,
      -1,   234,    -1,    -1,   234,   106,   235,    -1,   235,    -1,
      -1,   235,   105,   236,    -1,   236,    -1,    -1,   236,   107,
     107,   237,    -1,   236,    93,    93,   237,    -1,   237,    -1,
      -1,   237,    96,   238,    -1,   237,    92,   238,    -1,   238,
      -1,    -1,   238,    89,   239,    -1,   238,   103,   239,    -1,
     238,   103,   103,   239,    -1,   238,   104,   239,    -1,   238,
     102,   239,    -1,   239,    -1,    -1,    96,   239,    -1,    92,
     239,    -1,   101,   239,    -1,   240,    -1,    -1,   241,    89,
      89,   239,    -1,   241,    -1,    -1,    83,   242,    -1,   242,
      -1,    -1,   242,    95,     4,    -1,   242,   251,    -1,   242,
      90,    87,   262,    88,    91,    -1,   242,    87,   243,    88,
      -1,   245,    -1,    -1,   244,    97,    94,    -1,    94,    95,
     244,    96,    87,    94,    88,    -1,    -1,    87,   208,    88,
      99,    87,   208,    88,    87,    99,    87,   208,    88,    88,
      -1,   206,    -1,    -1,     4,    -1,    65,    -1,    80,    -1,
      66,    -1,   246,    -1,    11,    -1,    90,   249,   100,   250,
     100,   251,    91,    -1,    90,   247,   100,   248,    91,    -1,
      90,   254,   100,   252,   100,   255,   100,   253,    91,    -1,
      95,    95,    95,    -1,    10,    96,    -1,    -1,    87,    87,
     203,    88,    88,    -1,    -1,    87,   206,   259,    88,    -1,
      -1,    90,    87,   204,    94,    87,   203,    88,    88,    91,
      -1,    -1,    90,    90,   261,   100,   206,    91,    91,    -1,
      -1,    90,    90,   205,   100,   208,    97,    99,    34,    91,
     259,    91,    -1,   110,   203,   111,    -1,    -1,   110,   206,
     259,   111,    -1,    -1,   110,    87,   256,    88,   111,    -1,
      -1,   110,   258,   259,   111,    -1,    94,    95,   257,    96,
      87,    94,    88,    -1,    -1,    89,    89,   233,    -1,   258,
      -1,   208,    99,   208,    -1,    -1,   260,    96,    -1,    -1,
      85,    60,   268,    26,   101,   220,    90,    18,   220,    91,
      89,    -1,    60,   268,    26,   101,   220,    90,    18,   220,
      91,    89,    -1,    -1,    55,    76,   208,    -1,    55,    87,
     201,    88,    -1,    -1,   263,    87,    94,    88,   105,    91,
      -1,    -1,    94,    95,    90,   265,   100,    90,   205,   100,
     208,    97,    99,    34,    91,    97,    34,    91,    96,    87,
      -1,   264,    -1,    -1,    94,    95,   266,    96,    94,    94,
      95,   267,    96,    -1,    94,    95,   266,    96,    -1,    94,
      95,   267,    96,    -1,    -1,    89,   208,    -1,    -1,     4,
      34,   208,    -1,   265,    -1,    -1,     4,    34,   208,    -1,
      89,    89,   208,    -1,    -1,   271,    97,    94,    -1,   271,
      90,    94,   271,    91,    89,    87,    94,    88,    -1,    94,
      95,   271,    96,    87,    94,    88,    -1,    -1,   271,    90,
      94,   271,    91,    96,    87,    94,    88,    -1,   271,    94,
      -1,    -1,    89,    90,    97,    89,   271,    91,    -1,   272,
      -1,    -1,   279,    95,     4,    97,   280,    -1,   279,    87,
     243,    88,    97,   280,    -1,   273,    -1,    -1,     4,    -1,
      90,   272,    91,    -1,    90,    87,   270,    88,    91,    -1,
      87,    87,   269,    88,    88,    -1,    -1,   275,    -1,     4,
      -1,    90,   274,    91,    -1,    -1,   279,    95,     4,    97,
     280,    -1,   279,    87,   243,    88,    97,   280,    -1,   208,
      90,    94,   208,    91,    89,    87,    94,    88,    -1,    94,
      95,   278,    96,    87,    94,    88,    -1,    -1,   279,    95,
       4,    97,   280,    -1,   279,    87,   243,    88,    97,   280,
      -1,    -1,   279,    95,     4,   105,   280,    -1,   279,    87,
     243,    88,   105,   280,    -1,   279,   251,   105,   280,    -1,
     279,    90,    87,   262,    88,    91,   105,   280,    -1,   245,
     105,   280,    -1,    90,    -1,    87,    -1,    95,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    36,    36,    54,    56,    56,    62,    63,    64,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    80,    81,    82,    83,    84,    85,    86,    87,
      89,    90,    91,    92,    93,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   110,
     112,   114,   116,   118,   120,   122,   124,   125,   126,   128,
     129,   130,   131,   133,   135,   137,   139,   140,   142,   143,
     145,   146,   148,   150,   152,   153,   154,   156,   157,   158,
     159,   161,   162,   163,   165,   166,   167,   169,   170,   171,
     173,   175,   177,   178,   179,   181,   183,   185,   186,   187,
     189,   190,   191,   193,   195,   196,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   208,   209,   210,   211,   212,
     213,   214,   216,   217,   218,   219,   220,   221,   222,   224,
     225,   226,   228,   229,   230,   232,   233,   234,   236,   237,
     239,   240,   242,   243,   245,   246,   246,   248,   250,   251,
     253,   255,   256,   257,   259,   260,   262,   263,   264,   266,
     268,   270,   271,   273,   274,   275,   277,   278,   279,   280,
     281,   283,   285,   287,   289,   290,   291,   292,   294,   296,
     298,   300,   302,   303,   305,   306,   308,   309,   311,   313,
     315,   317,   318,   319,   320,   321,   326,   327,   329,   330,
     332,   333,   334,   335,   337,   339,   340,   341,   343,   344,
     345,   347,   348,   349,   351,   353,   355,   357,   359,   360,
     361,   363,   364,   366,   367,   368,   370,   371,   372,   373,
     375,   376,   377,   379,   381,   382,   383,   385,   386,   388,
     389,   390,   392,   399,   400,   401,   402,   404,   405,   407,
     409,   410,   411,   412,   413,   414,   416,   417,   418,   420,
     421,   422,   424,   425,   426,   427,   429,   431,   432,   433,
     435,   436,   437,   439,   440,   441,   443,   445,   446,   447,
     449,   450,   451,   453,   454,   455,   457,   458,   459,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   471,   473,
     474,   480,   482,   484,   486,   488,   490,   492,   493,   494,
     496,   497,   498,   500,   501,   502,   504,   505,   506,   507,
     509,   510,   511,   512,   514,   515,   516,   517,   518,   519,
     520,   522,   523,   524,   525,   526,   528,   529,   530,   532,
     533,   534,   536,   538,   539,   540,   541,   542,   544,   545,
     546,   548,   549,   550,   552,   553,   554,   555,   556,   557,
     558,   559,   560,   561,   562,   564,   566,   567,   569,   570,
     572,   573,   575,   576,   578,   579,   581,   583,   584,   586,
     587,   590,   591,   593,   595,   596,   597,   599,   601,   602,
     604,   605,   606,   608,   609,   610,   612,   613,   615,   616,
     617,   619,   620,   621,   622,   624,   625,   627,   628,   629,
     631,   632,   633,   636,   637,   638,   640,   642,   643,   644,
     646,   647,   648,   650,   651,   652,   653,   655,   656,   657,
     658,   659,   661,   662,   663,   664,   666,   667,   668,   670,
     672,   674,   675,   676,   684,   685,   686,   687,   688,   689,
     691,   691,   691
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
  "DOUBLEEQUAL", "NOTEQUAL", "GLOBAL", "YIELD", "IMPORT", "RETURN", "AS",
  "TYPE_COMMENT", "FOR", "DEL", "NONLOCAL", "ELIF", "NEWLINE", "TRUE",
  "NONE", "CLASS", "DEDENT", "FINALLY", "WITH", "EXPECT", "IS", "MATCH",
  "CONTINUE", "RAISE", "FROM", "PASS", "LAMBDA", "DEF", "FALSE", "CASE",
  "ASSERT", "AWAIT", "BREAK", "ASYNC", "TRY", "'['", "']'", "'*'", "'('",
  "')'", "'-'", "'>'", "','", "'.'", "'+'", "'!'", "';'", "':'", "'|'",
  "'~'", "'@'", "'/'", "'%'", "'&'", "'^'", "'<'", "'?'", "'_'", "'{'",
  "'}'", "$accept", "file", "statements", "statement", "simple_stmts",
  "simple_stmt", "compound_stmt", "assignment", "augassign", "global_stmt",
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
  "eq_bitwise_or", "noteq_bitwise_or", "gte_bitwise_or", "gt_bitwise_or",
  "notin_bitwise_or", "in_bitwise_or", "isnot_bitwise_or", "is_bitwise_or",
  "bitwise_or", "bitwise_xor", "bitwise_and", "shift_expr", "sum", "term",
  "factor", "power", "await_primary", "primary", "slices", "slice", "atom",
  "strings", "list", "listcomp", "tuple", "group", "genexp", "set",
  "setcomp", "dict", "dictcomp", "double_starred_kvpairs",
  "double_starred_kvpair", "kvpair", "for_if_clauses", "for_if_clause",
  "yield_expr", "arguments", "args", "kwargs", "starred_expression",
  "kwarg_or_starred", "kwarg_or_double_starred", "star_targets",
  "star_targets_list_seq", "star_targets_tuple_seq", "star_target",
  "target_with_star_atom", "star_atom", "single_target",
  "single_subscript_attribute_target", "expression_list", "del_targets",
  "del_target", "t_primary", "t_lookahead", 0
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
     335,   336,   337,   338,   339,   340,   341,    91,    93,    42,
      40,    41,    45,    62,    44,    46,    43,    33,    59,    58,
     124,   126,    64,    47,    37,    38,    94,    60,    63,    95,
     123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   112,   113,   114,   115,   115,   116,   116,   116,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   118,   118,   118,   118,   118,   118,   118,   118,
     119,   119,   119,   119,   119,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   128,   128,   129,
     129,   129,   129,   130,   131,   132,   133,   133,   134,   134,
     135,   135,   136,   137,   138,   138,   138,   139,   139,   139,
     139,   140,   140,   140,   141,   141,   141,   142,   142,   142,
     143,   144,   145,   145,   145,   146,   147,   148,   148,   148,
     149,   149,   149,   150,   151,   151,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   153,   153,   153,   153,   153,
     153,   153,   154,   154,   154,   154,   154,   154,   154,   155,
     155,   155,   156,   156,   156,   157,   157,   157,   158,   158,
     159,   159,   160,   160,   161,   161,   161,   162,   163,   163,
     164,   165,   165,   165,   166,   166,   167,   167,   167,   168,
     169,   170,   170,   171,   171,   171,   172,   172,   172,   172,
     172,   173,   174,   175,   176,   176,   176,   176,   177,   178,
     179,   180,   181,   181,   182,   182,   183,   183,   184,   184,
     185,   186,   186,   186,   186,   186,   187,   187,   188,   188,
     189,   189,   189,   189,   190,   191,   191,   191,   192,   192,
     192,   193,   193,   193,   194,   195,   196,   197,   198,   198,
     198,   199,   199,   200,   200,   200,   201,   201,   201,   201,
     202,   202,   202,   203,   204,   204,   204,   205,   205,   206,
     206,   206,   207,   208,   208,   208,   208,   209,   209,   210,
     211,   211,   211,   211,   211,   211,   212,   212,   212,   213,
     213,   213,   214,   214,   214,   214,   215,   216,   216,   216,
     217,   217,   217,   218,   218,   218,   219,   220,   220,   220,
     221,   221,   221,   222,   222,   222,   223,   223,   223,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   225,   226,
     226,   227,   228,   229,   230,   231,   232,   233,   233,   233,
     234,   234,   234,   235,   235,   235,   236,   236,   236,   236,
     237,   237,   237,   237,   238,   238,   238,   238,   238,   238,
     238,   239,   239,   239,   239,   239,   240,   240,   240,   241,
     241,   241,   242,   242,   242,   242,   242,   242,   243,   243,
     243,   244,   244,   244,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   246,   247,   247,   248,   248,
     249,   249,   250,   250,   251,   251,   252,   253,   253,   254,
     254,   255,   255,   256,   257,   257,   257,   258,   259,   259,
     260,   260,   260,   261,   261,   261,   262,   262,   263,   263,
     263,   264,   264,   264,   264,   265,   265,   266,   266,   266,
     267,   267,   267,   268,   268,   268,   269,   270,   270,   270,
     271,   271,   271,   272,   272,   272,   272,   273,   273,   273,
     273,   273,   274,   274,   274,   274,   275,   275,   275,   276,
     277,   278,   278,   278,   279,   279,   279,   279,   279,   279,
     280,   280,   280
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     1,     1,     1,     4,     8,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       7,     4,     8,    15,     8,     0,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     3,     3,     3,     3,     5,
       5,     1,     6,     8,     3,     2,     0,    12,    11,     0,
       6,     3,     1,     5,     4,     5,     3,     1,     5,     7,
       5,     7,     3,     7,     0,    13,    14,    11,    10,    12,
      11,     0,    11,     1,     0,     4,    11,     0,     8,     3,
       3,     8,     0,     4,     1,     6,     2,     0,     1,     1,
       0,     1,     1,     3,     0,     4,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     7,     1,     1,     1,
       1,     1,     0,     7,     1,     1,     1,     1,     1,     0,
       3,     3,     0,     1,     2,     0,     1,     2,     0,     1,
       0,     1,     0,     1,     0,     8,     2,     1,     0,     9,
       3,     0,     1,     1,     0,     3,     0,     4,     4,     4,
       6,     1,     1,     0,     2,     2,     0,     2,     5,     7,
       5,     4,     7,     3,     3,     6,     6,     8,     4,     4,
       3,     4,     6,     1,     2,     1,    17,    18,     7,     1,
       1,     8,     6,     7,     5,     1,     4,     5,     6,     7,
       0,     7,     7,     1,     3,     0,     4,     5,     0,     5,
       6,     0,     6,     7,     3,     2,     2,     6,     0,     2,
       1,     0,    11,     0,     4,     1,     0,     9,     2,     1,
       0,     2,     1,     7,     0,     2,     1,     0,     5,     0,
       1,     4,     3,     0,     5,     1,     1,     0,     6,     1,
       0,     6,     6,     7,     5,     1,     0,     4,     5,     0,
       6,     7,     0,     7,     7,     1,     3,     0,     2,     3,
       0,     3,     4,     0,     4,     5,     1,     0,     6,     1,
       0,     6,     1,     0,     2,     1,     0,     3,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     0,
       5,     3,     2,     3,     2,     3,     2,     0,     3,     1,
       0,     3,     1,     0,     3,     1,     0,     4,     4,     1,
       0,     3,     3,     1,     0,     3,     3,     4,     3,     3,
       1,     0,     2,     2,     2,     1,     0,     4,     1,     0,
       2,     1,     0,     3,     2,     6,     4,     1,     0,     3,
       7,     0,    13,     1,     0,     1,     1,     1,     1,     1,
       1,     7,     5,     9,     3,     2,     0,     5,     0,     4,
       0,     9,     0,     7,     0,    11,     3,     0,     4,     0,
       5,     0,     4,     7,     0,     3,     1,     3,     0,     2,
       0,    11,    10,     0,     3,     4,     0,     6,     0,    18,
       1,     0,     9,     4,     4,     0,     2,     0,     3,     1,
       0,     3,     3,     0,     3,     9,     7,     0,     9,     2,
       0,     6,     1,     0,     5,     6,     1,     0,     1,     3,
       5,     5,     0,     1,     1,     3,     0,     5,     6,     9,
       7,     0,     5,     6,     0,     5,     6,     4,     8,     3,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   307,     0,   355,     0,   360,   307,   307,   283,     0,
       0,     0,     0,   354,     0,     0,   356,   358,     0,     0,
     307,    18,   307,    14,     0,     6,   357,   307,   342,    17,
       0,     0,   307,   354,   331,     0,   331,     0,   331,     0,
       0,     5,     0,     4,     9,    20,    21,    16,    19,    15,
      12,     0,    23,    28,    26,    25,    27,    29,    11,    13,
      22,   185,   221,    24,   220,    10,   229,   232,   246,   245,
     279,   282,   285,   288,   309,   312,   315,   319,   323,   330,
     335,   338,   341,   347,   359,    51,    35,   433,   374,     1,
     307,   365,   355,   366,   240,     0,     0,   347,     0,   355,
     284,     0,   307,   307,     0,    55,   307,   428,     0,     0,
     354,     0,     0,     0,   422,   426,   374,     0,     0,     0,
       0,     0,     0,   324,     0,     0,    94,     0,   250,     0,
       0,   340,   354,     0,     0,   307,   231,   428,     0,   354,
     307,     0,     0,     0,     0,     0,     0,   433,   374,   333,
       0,   332,   307,   334,     2,     3,     0,    56,     0,     0,
     184,   219,     0,   228,   307,     0,     0,     0,   324,   324,
     324,     0,   324,   310,     0,   290,   291,   292,   293,   294,
     295,   296,   297,   313,   316,     0,     0,   324,   324,   331,
     331,   331,   331,     0,   307,     0,     0,   344,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   307,     0,     0,     0,     0,     0,     0,     0,
     307,     0,   307,     0,   394,     0,     0,     0,     0,     0,
       0,   354,   354,     0,     0,     0,     0,   307,     0,   354,
       0,     0,     0,     0,   307,   235,     0,     0,     0,   276,
       0,     0,   249,   267,   270,   255,   265,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     6,   354,   225,
      87,     0,   307,   354,     0,     0,     0,   368,   372,     0,
       0,   435,   307,     0,   364,     0,     0,     0,    54,   307,
       0,   307,   307,   324,   304,   298,   324,   306,     0,   324,
     302,   308,   287,   311,   314,   320,   320,   322,   321,   325,
     329,   331,   326,   328,   331,   307,     0,   353,     0,     0,
     396,   237,   343,   451,   450,   452,   449,    38,     0,    37,
       0,    36,    43,    39,    40,     0,    41,    42,    44,     0,
       0,   307,     0,   396,     0,     0,     0,     0,     0,   307,
       0,     0,     0,     0,   395,    67,     0,     0,     0,   181,
       0,     0,     0,     0,     0,     0,   429,   307,   354,   414,
       0,     0,     0,   374,     0,     0,     0,   307,     0,    83,
       0,     0,     0,   307,   267,   273,   273,     0,     0,     0,
       0,     0,   270,   270,     0,   307,   268,     0,     0,   200,
     307,     0,     0,   307,     0,   307,     0,   307,     0,    85,
       0,     0,   355,   324,     0,   236,    31,     0,     0,     0,
     307,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     0,     0,   243,     0,     0,   303,   305,     0,   301,
     318,   317,   327,   337,     0,   307,   346,     0,     0,     0,
       0,   400,     0,     0,    47,    46,    48,    45,   393,     0,
       0,     0,     0,     0,   447,   393,   243,   307,     0,    68,
     241,     0,    49,    64,     0,     0,   307,   354,     0,   354,
       0,     0,   419,     0,     0,     0,     0,     0,   307,     0,
       0,    50,   396,     0,     0,   354,     0,   307,    93,     0,
     266,     0,     0,     0,   243,   270,     0,     0,     0,     0,
     262,   216,   269,   271,     0,     0,     0,     0,   190,   205,
     208,   195,   203,     0,     0,     0,     0,   307,   307,     0,
     200,     0,   307,   307,     0,     0,   307,     0,   366,     0,
       0,   307,     0,   388,   362,   393,   374,     0,   381,     0,
       0,     0,     0,     0,     0,   244,     0,     0,   324,     0,
       0,   349,   405,     0,     0,   307,     0,     0,     0,     0,
       0,   437,   445,     0,     0,   238,     0,     0,     0,     0,
       0,    66,     0,     0,   431,     0,   430,   354,     0,     0,
       0,   424,     0,     0,     0,     0,     0,     0,     0,     0,
      97,     0,     0,   182,     0,     0,     0,   248,     0,   262,
       0,   257,     0,     0,     0,   272,   307,     0,   205,   211,
     211,     0,     0,     0,     0,     0,   208,   208,     0,     0,
       0,     0,    52,     0,     0,     0,     0,   224,    90,    89,
       0,     0,   367,     0,   217,     0,     0,     0,   386,   380,
     354,     0,     0,     0,     0,     0,     0,   376,   307,     0,
     393,     0,   424,     0,     0,     0,   278,   281,   300,     0,
       0,     0,   307,   405,   409,     0,     0,   345,     0,     0,
     307,   393,   438,   446,     0,    30,   307,   307,   307,    69,
      73,     0,     0,     0,   421,     0,     0,     0,   425,     0,
       0,     0,     0,     0,     0,     0,     0,   144,     0,     0,
      99,   101,   102,    98,     0,   161,     0,     0,     0,     0,
       0,     0,     0,     0,   258,   262,   254,   215,   214,   204,
       0,     0,     0,     0,   208,     0,     0,     0,     0,   200,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   324,   307,     0,     0,   354,   369,   389,   307,   361,
     388,   377,     0,   425,     0,     0,     0,   307,     0,   307,
     307,   406,   307,     0,   403,   404,     0,     0,     0,     0,
       0,   242,     0,    72,    65,     0,     0,     0,     0,     0,
     440,     0,   442,    53,     0,     0,     0,     0,     0,     0,
     147,   164,   165,   106,   307,     0,   144,     0,    91,     0,
       0,     0,   274,     0,     0,   251,   252,   260,     0,     0,
       0,     0,     0,     0,     0,   200,     0,   196,     0,     0,
       0,     0,   206,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   385,   387,     0,     0,     0,     0,     0,   307,
       0,   307,     8,     0,     0,     0,     0,   408,   412,     0,
       0,     0,     0,    34,    32,   448,     0,    70,     0,     0,
       0,   307,     0,   443,     0,     0,   307,     0,   146,     0,
     153,   139,   120,   119,   121,     0,   100,   138,     0,     0,
     107,   117,     0,     0,   136,   108,   143,   109,   110,   152,
       0,   111,   112,   113,   114,   118,    96,     0,   103,     0,
       0,     0,   264,   275,   263,   261,   253,     0,     0,     0,
       0,     0,     0,     0,   197,   200,   194,   207,     0,   209,
       0,     0,     0,     0,     0,     0,     0,     0,   307,     0,
       0,   382,   388,   363,     0,     0,   227,     0,   350,   237,
       0,   397,     0,     0,     0,   416,     0,     0,   415,   307,
     307,    78,     0,     0,     0,   162,     0,   139,   137,     0,
       0,   167,     0,     0,   105,     0,   140,   140,     0,     0,
       0,   307,   100,   159,   233,     0,     0,     0,     0,     0,
     307,   200,   192,   198,     0,     0,   210,   307,     0,   307,
       0,   307,     0,   371,   383,     0,   307,   373,     0,     0,
       0,     0,     0,   410,   388,    71,   439,     0,     0,   222,
      77,     0,     0,     0,   155,     0,   144,     0,     0,     0,
       0,   141,   131,   130,     0,   174,     0,     0,     0,   150,
      95,   162,     0,   202,     0,     0,   201,     0,     0,   199,
     193,     0,   307,    80,   307,    88,    86,     0,     0,   378,
       0,     0,     0,     0,   307,     0,     0,     0,     0,   418,
       0,     0,     0,   157,   158,   173,   122,     0,     0,     0,
       0,     0,     0,   100,     0,     0,     0,     0,   212,     0,
     191,     0,    79,     0,   307,     0,     0,     0,    59,   307,
       0,   307,   402,   375,    75,     0,     0,   127,   126,   128,
       0,   124,     0,   125,   171,   170,     0,   168,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   213,     0,
       0,     0,     0,   307,     0,    59,     0,    62,     0,    58,
       0,     0,     0,   411,    82,     0,   151,     0,     0,     0,
       0,   100,   178,   179,     0,   175,     0,   176,   160,     0,
      76,     0,     0,     0,     0,    57,     0,     0,     0,     0,
       0,   145,   152,     0,     0,   169,   116,     0,   180,     0,
     189,     0,     0,     0,   392,     0,    33,     0,     0,    61,
     352,     0,     0,     0,     0,   177,     0,   307,     0,   391,
       0,     0,     0,   100,     0,   149,     0,   186,   307,    63,
       0,     0,   172,     0,     0,   187,    60,     0,   123,     0,
       0,     0,     0,   188,   399
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    39,    40,   269,    42,    43,    44,   210,    45,
      46,    47,    48,    49,    50,    51,   288,  1139,  1140,   105,
     356,   357,    52,   469,   578,    53,    54,    55,   378,    56,
     408,   409,    57,   124,   601,   805,   709,   710,   711,   712,
     889,   890,  1110,   891,   892,   893,   894,  1032,   895,   801,
     802,   898,   899,   900,   901,   902,   713,   910,   714,   715,
     903,   972,  1077,   973,   904,  1037,  1038,  1122,    58,    59,
      60,    61,  1182,   517,   518,   519,   520,   521,   522,   523,
     524,   730,   625,   617,   398,    62,    63,    64,   270,    65,
      66,   411,   414,    94,   317,   573,    67,    68,   251,   252,
     253,   254,   255,   256,   257,   258,   501,   391,    69,    70,
      71,    72,   174,   175,   176,   177,   178,   179,   180,   181,
     182,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,   318,   319,    97,    84,   142,   421,   143,   423,   215,
     425,   850,   144,   659,   419,   647,   648,   652,   653,    85,
     449,   450,   451,   674,   675,   676,   145,   361,   364,   113,
     114,   115,    86,    87,   228,   118,   372,    88,   326
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -873
static const yytype_int16 yypact[] =
{
     -16,  1167,    93,    65,     3,  -873,  2101,  2101,  3213,   139,
       4,   145,    46,   826,   151,   196,  -873,  -873,   101,   120,
    1960,  -873,  2595,  -873,   240,   119,  -873,  3272,   114,  -873,
     148,   259,  3572,   724,  3841,   278,  3841,   312,  3841,   360,
     358,  -873,   344,  -873,  -873,  -873,  -873,  -873,  -873,  -873,
    -873,   355,  -873,  -873,  -873,  -873,  -873,  -873,  -873,  -873,
    -873,  -873,   251,  -873,  -873,  -873,   270,  -873,  -873,   438,
     367,   370,  -873,   239,   359,   356,   -11,   309,   133,  -873,
    -873,   377,   159,   363,  -873,  -873,   986,   379,   253,  -873,
    3272,  -873,   374,   106,  -873,   378,   384,  -873,   385,  -873,
    -873,   376,  2176,  2209,   391,  -873,  3317,   382,   403,   405,
     372,   363,   467,    30,  -873,  -873,   260,   401,   392,   404,
     411,   406,   407,  3647,   408,   409,   410,   418,    56,   416,
     422,   159,   826,   285,   507,  1271,   420,   382,   429,   766,
    2242,   437,   425,   426,   428,   496,   442,  -873,   262,  -873,
     439,  -873,  1791,  -873,  -873,  -873,   440,   460,   119,   458,
    -873,  -873,   446,  -873,  3421,   519,   520,   517,  3809,  3809,
    3690,   448,  3734,   837,   452,  -873,  -873,  -873,  -873,  -873,
    -873,  -873,  -873,   837,  1114,   457,   449,  3841,  3841,  3841,
    3841,  2660,  3841,   464,  2035,   340,   553,  -873,   266,    15,
     524,   466,   526,   528,   529,    18,   531,   532,   533,   465,
     474,   482,  2035,   353,   579,   485,   505,   568,   525,   527,
    1375,   514,  1583,   613,  -873,   530,   615,   534,   537,   539,
     523,  1094,   798,   535,   538,   540,   541,  2035,   617,   481,
     546,   623,   548,   547,  2628,   420,   577,   549,   569,  -873,
      81,   556,  -873,   642,   642,  -873,  -873,   172,   551,    66,
     561,   557,   626,   559,   560,   564,   616,  -873,   334,  -873,
     348,   566,  2068,   766,   570,   598,   571,   580,   574,   558,
     575,  -873,  2035,   665,  -873,   578,   606,   583,  -873,  2703,
     656,  3465,  3508,  3809,   420,   420,  3809,   420,   645,  3809,
     420,   359,  -873,   356,   -11,  1114,  1114,   133,   133,  -873,
    -873,  3841,  -873,  -873,  3841,  2735,   581,  -873,   593,   585,
     190,   679,  -873,  -873,  -873,  -873,  -873,  -873,   650,  -873,
     654,  -873,  -873,  -873,  -873,   655,  -873,  -873,  -873,   657,
     603,  3272,   608,   190,   254,   266,   664,   599,   549,  2317,
       2,   669,   618,   610,  -873,  -873,   614,   276,   627,  -873,
     625,   621,   633,   304,   636,   345,  -873,  2350,  1538,  -873,
     637,   273,   631,   282,   632,   635,   652,  2628,   641,   671,
     689,   647,   640,  2735,   642,   642,   642,   -21,   653,   651,
     660,   717,   642,    23,   666,   924,  -873,   658,   129,    59,
    2735,   659,   667,  2628,   672,  1167,   662,  2778,   668,  -873,
     674,   675,   210,  3777,   673,  -873,   681,   682,   683,   678,
    1824,   688,   691,   687,   549,   692,   695,   705,   283,   707,
    -873,   700,   706,  2454,   709,   710,   420,   420,   712,   420,
     309,   309,  -873,  -873,   708,  2810,  -873,   704,   711,   719,
     718,  -873,   374,   716,  -873,  -873,  -873,  -873,   755,   725,
     284,   730,   266,   266,  -873,   755,  1928,  2101,   803,  -873,
    -873,   803,  -873,  -873,   765,   821,  2844,   508,   739,  1538,
     737,   735,  -873,   734,   744,   287,   266,   751,  2035,   836,
     742,  -873,   190,   748,   746,  1642,   768,  2919,  -873,   762,
    -873,   758,   717,   769,  2454,   642,   764,   759,   168,   770,
     771,  -873,  -873,  -873,   772,   773,    88,   779,  -873,   864,
     864,  -873,  -873,   322,   777,    49,   781,  2350,  2628,   778,
      59,   809,  1479,  1687,   792,   793,  2952,   794,   213,   796,
     785,  2985,   775,    54,  -873,   755,   797,   783,   774,   800,
     288,   266,   799,   795,   804,  -873,   805,   808,  3809,   806,
     811,  -873,    68,   818,   802,  3060,   810,   865,   266,   266,
     820,  -873,  -873,   824,   814,  -873,   819,   823,   831,   842,
     920,  -873,   834,   840,  -873,   846,  -873,  1538,   856,   857,
     266,  -873,   851,   859,   289,   884,   862,   858,   866,   849,
     126,   855,   860,  -873,   868,   852,   870,  -873,   873,   771,
     861,  -873,   867,   876,   877,  -873,  1062,   863,   864,   864,
     864,    17,   878,   883,   885,   717,   864,    39,   886,   869,
     917,    19,  -873,   879,   889,   880,   893,  -873,  -873,  -873,
     928,   803,  -873,   549,  -873,   898,   892,   896,  -873,  -873,
     826,   933,   900,   901,   894,   909,   910,  -873,  3093,   905,
     755,   266,  -873,   918,   913,   922,  -873,  -873,   420,   923,
     925,   981,  3376,   932,  -873,   921,   937,  -873,   936,   939,
    2486,   755,  -873,  -873,   929,  -873,  2209,  1375,  1479,  -873,
    -873,   950,   952,   955,  -873,   948,   984,   958,  -873,   960,
     290,   266,   959,   964,   949,   997,   978,    35,   974,  1052,
     977,  -873,  1016,  -873,   982,  -873,  1013,   996,   995,   220,
     995,   998,  1006,   228,  -873,   771,  -873,  -873,  -873,  -873,
     999,   717,  1007,  1010,   864,  1012,  1004,   232,  1014,  1017,
    1002,   993,   994,  1049,  1022,  1019,  1023,  1020,  1111,  1028,
    1029,  3809,   612,  1032,  1095,   826,  -873,  -873,  2520,  -873,
      54,  1021,  1026,  -873,  1056,  1027,  1035,  2735,  1036,  3317,
    3317,  -873,  3168,  1033,  1038,  -873,  1018,  1037,  1043,  1047,
     266,  -873,    11,  -873,  -873,  1050,  1044,  1045,  1051,  1053,
    -873,   266,  -873,  -873,  1055,  1057,  1058,  1059,  1064,  1041,
    -873,  -873,  -873,   646,   957,  1048,    32,  1067,  -873,  1068,
    1083,  1085,  -873,  1076,  1088,  -873,  -873,  -873,  1087,  1102,
    1104,  1090,  1106,  1103,  1110,  1017,  1097,  -873,  1117,  1115,
    1113,  1120,  -873,  1039,  1105,  1146,  1112,  1153,  1127,  1131,
    1138,  1142,   420,  -873,  1132,  1130,  1209,  1145,  1128,   504,
    1147,  2486,  -873,  1148,  1160,  1172,  1178,  -873,  -873,  1165,
    1173,  1185,  1243,  -873,  -873,  -873,   803,  -873,  1184,  1191,
    1193,  1583,  1195,  -873,  1186,  1187,  1687,  1188,  -873,  1280,
    -873,  1190,  -873,  -873,  -873,  1067,     1,  1279,   158,  1196,
    -873,  -873,  1194,   336,  -873,  -873,  -873,  -873,  -873,  1197,
     218,  -873,  -873,  -873,  -873,  -873,  -873,  1198,  -873,  1200,
    1192,  1205,  -873,  -873,  -873,  -873,  -873,  1210,   146,  1210,
    1208,  1211,  1214,   241,  -873,  1017,  -873,  -873,  1212,  -873,
    1216,  1215,  1217,  1218,  1213,  1238,  1220,  1221,  3615,  1207,
    1222,  -873,    54,  -873,  1223,  1224,  -873,  1229,  -873,   679,
    1225,  -873,  1226,  1230,  1231,  -873,  1227,  1235,  -873,  1687,
    1687,  -873,  1232,  1233,  1236,  1240,  1239,  1237,  -873,  1249,
    1234,  -873,  1245,  1247,  -873,  1253,  1313,  1313,  1262,   351,
    1352,  1687,     1,  -873,  -873,  1268,  1276,  1251,  1311,  1283,
    2735,  1017,  -873,  -873,  1289,  1293,  -873,  1583,  1284,  1687,
    1291,  1687,  1294,  -873,  -873,  1297,  3615,  -873,  1277,  1292,
     326,  1295,  1290,    41,    54,  -873,  -873,  1303,   803,  -873,
    -873,  1296,  1302,  1307,  -873,  1306,    32,  1308,   -14,  1298,
    1305,  -873,  -873,  -873,  1304,  -873,  1309,  1314,  1315,  -873,
    -873,  -873,  1316,  -873,  1300,  1299,  -873,  1322,  1323,  -873,
    -873,  1326,  1687,  -873,  2735,  -873,  -873,  1384,  1324,  -873,
    1369,   615,  1359,  1329,  3060,  1383,  1330,  1325,  1327,  -873,
    1332,  1328,  1331,  -873,  -873,  -873,   163,  1337,  1312,  1334,
    1333,  1335,  1342,    37,    -6,  1317,  1340,  1354,  -873,  1344,
    -873,   803,  -873,  1336,  3540,  1404,  1360,    12,   102,  2735,
    1349,  3317,  -873,  -873,  -873,  1357,  1351,  -873,  -873,  -873,
    1356,  -873,  1363,  -873,  -873,  -873,  1353,  -873,  1371,  1378,
    1440,  1379,  1388,  1390,  1395,  1393,  1397,  1385,  -873,  1405,
    1403,  1396,  1407,  3540,  1435,   102,  1409,  -873,  1495,  -873,
    1406,  1412,  1402,  -873,  -873,  1415,  1498,  1416,  1398,  1417,
    1410,    -3,  -873,  -873,  1503,  -873,  1408,  -873,  -873,   338,
    -873,  1424,  1423,  1422,  1426,  -873,  1457,  1430,  1425,  1432,
    1484,  -873,  1431,  1428,  1429,  -873,  -873,  1487,  -873,  1433,
    -873,  1467,  1439,   338,  -873,  1441,  -873,  1524,  1437,  -873,
    -873,  1438,  1447,  1450,  1446,  -873,  1427,  1687,  1451,  -873,
    1459,  1463,  1455,    -3,  1468,  -873,  1448,  -873,  1687,  -873,
    1464,  1530,  -873,  1474,  1508,  -873,  -873,  1488,  -873,  1535,
    1492,  1499,  1502,  -873,  -873
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -873,  -873,  1201,  -873,     5,  1443,  -873,  -873,  -873,  -873,
    -873,  -873,  -873,  -873,  -873,  -873,  -873,   456,   454,  -873,
    -873,   536,  -873,   816,  -463,  -873,  -873,  -873,  -339,  -873,
    -873,   661,  -873,  -873,  -873,  -873,  -873,  -872,  -873,  -873,
    -873,  -873,  -873,   543,   544,  -873,   713,   622,  -873,  -775,
     807,  -873,   459,   461,  -873,  -873,   723,   726,   620,  -873,
    -873,  -873,  -873,   584,  -873,  -873,   542,  -873,  -873,  -873,
    -873,  1551,   431,  1086,  -873,  -873,  -873,  -713,  -722,  -449,
    -486,  1001,  -313,  -873,  -444,  -873,  -873,  1553,  -213,  -101,
    1341,  -234,    -9,  -317,    16,   941,    13,  -873,  -873,  -873,
    -873,  -873,  -481,  -271,  -197,  -207,  1246,  -104,  -163,  1343,
       7,  -873,  -873,  -873,  -873,  -873,  -873,  -873,  -873,  -873,
    -873,    -7,  1444,  1452,  1458,    36,   263,    10,  -873,  -873,
    1595,  -195,  1179,    -1,  -782,  -873,  -873,  -873,  -873,   -77,
    -873,  -873,  -873,  -873,  -873,  -873,   973,  -744,  -873,  -428,
    -304,  -873,  -873,   963,  -873,   628,   -10,  -873,  -873,  -221,
     -60,  -873,    28,    29,  -873,  -873,  -873,    44,  -327
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -445
static const yytype_int16 yytable[] =
{
      83,   290,   225,   112,   453,   197,    41,   350,   579,   352,
     365,   125,   111,   382,   965,   100,   848,   342,   464,    96,
      96,   905,    95,    98,   259,   136,   830,   249,   896,   614,
     566,   908,   111,    96,   624,   127,   126,   574,   493,   461,
     130,  1120,   370,   515,   149,  1065,   151,   390,   153,   327,
     233,   365,   334,   386,   197,  -104,   389,   116,   605,  -104,
     249,   146,   147,   515,   529,   467,   798,   620,  1135,   798,
     623,     1,   671,   396,   467,   969,   629,   148,   742,   233,
     102,   631,   185,   395,   397,   249,   525,   427,  1123,   468,
     707,   103,   515,    89,  1078,  -104,   186,   708,   866,    91,
     395,   708,  1124,   216,   328,   120,  1136,   475,   629,   111,
    1041,   630,   922,   743,   650,   224,   245,   654,    99,   227,
     235,   335,   262,   129,     4,     5,   508,   236,   722,   799,
    1066,   111,   799,   106,    83,   571,   572,   708,   111,   651,
     736,   738,   737,   630,   800,   250,   387,   484,   516,   387,
    -390,    83,  -267,    96,   116,  -205,   275,   672,   673,   591,
     396,   294,   295,   297,    90,   300,  -434,   274,   147,   729,
     384,   397,   233,     4,   881,   385,   116,   618,   749,    16,
      17,   631,   619,   148,  -104,   507,   509,   500,   596,   634,
     547,  1137,  1138,   218,    26,   986,   219,   989,  1008,   309,
     310,   312,   313,   621,    93,   987,   621,    96,   132,    35,
     121,  1121,   995,   233,   122,   707,   141,   525,   133,    83,
    -100,    83,   189,   513,   662,    96,   708,   134,  1107,  1108,
     111,   111,   762,   101,   514,   190,   191,   192,   111,   104,
     988,   682,   683,  1109,   819,   117,   194,   969,   824,   195,
      96,  1075,   970,   574,   196,   887,   583,   379,   585,  -135,
    -132,   392,   611,   698,   167,   168,   483,   111,   393,   971,
    1068,    83,   111,   612,   599,   116,   116,  -398,  1048,  1178,
     387,   502,   502,   373,   448,    96,   436,   821,   415,   437,
     119,   169,   439,   593,  1113,    96,   146,   147,   608,   435,
     218,   146,   147,   219,  -428,   621,   731,   731,   979,   217,
     362,   170,   148,   980,   812,   583,   116,   148,    18,   638,
     639,   442,   817,   141,   443,   813,   827,   128,   444,   171,
     158,  1212,   172,   818,   763,   993,   159,   828,   137,   173,
     212,   440,   441,   213,     4,     5,   994,   237,   214,   282,
     213,   462,   213,   323,   459,   238,   324,   283,   135,   463,
     162,   325,    96,   474,   163,   415,   695,   111,  -413,   488,
     486,   475,   213,   150,   792,   263,   107,   489,   463,   264,
     551,   568,     4,     5,   590,   661,   701,   791,   463,   569,
     379,   229,   569,   569,   463,   569,   499,  1180,   410,    16,
      17,   187,  1181,   953,    83,   188,   245,   152,   511,   750,
      41,   626,   116,   526,    26,  1061,   379,   406,   627,   407,
     534,   138,  1062,   109,   139,  -432,   633,   320,   976,    35,
     321,  -420,   977,    96,  -366,   481,   543,    16,    17,   482,
     343,   156,  1035,   321,   141,  1036,   555,   811,   154,   814,
     307,   308,    26,   865,   155,   157,   164,   165,    96,   231,
     166,   184,   232,  -423,   873,   183,   193,    35,   198,   656,
     211,   223,  -366,   217,   782,   783,   111,   220,   111,   575,
      96,   221,   141,   576,   222,    99,   226,  -355,   602,   582,
     229,     4,     5,   234,   111,   230,   239,   240,   242,   241,
     243,    96,   244,   247,  -236,   248,   260,   246,    92,   261,
      96,   265,   107,   415,     4,     5,   271,   607,     4,     5,
     173,   116,  -277,   116,   276,   277,   278,   602,   279,     8,
     280,    83,    83,   281,   284,    83,   287,   134,   286,   116,
     289,   379,   291,   293,   292,   298,    16,    17,   302,    96,
     305,   668,   415,   314,   646,  1070,   306,   322,   329,   330,
     331,    26,   332,   333,  -237,   336,   337,   338,  -444,    16,
      17,    93,   339,    16,    17,   340,    35,  -441,   679,   778,
     116,   341,    24,   344,    26,   781,   111,    28,    26,  -237,
     345,  -342,   346,  -324,    93,   108,    34,   109,   110,    35,
      36,  -243,   347,    35,  -420,    38,  -324,  -324,  -324,  -313,
    -310,  -316,   348,   351,   349,  -237,    99,   353,   354,   355,
     362,   371,     4,     5,   358,   359,   366,   375,  1130,   727,
    -277,   116,  1012,   360,   368,   369,   374,     8,   376,   367,
     754,   380,   377,   381,   388,   383,   249,   394,   399,   111,
     880,   400,   401,   402,   404,   403,     4,   881,   957,   405,
     410,   416,   417,   961,   422,   418,   426,   420,   424,   428,
     430,   646,  -243,   431,   429,   433,   445,    16,    17,   438,
     798,   446,   447,   452,   454,   771,    83,    83,   455,   456,
      24,   457,    26,   458,   116,    28,   460,  -243,   465,  -342,
     466,  -324,    93,   470,    34,   471,   472,    35,    36,   478,
     473,   882,   883,    38,  -324,  -324,  -324,  -313,  -310,  -316,
     477,   476,   479,  -243,   480,   485,   884,   487,   137,   495,
     490,   491,   496,   885,     4,     5,   886,   494,   887,   492,
     505,  -151,   497,   799,   842,   846,  1019,  1020,   498,   506,
     944,   395,   504,   510,   111,   800,   888,   512,  -413,   530,
     527,   532,   528,   537,   535,   843,   542,   539,  1040,   536,
     137,    96,  -435,   540,   847,  1005,     4,     5,   541,   544,
     855,   545,   857,   858,  1051,   771,  1053,   546,  1055,    16,
      17,   549,   548,   550,   552,   553,   559,   554,   561,   116,
     556,   557,   107,   558,    26,   564,   562,   563,     4,     5,
      10,   138,   567,   109,   139,  -432,   565,    96,   570,    35,
     906,  -420,   577,   580,  -366,   581,   140,   584,   586,   587,
     107,    16,    17,   588,   141,   589,     4,     5,   592,  1092,
     594,    99,   595,  1058,   597,   598,    26,     4,     5,   600,
     603,   609,  -413,   272,   604,   610,   273,  -423,   606,   613,
     250,    35,    96,    16,    17,   942,  -366,   622,   515,   632,
      83,   615,   616,   628,   635,    83,   141,   637,    26,   640,
     641,   644,   642,   643,   658,   272,   649,   655,   232,  -423,
     660,    16,    17,    35,   657,   664,   678,   663,  -366,   681,
     665,   666,    16,    17,   667,   669,    26,   670,   141,   677,
     680,   684,   685,   108,   686,   109,   110,    26,   687,   689,
      28,    35,   688,  -420,   691,   692,  -324,    93,    99,    34,
     690,  1132,    35,    36,     4,     5,   693,   694,    38,  -324,
    -324,  -324,  -277,   696,  -316,   699,   697,   700,   702,     8,
     703,   716,   704,   705,   706,   718,   717,   720,    83,    83,
     719,    92,   721,   725,   723,   726,   724,     4,     5,   733,
    1163,   728,   734,   739,   735,  -277,   741,   740,   744,   746,
      83,   747,     8,  -243,  1207,   745,   748,   751,   756,    16,
      17,   752,   753,   755,   758,  1215,    83,   757,    83,   321,
      83,   759,    24,  1047,    26,   761,   764,    28,   765,   766,
     767,  -342,   768,  -324,    93,   769,    34,   774,  -243,    35,
      36,   772,    16,    17,   776,    38,  -324,  -324,  -324,  -243,
    -310,  -316,  -243,   775,   780,    24,   777,    26,   784,   787,
      28,   785,   786,   788,  -342,   789,  -324,    93,   790,    34,
     793,    83,    35,    36,  -243,   794,   796,   795,    38,  -324,
    -324,  -324,  -313,  -310,  -316,  -237,    99,  1093,   797,   803,
     804,  -162,     4,     5,   806,   199,   807,  1100,   200,   201,
    -277,   808,   202,   809,   810,   815,   203,     8,   204,   205,
     206,   207,   208,   209,   816,   820,   822,   823,   107,   825,
     826,   832,   833,   829,     4,     5,   516,   831,   834,   835,
     837,   838,  1141,   836,  1143,   839,   840,   841,    99,   844,
     852,   845,   853,   861,     4,     5,   851,    16,    17,   854,
     856,   849,   860,   859,   863,   864,   862,   868,   869,   871,
      24,   870,    26,   874,   928,    28,   876,   872,   875,  -342,
     879,  -324,    93,   877,    34,   878,   907,    35,    36,    16,
      17,   909,   911,    38,  -324,  -324,  -324,  -313,  -310,  -316,
    -243,     3,   384,   912,    26,   913,   914,     4,     5,    16,
      17,   363,  -417,   109,   110,     6,   915,     7,  -420,    35,
     916,   917,     8,   919,    26,   920,    83,    28,   918,   921,
     923,   926,   925,  -324,    93,   930,    34,    83,   924,    35,
      36,   927,   932,   929,   933,    38,  -324,  -324,  -324,   934,
     931,     9,    10,    11,    12,   935,   937,    13,    14,    15,
     936,   938,    16,    17,    18,   939,   940,    19,   943,   941,
      20,    21,    22,   945,    23,    24,    25,    26,   946,    27,
      28,    29,    30,    31,  -342,   949,    32,    33,  -436,    34,
     947,  -230,    35,    36,  -226,    37,   948,   950,    38,  -324,
    -324,  -324,  -313,  -310,  -316,     3,   951,   952,   954,   955,
     956,     4,     5,   958,   963,   959,   960,  -133,   962,  -277,
     967,   975,   974,   984,   978,   982,     8,   981,   991,   985,
     983,   990,   992,   996,   997,   999,   998,   406,  1006,  1004,
    1000,  1003,  1001,  1007,  1009,  1010,  1011,  1014,  1015,  1016,
    1013,  1017,  1018,  1021,  1031,     9,    10,    11,    12,  1027,
    1022,  1024,    14,    15,  -134,   266,    16,    17,  1026,  1028,
    -223,  1029,  -223,  1030,  1023,    21,    22,  1025,    23,    24,
     267,    26,  1034,    27,    28,    29,  1039,   618,  -342,  1044,
      32,   268,  -436,    34,  1043,  -230,    35,    36,  -226,    37,
    1045,  1046,    38,  -324,  -324,  -324,  -313,  -310,  -316,     3,
    1049,  1050,  1056,  1052,  1054,     4,     5,  1057,  1059,  1060,
    1064,  1069,  1072,  -277,  1063,  1073,  1071,  1074,  1076,  1082,
       8,  1081,  1094,  1096,  1083,  1087,  1080,  1088,  1084,  1085,
    1089,  1090,  1086,  1091,  1095,  1098,  1099,  1101,  1103,   770,
    1104,  1102,  1133,  1115,  1131,  1126,  1106,  1105,  1116,     9,
      10,    11,    12,  1114,  1127,  1118,    14,    15,  -223,   266,
      16,    17,  1119,  1129,  1117,  1128,  1142,  1134,  1144,    21,
      22,  1145,    23,    24,   267,    26,  1146,    27,    28,    29,
    1147,  1148,  -223,  1149,    32,   268,  -436,    34,  1150,  -230,
      35,    36,  -226,    37,  1151,  1152,    38,  -324,  -324,  -324,
    -313,  -310,  -316,     3,  1153,  1154,  1155,  1156,  1157,     4,
       5,  1160,  1159,  1158,  1164,  1161,  1166,  -277,  1162,  1136,
    1169,  1170,   880,  1168,     8,  1171,  1174,  1120,  1176,  1175,
    1177,  1183,  1184,  1185,  1186,  1187,  1179,  1188,  1191,  1189,
    1190,  1194,  1192,   980,  1195,  1193,  1196,  1197,  1200,  1202,
    1199,  1201,  1206,     9,    10,    11,    12,  1205,  1214,  1208,
      14,    15,   107,   266,    16,    17,  1203,  1209,     4,     5,
    1204,  1210,  1211,    21,    22,  1216,    23,    24,   267,    26,
    1213,    27,    28,    29,  1217,  1218,  -342,  -223,    32,   268,
    -436,    34,  1219,  -230,    35,    36,  -226,    37,  1221,  1220,
      38,  -324,  -324,  -324,  -313,  -310,  -316,     3,  1222,  1224,
    1223,  1165,  1167,     4,     5,   285,  1002,  1097,   867,  1033,
     968,  -277,  1042,    16,    17,  1172,   531,  1173,     8,   966,
     897,   964,  1079,   160,  1198,   161,   636,   301,    26,  1111,
    1112,   732,   779,   131,   560,   108,  1125,   109,   110,  -420,
     432,   760,   503,    35,   434,   303,   773,     9,    10,    11,
      12,  1067,   304,     0,    14,    15,   107,   266,    16,    17,
       0,     0,     4,     5,     0,     0,     0,    21,    22,     0,
      23,    24,   267,    26,     0,    27,    28,    29,     0,     0,
    -223,     0,    32,   268,  -436,    34,     0,  -230,    35,    36,
    -226,    37,     0,     0,    38,  -324,  -324,  -324,  -313,  -310,
    -316,     3,     0,     0,     0,     0,     0,     4,     5,     0,
       0,     0,     0,     0,     0,  -277,     0,    16,    17,     0,
       0,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,     0,     0,     0,     0,     0,   108,
       0,   109,   110,     0,     0,     0,     0,    35,     0,     0,
       0,     9,    10,    11,    12,     0,     0,     0,    14,    15,
       0,   266,    16,    17,     0,     0,     0,     0,     0,     0,
       0,    21,    22,     0,    23,    24,   267,    26,     0,    27,
      28,    29,     0,     0,  -342,     0,    32,   268,  -436,    34,
       0,  -230,    35,    36,  -226,    37,     0,     0,    38,  -324,
    -324,  -324,  -313,  -310,  -316,     3,     0,     0,     0,     0,
       0,     4,     5,     0,     0,     0,     0,     0,     0,  -277,
       0,     0,     0,     0,     0,     0,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,     0,
       0,     0,     0,     0,     4,     5,     0,     0,     0,     0,
       0,     0,  -277,     0,     0,     9,    10,    11,    12,     8,
       0,     0,    14,    15,     0,     0,    16,    17,     0,     0,
       0,     0,     0,     0,     0,    21,    22,     0,    23,    24,
       0,    26,     0,    27,    28,    29,     0,     0,  -342,     0,
      32,   268,  -436,    34,  -237,  -230,    35,    36,     0,    16,
      17,     0,    38,  -324,  -324,  -324,  -313,  -310,  -316,     0,
       0,     0,    24,     0,    26,     0,     0,    28,     0,  -237,
       0,  -342,  -237,  -324,    93,     0,    34,     0,     0,    35,
      36,  -243,     0,     0,     0,    38,  -324,  -324,  -324,  -313,
    -310,  -316,    99,     0,     0,     0,     0,     0,     4,     5,
       0,     0,     0,     0,     0,     0,  -277,     0,     0,     0,
       0,     0,     0,     8,  -307,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,     0,     0,     0,     0,     0,
       4,     5,     0,     0,     0,     0,     0,     0,  -277,     0,
    -307,     0,     0,     0,     0,     8,     0,     0,     0,     0,
       0,     0,     0,    16,    17,     0,     0,     0,     0,     0,
    -307,     0,     0,     0,     0,     0,    24,     0,    26,     0,
       0,    28,     0,     0,     0,  -342,     0,  -324,    93,     0,
      34,  -307,     0,    35,    36,    16,    17,     0,     0,    38,
    -324,  -324,  -324,  -313,  -310,  -316,     0,     0,    24,    92,
      26,     0,     0,    28,     0,     4,     5,  -342,     0,   123,
      93,     0,    34,  -277,  -234,    35,    36,  -243,     0,   -92,
       8,    38,  -324,  -324,  -324,  -313,  -310,  -316,     0,     0,
       0,     0,   412,     0,     0,     0,     0,     0,     4,     5,
       0,     0,     0,     0,     0,     0,  -277,     0,     0,     0,
       0,     0,     0,     8,     0,     0,     0,     0,     0,     0,
      16,    17,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     4,     5,    24,     0,    26,     0,     0,    28,  -277,
       0,     0,   315,  -348,  -324,    93,     8,    34,     0,   316,
      35,    36,  -237,    16,    17,     0,    38,  -324,  -324,  -324,
    -313,  -310,  -316,     0,     0,     0,    24,     0,    26,     0,
       0,    28,     0,     0,     0,   363,  -417,   413,   110,     0,
      34,     0,  -234,    35,    36,  -243,    16,    17,     0,    38,
    -324,  -324,  -324,  -313,  -310,  -316,     0,     0,     0,    24,
      99,    26,     0,     0,    28,     0,     4,     5,  -342,     0,
    -324,    93,     0,    34,  -277,     0,    35,    36,  -243,     0,
    -237,     8,    38,  -324,  -324,  -324,  -313,  -310,  -316,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,     4,
       5,     0,     0,     0,     0,     0,     0,  -277,     0,     0,
       0,     0,     0,     0,     8,     0,     0,     0,     0,     0,
       0,    16,    17,     0,     0,     0,    92,     0,     0,     0,
       0,     0,     4,     5,    24,     0,    26,     0,     0,    28,
    -277,     0,     0,  -342,     0,  -324,    93,     8,    34,     0,
       0,    35,    36,  -243,    16,    17,  -243,    38,  -324,  -324,
    -324,  -313,  -310,  -316,     0,     0,     0,    24,     0,    26,
       0,     0,    28,     0,     0,     0,  -342,  -226,    32,    93,
       0,    34,     0,  -230,    35,    36,  -237,    16,    17,     0,
      38,  -324,  -324,  -324,  -313,  -310,  -316,     0,     0,     0,
      24,    92,    26,     0,     0,    28,     0,     4,     5,  -342,
       0,  -324,    93,     0,    34,  -277,     0,    35,    36,  -243,
       0,     0,     8,    38,  -324,  -324,  -324,  -313,  -310,  -316,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
       4,     5,     0,     0,     0,     0,     0,     0,  -277,     0,
       0,     0,     0,     0,     0,     8,     0,     0,     0,     0,
       0,     0,    16,    17,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,     0,    26,     0,     0,
      28,     0,     0,     0,  -342,     0,   123,    93,     0,    34,
       0,  -234,    35,    36,  -243,    16,    17,     0,    38,  -324,
    -324,  -324,  -313,  -310,  -316,     0,     0,     0,    24,     0,
      26,     0,     0,    28,     0,     0,     0,  -342,     0,    32,
      93,     0,    34,     0,  -230,    35,    36,     0,     0,  -226,
       0,    38,  -324,  -324,  -324,  -313,  -310,  -316,    99,     0,
       0,     0,     0,     0,     4,     5,     0,     0,     0,     0,
       0,     0,  -277,     0,     0,     0,     0,     0,     0,     8,
    -307,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      99,     0,     0,     0,     0,     0,     4,     5,     0,     0,
       0,     0,     0,     0,  -277,     0,  -307,     0,     0,     0,
       0,     8,     0,     0,     0,     0,     0,     0,     0,    16,
      17,     0,     0,     0,    92,     0,  -307,     0,     0,     0,
       4,     5,    24,     0,    26,     0,     0,    28,  -277,     0,
       0,     0,     0,  -324,    93,     8,    34,  -307,     0,    35,
      36,    16,    17,     0,     0,    38,  -324,  -324,  -324,     0,
    -310,  -316,     0,     0,    24,     0,    26,     0,     0,    28,
       0,     0,     0,  -342,     0,    32,    93,  -226,    34,     0,
    -230,    35,    36,     0,     0,    16,    17,    38,  -324,  -324,
    -324,  -313,  -310,  -316,     0,     0,     0,     0,    24,    99,
      26,     0,     0,    28,     0,     4,     5,  -342,     0,  -324,
      93,  -237,    34,  -277,     0,    35,    36,  -243,     0,     0,
       8,    38,  -324,  -324,  -324,  -313,  -310,  -316,     0,     0,
       0,     0,    99,     0,     0,     0,     0,     0,     4,     5,
       0,     0,     0,     0,     0,     0,  -277,     0,     0,     0,
       0,     0,     0,     8,     0,     0,     0,     0,     0,     0,
      16,    17,     0,     0,    99,     0,     0,     0,     0,     0,
       4,     5,     0,    24,     0,    26,     0,     0,    28,     0,
       0,     0,  -243,     0,  -324,    93,  -243,    34,     0,     0,
      35,    36,  -183,    16,    17,     0,    38,  -324,  -324,  -324,
    -313,  -310,  -316,     0,     0,     0,    24,    99,    26,     0,
       0,    28,     0,     4,     5,  -342,     0,  -324,    93,     0,
      34,  -277,     0,    35,    36,    16,    17,     0,     8,    38,
    -324,  -324,  -324,  -313,  -310,  -316,     0,     0,     0,    99,
      26,     0,     0,    28,     0,     4,     5,     0,     0,     0,
      93,     0,    34,  -277,     0,    35,    36,     0,     0,     0,
       8,    38,     0,   311,     0,     0,     0,     0,    16,    17,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    24,    99,    26,     0,     0,    28,     0,     4,     5,
    -342,     0,    32,    93,  -230,    34,  -277,     0,    35,    36,
      16,    17,     0,     8,    38,  -324,  -324,  -324,  -313,  -310,
    -316,     0,     0,    24,    92,    26,     0,     0,    28,     0,
       4,     5,  -342,  -243,  -324,    93,     0,    34,  -277,     0,
      35,    36,     0,     0,     0,     8,    38,  -324,  -324,  -324,
    -313,  -310,  -316,    16,    17,     0,     0,     0,    99,     0,
       0,     0,     0,     0,     4,     5,    24,     0,    26,     0,
       0,    28,  -277,     0,     0,  -243,     0,  -324,    93,     8,
      34,     0,     0,    35,    36,    16,    17,   533,     0,    38,
    -324,  -324,  -324,  -313,  -310,  -316,     0,     0,    24,     0,
      26,     0,     0,    28,     0,     0,     0,   315,     0,  -324,
      93,     0,    34,     0,     0,    35,    36,  -243,     0,    16,
      17,    38,  -324,  -324,  -324,  -313,  -310,  -316,     0,     0,
       0,     0,    24,    92,    26,     0,     0,    28,     0,     4,
       5,  -342,     0,  -324,    93,  -243,    34,  -277,     0,    35,
      36,     0,     0,     0,     8,    38,  -324,  -324,  -324,  -313,
    -310,  -316,     0,     0,     0,     0,   412,     0,     0,     0,
       0,     0,     4,     5,     0,     0,     0,     0,     0,     0,
    -277,     0,     0,     0,     0,     0,     0,     8,     0,     0,
       0,     0,     0,     0,    16,    17,     0,     0,     0,    99,
       0,     0,     0,     0,     0,     4,     5,    24,     0,    26,
       0,     0,    28,  -277,     0,     0,  -342,     0,   123,    93,
       8,    34,     0,     0,    35,    36,  -243,    16,    17,     0,
      38,  -324,  -324,  -324,  -313,  -310,  -316,     0,     0,     0,
      24,     0,    26,     0,     0,    28,     0,     0,     0,   108,
       0,   413,   110,     0,    34,     0,     0,    35,    36,  -243,
      16,    17,     0,    38,  -324,  -324,  -324,  -313,  -310,  -316,
       0,     0,     0,    24,    99,    26,     0,     0,    28,     0,
       4,     5,  -342,     0,   645,    93,     0,    34,  -277,     0,
      35,    36,     0,     0,  -243,     8,    38,  -324,  -324,  -324,
    -313,  -310,  -316,     0,     0,     0,     0,    99,     0,     0,
       0,     0,     0,     4,     5,     0,     0,     0,     0,     0,
       0,  -277,     0,     0,     0,     0,     0,     0,     8,     0,
       0,     0,     0,     0,     0,    16,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    24,     0,
      26,     0,     0,    28,     0,     0,     0,  -342,     0,  -324,
      93,     0,    34,     0,     0,    35,    36,  -243,    16,    17,
       0,    38,  -324,  -324,  -324,  -313,  -310,  -316,     0,     0,
       0,    24,    99,    26,     0,     0,    28,     0,     4,     5,
    -342,     0,  -324,    93,     0,    34,  -277,     0,    35,    36,
       0,     0,  -243,     8,    38,  -324,  -324,  -324,  -313,  -310,
    -316,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    99,     0,     0,
       0,     0,     0,     4,     5,     0,     0,     0,     0,     0,
       0,     0,     0,    16,    17,     0,     0,     0,     8,  -307,
       0,     0,     0,     0,     0,     0,    24,     0,    26,     0,
       0,    28,     0,     0,     0,  -342,     0,  -324,    93,     0,
      34,     0,     0,    35,    36,  -307,     0,     0,  -243,    38,
    -324,  -324,  -324,  -313,  -310,  -316,    99,     0,    16,    17,
       0,     0,     4,     5,     0,  -307,     0,     0,     0,     0,
    -277,     0,     0,    26,     0,     0,    28,     8,     0,     0,
       0,     0,  -324,    93,     0,    34,  -307,     0,    35,    36,
       0,     0,     0,     0,    38,  -324,  -324,  -324,     0,  -310,
    -316,    99,     0,     0,     0,     0,     0,     4,     5,     0,
       0,     0,     0,     0,     0,  -277,     0,    16,    17,     0,
       0,     0,     8,     0,     0,     0,     0,     0,     0,     0,
      24,     0,    26,     0,     0,    28,     0,     0,     0,  -243,
       0,  -324,    93,     0,    34,     0,     0,    35,    36,     0,
       0,     0,     0,    38,  -324,  -324,  -324,  -313,  -310,  -316,
      99,     0,    16,    17,     0,     0,     4,     5,     0,     0,
       0,     0,     0,     0,  -277,    24,     0,    26,     0,     0,
      28,     8,     0,     0,  -342,     0,  -324,    93,     0,    34,
       0,     0,    35,    36,     0,     0,     0,     0,    38,  -324,
    -324,  -324,  -313,  -310,  -316,    99,     0,     0,     0,     0,
       0,     4,     5,     0,     0,     0,     0,     0,     0,     0,
    -277,    16,    17,     0,     0,     0,     8,     0,     0,     0,
       0,     0,     0,     0,    24,     0,    26,     0,     0,    28,
       0,     0,     0,  -342,     0,   770,    93,     0,    34,    99,
       0,    35,    36,     0,     0,     4,     5,    38,  -324,  -324,
    -324,  -313,  -310,  -316,     0,     0,    16,    17,     0,     0,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,    28,     0,     0,     0,  -342,     0,
    -324,    93,    99,    34,     0,     0,    35,    36,     4,     5,
       0,     0,    38,  -324,  -324,  -324,  -313,  -310,  -316,     0,
      16,    17,     0,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    99,    26,     0,     0,    28,     0,
       4,     5,  -342,     0,  -324,    93,  -280,    34,     0,     0,
      35,    36,     0,     0,     0,     8,    38,  -324,  -324,  -324,
    -313,  -310,  -316,    16,    17,     0,    99,     0,     0,     0,
       0,     0,     4,     5,     0,     0,     0,     0,    26,     0,
       0,    28,     0,     0,     0,  -342,     0,  -324,    93,  -283,
      34,     0,     0,    35,    36,    16,    17,     0,     0,    38,
    -324,  -324,  -324,  -313,  -310,  -316,     0,     0,     0,    99,
      26,     0,     0,    28,     0,     4,     5,  -342,     0,  -324,
      93,  -277,    34,     0,     0,    35,    36,    16,    17,     0,
       8,    38,  -324,  -324,  -324,  -313,  -310,  -316,     0,     0,
       0,    99,    26,     0,     0,    28,     0,     4,     5,  -342,
       0,  -324,    93,     0,    34,  -316,     0,    35,    36,     0,
       0,     0,     0,    38,  -324,  -324,  -324,  -313,  -310,  -316,
      16,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    99,    26,     0,     0,    28,     0,
       4,     5,  -342,     0,  -324,    93,     0,    34,     0,     0,
      35,    36,    16,    17,     0,   296,    38,  -324,  -324,  -324,
    -313,  -310,  -316,     0,     0,     0,     0,    26,     0,     0,
      28,     0,     0,     0,  -342,     0,     0,    93,    99,    34,
    -316,  -307,    35,    36,     4,     5,     0,  -307,    38,     0,
       0,     0,  -313,  -310,  -316,    16,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   299,     0,
      26,     0,     0,    28,     0,     0,     0,  -342,     0,     0,
      93,    99,    34,  -316,     0,    35,    36,     4,     5,     0,
    -307,    38,     0,     0,     0,  -313,  -310,  -316,     0,    16,
      17,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    99,    26,     0,     0,    28,     0,     4,
       5,  -342,     0,     0,    93,     0,    34,  -316,     0,    35,
      36,     0,     0,     0,  -307,    38,     0,     0,     0,  -313,
    -310,  -316,    16,    17,     0,    99,     0,     0,     0,     0,
       0,     4,     5,     0,     0,     0,     0,    26,     0,     0,
      28,     0,     0,     0,  -342,     0,     0,   538,     0,    34,
    -316,  -307,    35,    36,    16,    17,     0,  -307,    38,     0,
       0,     0,  -313,  -310,  -316,     0,     0,     0,     0,    26,
       0,     0,    28,     0,     0,     0,  -342,     0,     0,    93,
       0,    34,  -316,     0,    35,    36,    16,    17,     0,  -307,
      38,     0,     0,     0,  -313,  -310,  -316,     0,     0,     0,
       0,    26,     0,     0,    28,     0,     0,     0,     0,     0,
       0,    93,     0,    34,     0,     0,    35,    36,     0,     0,
       0,     0,    38
};

static const yytype_int16 yycheck[] =
{
       1,   164,   103,    13,   321,    82,     1,   220,   471,   222,
     231,    20,    13,   247,   886,     8,   760,   212,   345,     6,
       7,   803,     6,     7,   128,    32,   739,     4,   803,   510,
     458,   806,    33,    20,   520,    22,    20,   465,   377,   343,
      27,     4,   237,     4,    34,     4,    36,   254,    38,    34,
     110,   272,    34,   250,   131,    58,   253,    13,   502,    58,
       4,    33,    33,     4,   403,    63,    34,   516,    56,    34,
     519,    87,     4,    94,    63,    89,    59,    33,    59,   139,
      76,   525,    93,    34,   105,     4,   399,   282,    94,    87,
      89,    87,     4,     0,   108,    58,   107,   100,    87,    96,
      34,   100,   108,    90,    89,     4,     4,    95,    59,   110,
     982,    94,   825,    94,    60,   102,   123,   545,     4,   106,
      90,   103,   132,     4,    10,    11,   103,    97,   609,    97,
      89,   132,    97,    87,   135,   462,   463,   100,   139,    85,
     626,   627,   103,    94,   109,    89,   250,   368,    89,   253,
      96,   152,    96,   140,   110,    96,   140,    89,    90,   486,
      94,   168,   169,   170,    99,   172,   101,   139,   139,   618,
      89,   105,   232,    10,    11,    94,   132,    89,   641,    65,
      66,   625,    94,   139,    58,   392,   393,   384,   492,   528,
     424,    89,    90,    87,    80,   917,    90,   919,   942,   189,
     190,   191,   192,   516,    90,    59,   519,   194,    60,    95,
      90,  1083,   925,   273,    94,    89,   110,   530,    70,   220,
      94,   222,    89,    94,   551,   212,   100,    79,    65,    66,
     231,   232,   660,    94,   105,   102,   103,   104,   239,    94,
      94,   568,   569,    80,   725,    94,    87,    89,   734,    90,
     237,  1026,    94,   681,    95,    92,   477,   244,   479,    96,
      97,    89,    94,   590,    25,    26,   367,   268,    96,   111,
    1014,   272,   273,   105,   495,   231,   232,    87,   991,  1151,
     384,   385,   386,   239,    94,   272,   293,   731,   272,   296,
      94,    52,   299,   488,  1076,   282,   268,   268,   505,   292,
      87,   273,   273,    90,    94,   618,   619,   620,    90,    99,
      97,    72,   268,    95,    94,   536,   272,   273,    67,   532,
     533,   311,    94,   110,   314,   105,    94,    87,   315,    90,
      79,  1203,    93,   105,   661,    94,    85,   105,     4,   100,
      87,   305,   306,    90,    10,    11,   105,    87,    95,    87,
      90,    97,    90,    87,   341,    95,    90,    95,    99,   105,
      90,    95,   349,    87,    94,   349,   587,   368,    34,    87,
      97,    95,    90,    95,   701,    90,     4,    95,   105,    94,
      97,    97,    10,    11,    97,    97,    97,    97,   105,   105,
     377,    87,   105,   105,   105,   105,   383,    59,    94,    65,
      66,    92,    64,   866,   405,    96,   413,    95,   395,   643,
     405,    89,   368,   400,    80,    89,   403,    69,    96,    71,
     407,    87,    96,    89,    90,    91,   527,    87,    92,    95,
      90,    97,    96,   420,   100,    90,   420,    65,    66,    94,
      87,    97,    91,    90,   110,    94,   433,   718,    88,   720,
     187,   188,    80,   780,    96,   100,    18,    90,   445,    87,
      90,   105,    90,    91,   791,   106,    89,    95,   105,   546,
      91,    95,   100,    99,   687,   688,   477,    99,   479,   466,
     467,    97,   110,   467,    99,     4,    95,   105,   497,   476,
      87,    10,    11,    26,   495,    90,    95,   105,    87,    95,
      94,   488,    95,    94,    94,    87,    90,    99,     4,    87,
     497,     4,     4,   497,    10,    11,    87,   504,    10,    11,
     100,   477,    18,   479,    87,   100,   100,   536,   100,    25,
      34,   532,   533,    91,    95,   536,    76,    79,    98,   495,
      94,   528,    23,    26,    24,    97,    65,    66,    96,   536,
      93,   558,   536,    89,   541,  1018,   107,     4,    34,    93,
      34,    80,    34,    34,    60,    34,    34,    34,    87,    65,
      66,    90,   107,    65,    66,   101,    95,    96,   565,   680,
     536,    99,    78,     4,    80,   686,   587,    83,    80,    85,
     105,    87,    87,    89,    90,    87,    92,    89,    90,    95,
      96,    97,    34,    95,    96,   101,   102,   103,   104,   105,
     106,   107,    87,    99,    87,   111,     4,     4,    88,     4,
      97,     4,    10,    11,    90,    88,    91,     4,  1091,   616,
      18,   587,   949,    94,    94,    94,    90,    25,    90,   101,
     650,    64,    95,    94,    88,    76,     4,    96,    87,   650,
       4,    94,    26,    94,    90,    95,    10,    11,   871,    43,
      94,    91,    64,   876,    90,    94,    91,    87,   110,     4,
      64,   658,    60,    90,    96,    19,    95,    65,    66,    34,
      34,    88,    97,     4,    34,   672,   687,   688,    34,    34,
      78,    34,    80,    90,   650,    83,    88,    85,    34,    87,
     101,    89,    90,    34,    92,    87,    96,    95,    96,    88,
      96,    65,    66,   101,   102,   103,   104,   105,   106,   107,
      95,    94,    89,   111,    88,    88,    80,    96,     4,    58,
      98,    96,    43,    87,    10,    11,    90,    96,    92,    87,
      89,    95,    95,    97,   751,   755,   959,   960,   108,    89,
     851,    34,    99,    87,   755,   109,   110,    99,    34,    87,
     101,    99,    95,    88,    96,   752,    88,    94,   981,    95,
       4,   758,    91,    91,   758,   938,    10,    11,    95,    91,
     767,    90,   769,   770,   997,   772,   999,   100,  1001,    65,
      66,    96,   100,    88,    87,    95,    88,    91,    94,   755,
      91,    91,     4,    91,    80,    87,    95,    88,    10,    11,
      55,    87,    87,    89,    90,    91,   100,   804,    88,    95,
     804,    97,    19,    58,   100,     4,   102,    88,    91,    94,
       4,    65,    66,    99,   110,    91,    10,    11,    87,  1052,
       4,     4,   100,  1006,    96,    99,    80,    10,    11,    81,
      88,    87,    26,    87,    96,    96,    90,    91,    89,    89,
      89,    95,   849,    65,    66,   849,   100,    88,     4,    88,
     871,    99,    99,    96,    96,   876,   110,    68,    80,    87,
      87,    96,    88,    87,   110,    87,   111,    90,    90,    91,
      90,    65,    66,    95,   111,   100,    94,    98,   100,    34,
      96,    96,    65,    66,    96,    99,    80,    96,   110,    91,
     100,    91,    88,    87,   100,    89,    90,    80,    99,    88,
      83,    95,    99,    97,     4,    91,    89,    90,     4,    92,
      88,  1094,    95,    96,    10,    11,    96,    91,   101,   102,
     103,   104,    18,    87,   107,    94,    89,    88,    64,    25,
      88,    96,    94,    87,   105,    87,    96,    87,   959,   960,
     108,     4,    89,    87,   103,    88,    99,    10,    11,    91,
    1133,   108,    89,    87,    89,    18,    59,   108,    99,    99,
     981,    88,    25,    59,  1197,    96,    58,    89,    88,    65,
      66,    99,    96,    60,   100,  1208,   997,    96,   999,    90,
    1001,    91,    78,   990,    80,   100,    88,    83,    95,    87,
      87,    87,    87,    89,    90,    34,    92,    96,    94,    95,
      96,    89,    65,    66,    88,   101,   102,   103,   104,   105,
     106,   107,   108,    96,   105,    78,    97,    80,    88,    91,
      83,    89,    87,    59,    87,    87,    89,    90,    88,    92,
      91,  1052,    95,    96,    97,    91,    59,   108,   101,   102,
     103,   104,   105,   106,   107,   108,     4,  1054,    90,    95,
      18,    94,    10,    11,    58,    89,    94,  1064,    92,    93,
      18,    68,    96,    87,    89,    87,   100,    25,   102,   103,
     104,   105,   106,   107,    88,    96,    89,    87,     4,    87,
      96,   108,   108,    89,    10,    11,    89,   105,    59,    87,
      87,    91,  1099,    94,  1101,     4,    88,    88,     4,    87,
      64,    26,    95,   105,    10,    11,   100,    65,    66,    94,
      94,   110,    94,   100,    91,    88,    99,    87,    94,    88,
      78,    96,    80,    88,   105,    83,    88,    94,    91,    87,
     109,    89,    90,    94,    92,    91,   108,    95,    96,    65,
      66,    94,    94,   101,   102,   103,   104,   105,   106,   107,
     108,     4,    89,    88,    80,    99,    88,    10,    11,    65,
      66,    87,    88,    89,    90,    18,    99,    20,    94,    95,
      88,    87,    25,    87,    80,    92,  1197,    83,   108,    89,
     103,    88,    87,    89,    90,    59,    92,  1208,    91,    95,
      96,    91,    59,   108,    87,   101,   102,   103,   104,    88,
     108,    54,    55,    56,    57,    87,    94,    60,    61,    62,
      88,   101,    65,    66,    67,    26,    91,    70,    91,   111,
      73,    74,    75,    95,    77,    78,    79,    80,    88,    82,
      83,    84,    85,    86,    87,    90,    89,    90,    91,    92,
      88,    94,    95,    96,    97,    98,    88,    94,   101,   102,
     103,   104,   105,   106,   107,     4,    91,    34,    94,    88,
      87,    10,    11,    88,     4,    99,    99,    97,   100,    18,
      11,    97,    96,    88,    97,    95,    25,    99,    87,    89,
     108,    93,    88,    91,    88,    88,    91,    69,   101,    88,
      92,    91,    99,    91,    91,    91,    87,    91,    88,    88,
      95,    94,    87,    91,    11,    54,    55,    56,    57,    95,
      97,    91,    61,    62,    97,    64,    65,    66,    89,    94,
      69,    94,    71,    90,   108,    74,    75,   108,    77,    78,
      79,    80,    90,    82,    83,    84,     4,    89,    87,   108,
      89,    90,    91,    92,    88,    94,    95,    96,    97,    98,
      59,    88,   101,   102,   103,   104,   105,   106,   107,     4,
      91,    88,    88,    99,    93,    10,    11,    90,   111,    97,
     100,    88,    90,    18,    99,    88,   100,    91,    90,    95,
      25,    96,    18,    34,    95,   105,   108,   108,    94,    94,
      88,    88,    96,    87,    90,    56,    87,    34,    91,    89,
      88,    96,    18,   111,    88,   108,    95,    99,    94,    54,
      55,    56,    57,    96,    94,   100,    61,    62,    63,    64,
      65,    66,   100,    99,   111,    91,    97,    87,    91,    74,
      75,   100,    77,    78,    79,    80,   100,    82,    83,    84,
      97,   108,    87,    92,    89,    90,    91,    92,    90,    94,
      95,    96,    97,    98,    34,    96,   101,   102,   103,   104,
     105,   106,   107,     4,    96,    95,    91,    94,    91,    10,
      11,    88,    87,   108,    59,    99,    87,    18,    91,     4,
      88,    99,     4,    97,    25,    90,    90,     4,    91,   111,
     100,    87,    89,    91,    88,    58,   108,    87,    34,    94,
      88,    34,    91,    95,    91,    96,    59,    88,     4,    91,
      89,    94,   105,    54,    55,    56,    57,    91,    90,    88,
      61,    62,     4,    64,    65,    66,    99,    88,    10,    11,
     100,    88,    97,    74,    75,    91,    77,    78,    79,    80,
      92,    82,    83,    84,    34,    91,    87,    88,    89,    90,
      91,    92,    64,    94,    95,    96,    97,    98,    43,    91,
     101,   102,   103,   104,   105,   106,   107,     4,    96,    87,
      91,  1135,  1138,    10,    11,   152,   935,  1061,   782,   977,
     887,    18,   982,    65,    66,  1146,   405,  1146,    25,   886,
     803,   885,  1028,    62,  1183,    62,   530,   173,    80,  1076,
    1076,   620,   681,    28,   445,    87,  1084,    89,    90,    91,
     289,   658,   386,    95,   291,   183,   673,    54,    55,    56,
      57,  1013,   184,    -1,    61,    62,     4,    64,    65,    66,
      -1,    -1,    10,    11,    -1,    -1,    -1,    74,    75,    -1,
      77,    78,    79,    80,    -1,    82,    83,    84,    -1,    -1,
      87,    -1,    89,    90,    91,    92,    -1,    94,    95,    96,
      97,    98,    -1,    -1,   101,   102,   103,   104,   105,   106,
     107,     4,    -1,    -1,    -1,    -1,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    65,    66,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    89,    90,    -1,    -1,    -1,    -1,    95,    -1,    -1,
      -1,    54,    55,    56,    57,    -1,    -1,    -1,    61,    62,
      -1,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    75,    -1,    77,    78,    79,    80,    -1,    82,
      83,    84,    -1,    -1,    87,    -1,    89,    90,    91,    92,
      -1,    94,    95,    96,    97,    98,    -1,    -1,   101,   102,
     103,   104,   105,   106,   107,     4,    -1,    -1,    -1,    -1,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,
      -1,    -1,    -1,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    -1,    -1,    54,    55,    56,    57,    25,
      -1,    -1,    61,    62,    -1,    -1,    65,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    75,    -1,    77,    78,
      -1,    80,    -1,    82,    83,    84,    -1,    -1,    87,    -1,
      89,    90,    91,    92,    60,    94,    95,    96,    -1,    65,
      66,    -1,   101,   102,   103,   104,   105,   106,   107,    -1,
      -1,    -1,    78,    -1,    80,    -1,    -1,    83,    -1,    85,
      -1,    87,    88,    89,    90,    -1,    92,    -1,    -1,    95,
      96,    97,    -1,    -1,    -1,   101,   102,   103,   104,   105,
     106,   107,     4,    -1,    -1,    -1,    -1,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      52,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    78,    -1,    80,    -1,
      -1,    83,    -1,    -1,    -1,    87,    -1,    89,    90,    -1,
      92,    93,    -1,    95,    96,    65,    66,    -1,    -1,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    78,     4,
      80,    -1,    -1,    83,    -1,    10,    11,    87,    -1,    89,
      90,    -1,    92,    18,    94,    95,    96,    97,    -1,    99,
      25,   101,   102,   103,   104,   105,   106,   107,    -1,    -1,
      -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    66,    -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,
      -1,    10,    11,    78,    -1,    80,    -1,    -1,    83,    18,
      -1,    -1,    87,    88,    89,    90,    25,    92,    -1,    94,
      95,    96,    97,    65,    66,    -1,   101,   102,   103,   104,
     105,   106,   107,    -1,    -1,    -1,    78,    -1,    80,    -1,
      -1,    83,    -1,    -1,    -1,    87,    88,    89,    90,    -1,
      92,    -1,    94,    95,    96,    97,    65,    66,    -1,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    -1,    78,
       4,    80,    -1,    -1,    83,    -1,    10,    11,    87,    -1,
      89,    90,    -1,    92,    18,    -1,    95,    96,    97,    -1,
      99,    25,   101,   102,   103,   104,   105,   106,   107,    -1,
      -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    66,    -1,    -1,    -1,     4,    -1,    -1,    -1,
      -1,    -1,    10,    11,    78,    -1,    80,    -1,    -1,    83,
      18,    -1,    -1,    87,    -1,    89,    90,    25,    92,    -1,
      -1,    95,    96,    97,    65,    66,   100,   101,   102,   103,
     104,   105,   106,   107,    -1,    -1,    -1,    78,    -1,    80,
      -1,    -1,    83,    -1,    -1,    -1,    87,    88,    89,    90,
      -1,    92,    -1,    94,    95,    96,    64,    65,    66,    -1,
     101,   102,   103,   104,   105,   106,   107,    -1,    -1,    -1,
      78,     4,    80,    -1,    -1,    83,    -1,    10,    11,    87,
      -1,    89,    90,    -1,    92,    18,    -1,    95,    96,    97,
      -1,    -1,    25,   101,   102,   103,   104,   105,   106,   107,
      -1,    -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    80,    -1,    -1,
      83,    -1,    -1,    -1,    87,    -1,    89,    90,    -1,    92,
      -1,    94,    95,    96,    97,    65,    66,    -1,   101,   102,
     103,   104,   105,   106,   107,    -1,    -1,    -1,    78,    -1,
      80,    -1,    -1,    83,    -1,    -1,    -1,    87,    -1,    89,
      90,    -1,    92,    -1,    94,    95,    96,    -1,    -1,    99,
      -1,   101,   102,   103,   104,   105,   106,   107,     4,    -1,
      -1,    -1,    -1,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,    -1,    -1,    -1,    -1,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    52,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      66,    -1,    -1,    -1,     4,    -1,    72,    -1,    -1,    -1,
      10,    11,    78,    -1,    80,    -1,    -1,    83,    18,    -1,
      -1,    -1,    -1,    89,    90,    25,    92,    93,    -1,    95,
      96,    65,    66,    -1,    -1,   101,   102,   103,   104,    -1,
     106,   107,    -1,    -1,    78,    -1,    80,    -1,    -1,    83,
      -1,    -1,    -1,    87,    -1,    89,    90,    91,    92,    -1,
      94,    95,    96,    -1,    -1,    65,    66,   101,   102,   103,
     104,   105,   106,   107,    -1,    -1,    -1,    -1,    78,     4,
      80,    -1,    -1,    83,    -1,    10,    11,    87,    -1,    89,
      90,    91,    92,    18,    -1,    95,    96,    97,    -1,    -1,
      25,   101,   102,   103,   104,   105,   106,   107,    -1,    -1,
      -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    66,    -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,
      10,    11,    -1,    78,    -1,    80,    -1,    -1,    83,    -1,
      -1,    -1,    87,    -1,    89,    90,    58,    92,    -1,    -1,
      95,    96,    97,    65,    66,    -1,   101,   102,   103,   104,
     105,   106,   107,    -1,    -1,    -1,    78,     4,    80,    -1,
      -1,    83,    -1,    10,    11,    87,    -1,    89,    90,    -1,
      92,    18,    -1,    95,    96,    65,    66,    -1,    25,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    -1,     4,
      80,    -1,    -1,    83,    -1,    10,    11,    -1,    -1,    -1,
      90,    -1,    92,    18,    -1,    95,    96,    -1,    -1,    -1,
      25,   101,    -1,   103,    -1,    -1,    -1,    -1,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,     4,    80,    -1,    -1,    83,    -1,    10,    11,
      87,    -1,    89,    90,    91,    92,    18,    -1,    95,    96,
      65,    66,    -1,    25,   101,   102,   103,   104,   105,   106,
     107,    -1,    -1,    78,     4,    80,    -1,    -1,    83,    -1,
      10,    11,    87,    88,    89,    90,    -1,    92,    18,    -1,
      95,    96,    -1,    -1,    -1,    25,   101,   102,   103,   104,
     105,   106,   107,    65,    66,    -1,    -1,    -1,     4,    -1,
      -1,    -1,    -1,    -1,    10,    11,    78,    -1,    80,    -1,
      -1,    83,    18,    -1,    -1,    87,    -1,    89,    90,    25,
      92,    -1,    -1,    95,    96,    65,    66,    99,    -1,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    78,    -1,
      80,    -1,    -1,    83,    -1,    -1,    -1,    87,    -1,    89,
      90,    -1,    92,    -1,    -1,    95,    96,    97,    -1,    65,
      66,   101,   102,   103,   104,   105,   106,   107,    -1,    -1,
      -1,    -1,    78,     4,    80,    -1,    -1,    83,    -1,    10,
      11,    87,    -1,    89,    90,    91,    92,    18,    -1,    95,
      96,    -1,    -1,    -1,    25,   101,   102,   103,   104,   105,
     106,   107,    -1,    -1,    -1,    -1,     4,    -1,    -1,    -1,
      -1,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    66,    -1,    -1,    -1,     4,
      -1,    -1,    -1,    -1,    -1,    10,    11,    78,    -1,    80,
      -1,    -1,    83,    18,    -1,    -1,    87,    -1,    89,    90,
      25,    92,    -1,    -1,    95,    96,    97,    65,    66,    -1,
     101,   102,   103,   104,   105,   106,   107,    -1,    -1,    -1,
      78,    -1,    80,    -1,    -1,    83,    -1,    -1,    -1,    87,
      -1,    89,    90,    -1,    92,    -1,    -1,    95,    96,    97,
      65,    66,    -1,   101,   102,   103,   104,   105,   106,   107,
      -1,    -1,    -1,    78,     4,    80,    -1,    -1,    83,    -1,
      10,    11,    87,    -1,    89,    90,    -1,    92,    18,    -1,
      95,    96,    -1,    -1,    99,    25,   101,   102,   103,   104,
     105,   106,   107,    -1,    -1,    -1,    -1,     4,    -1,    -1,
      -1,    -1,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      80,    -1,    -1,    83,    -1,    -1,    -1,    87,    -1,    89,
      90,    -1,    92,    -1,    -1,    95,    96,    97,    65,    66,
      -1,   101,   102,   103,   104,   105,   106,   107,    -1,    -1,
      -1,    78,     4,    80,    -1,    -1,    83,    -1,    10,    11,
      87,    -1,    89,    90,    -1,    92,    18,    -1,    95,    96,
      -1,    -1,    99,    25,   101,   102,   103,   104,   105,   106,
     107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,
      -1,    -1,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    66,    -1,    -1,    -1,    25,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    80,    -1,
      -1,    83,    -1,    -1,    -1,    87,    -1,    89,    90,    -1,
      92,    -1,    -1,    95,    96,    52,    -1,    -1,   100,   101,
     102,   103,   104,   105,   106,   107,     4,    -1,    65,    66,
      -1,    -1,    10,    11,    -1,    72,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    80,    -1,    -1,    83,    25,    -1,    -1,
      -1,    -1,    89,    90,    -1,    92,    93,    -1,    95,    96,
      -1,    -1,    -1,    -1,   101,   102,   103,   104,    -1,   106,
     107,     4,    -1,    -1,    -1,    -1,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    65,    66,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    80,    -1,    -1,    83,    -1,    -1,    -1,    87,
      -1,    89,    90,    -1,    92,    -1,    -1,    95,    96,    -1,
      -1,    -1,    -1,   101,   102,   103,   104,   105,   106,   107,
       4,    -1,    65,    66,    -1,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    78,    -1,    80,    -1,    -1,
      83,    25,    -1,    -1,    87,    -1,    89,    90,    -1,    92,
      -1,    -1,    95,    96,    -1,    -1,    -1,    -1,   101,   102,
     103,   104,   105,   106,   107,     4,    -1,    -1,    -1,    -1,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    65,    66,    -1,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    80,    -1,    -1,    83,
      -1,    -1,    -1,    87,    -1,    89,    90,    -1,    92,     4,
      -1,    95,    96,    -1,    -1,    10,    11,   101,   102,   103,
     104,   105,   106,   107,    -1,    -1,    65,    66,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    83,    -1,    -1,    -1,    87,    -1,
      89,    90,     4,    92,    -1,    -1,    95,    96,    10,    11,
      -1,    -1,   101,   102,   103,   104,   105,   106,   107,    -1,
      65,    66,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,    80,    -1,    -1,    83,    -1,
      10,    11,    87,    -1,    89,    90,    91,    92,    -1,    -1,
      95,    96,    -1,    -1,    -1,    25,   101,   102,   103,   104,
     105,   106,   107,    65,    66,    -1,     4,    -1,    -1,    -1,
      -1,    -1,    10,    11,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    83,    -1,    -1,    -1,    87,    -1,    89,    90,    91,
      92,    -1,    -1,    95,    96,    65,    66,    -1,    -1,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    -1,     4,
      80,    -1,    -1,    83,    -1,    10,    11,    87,    -1,    89,
      90,    91,    92,    -1,    -1,    95,    96,    65,    66,    -1,
      25,   101,   102,   103,   104,   105,   106,   107,    -1,    -1,
      -1,     4,    80,    -1,    -1,    83,    -1,    10,    11,    87,
      -1,    89,    90,    -1,    92,    93,    -1,    95,    96,    -1,
      -1,    -1,    -1,   101,   102,   103,   104,   105,   106,   107,
      65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,    80,    -1,    -1,    83,    -1,
      10,    11,    87,    -1,    89,    90,    -1,    92,    -1,    -1,
      95,    96,    65,    66,    -1,    25,   101,   102,   103,   104,
     105,   106,   107,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      83,    -1,    -1,    -1,    87,    -1,    -1,    90,     4,    92,
      93,    94,    95,    96,    10,    11,    -1,   100,   101,    -1,
      -1,    -1,   105,   106,   107,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      80,    -1,    -1,    83,    -1,    -1,    -1,    87,    -1,    -1,
      90,     4,    92,    93,    -1,    95,    96,    10,    11,    -1,
     100,   101,    -1,    -1,    -1,   105,   106,   107,    -1,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     4,    80,    -1,    -1,    83,    -1,    10,
      11,    87,    -1,    -1,    90,    -1,    92,    93,    -1,    95,
      96,    -1,    -1,    -1,   100,   101,    -1,    -1,    -1,   105,
     106,   107,    65,    66,    -1,     4,    -1,    -1,    -1,    -1,
      -1,    10,    11,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      83,    -1,    -1,    -1,    87,    -1,    -1,    90,    -1,    92,
      93,    94,    95,    96,    65,    66,    -1,   100,   101,    -1,
      -1,    -1,   105,   106,   107,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    83,    -1,    -1,    -1,    87,    -1,    -1,    90,
      -1,    92,    93,    -1,    95,    96,    65,    66,    -1,   100,
     101,    -1,    -1,    -1,   105,   106,   107,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    92,    -1,    -1,    95,    96,    -1,    -1,
      -1,    -1,   101
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    87,   113,     4,    10,    11,    18,    20,    25,    54,
      55,    56,    57,    60,    61,    62,    65,    66,    67,    70,
      73,    74,    75,    77,    78,    79,    80,    82,    83,    84,
      85,    86,    89,    90,    92,    95,    96,    98,   101,   114,
     115,   116,   117,   118,   119,   121,   122,   123,   124,   125,
     126,   127,   134,   137,   138,   139,   141,   144,   180,   181,
     182,   183,   197,   198,   199,   201,   202,   208,   209,   220,
     221,   222,   223,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   245,   246,   261,   274,   275,   279,     0,
      99,    96,     4,    90,   205,   206,   208,   245,   206,     4,
     222,    94,    76,    87,    94,   131,    87,     4,    87,    89,
      90,   245,   268,   271,   272,   273,   279,    94,   277,    94,
       4,    90,    94,    89,   145,   204,   206,   208,    87,     4,
     208,   242,    60,    70,    79,    99,   233,     4,    87,    90,
     102,   110,   247,   249,   254,   268,   274,   275,   279,   239,
      95,   239,    95,   239,    88,    96,    97,   100,    79,    85,
     183,   199,    90,    94,    18,    90,    90,    25,    26,    52,
      72,    90,    93,   100,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   106,   105,    93,   107,    92,    96,    89,
     102,   103,   104,    89,    87,    90,    95,   251,   105,    89,
      92,    93,    96,   100,   102,   103,   104,   105,   106,   107,
     120,    91,    87,    90,    95,   251,   208,    99,    87,    90,
      99,    97,    99,    95,   208,   201,    95,   208,   276,    87,
      90,    87,    90,   272,    26,    90,    97,    87,    95,    95,
     105,    95,    87,    94,    95,   233,    99,    94,    87,     4,
      89,   210,   211,   212,   213,   214,   215,   216,   217,   219,
      90,    87,   268,    90,    94,     4,    64,    79,    90,   116,
     200,    87,    87,    90,   274,   206,    87,   100,   100,   100,
      34,    91,    87,    95,    95,   117,    98,    76,   128,    94,
     220,    23,    24,    26,   233,   233,    25,   233,    97,    34,
     233,   234,    96,   235,   236,    93,   107,   238,   238,   239,
     239,   103,   239,   239,    89,    87,    94,   206,   243,   244,
      87,    90,     4,    87,    90,    95,   280,    34,    89,    34,
      93,    34,    34,    34,    34,   103,    34,    34,    34,   107,
     101,    99,   243,    87,     4,   105,    87,    34,    87,    87,
     200,    99,   200,     4,    88,     4,   132,   133,    90,    88,
      94,   269,    97,    87,   270,   271,    91,   101,    94,    94,
     243,     4,   278,   279,    90,     4,    90,    95,   140,   208,
      64,    94,   203,    76,    89,    94,   216,   219,    88,   216,
     217,   219,    89,    96,    96,    34,    94,   105,   196,    87,
      94,    26,    94,    95,    90,    43,    69,    71,   142,   143,
      94,   203,     4,    89,   204,   206,    91,    64,    94,   256,
      87,   248,    90,   250,   110,   252,    91,   243,     4,    96,
      64,    90,   202,    19,   221,   222,   233,   233,    34,   233,
     237,   237,   239,   239,   208,    95,    88,    97,    94,   262,
     263,   264,     4,   205,    34,    34,    34,    34,    90,   208,
      88,   262,    97,   105,   280,    34,   101,    63,    87,   135,
      34,    87,    96,    96,    87,    95,    94,    95,    88,    89,
      88,    90,    94,   201,   271,    88,    97,    96,    87,    95,
      98,    96,    87,   140,    96,    58,    43,    95,   108,   208,
     216,   218,   219,   218,    99,    89,    89,   217,   103,   217,
      87,   208,    99,    94,   105,     4,    89,   185,   186,   187,
     188,   189,   190,   191,   192,   194,   208,   101,    95,   140,
      87,   114,    99,    99,   208,    96,    95,    88,    90,    94,
      91,    95,    88,   206,    91,    90,   100,   203,   100,    96,
      88,    97,    87,    95,    91,   208,    91,    91,    91,    88,
     244,    94,    95,    88,    87,   100,   261,    87,    97,   105,
      88,   280,   280,   207,   261,   208,   206,    19,   136,   136,
      58,     4,   208,   271,    88,   271,    91,    94,    99,    91,
      97,   280,    87,   243,     4,   100,   262,    96,    99,   271,
      81,   146,   204,    88,    96,   196,    89,   208,   217,    87,
      96,    94,   105,    89,   214,    99,    99,   195,    89,    94,
     191,   194,    88,   191,   192,   194,    89,    96,    96,    59,
      94,   196,    88,   201,   140,    96,   185,    68,   200,   200,
      87,    87,    88,    87,    96,    89,   208,   257,   258,   111,
      60,    85,   259,   260,   261,    90,   251,   111,   110,   255,
      90,    97,   280,    98,   100,    96,    96,    96,   233,    99,
      96,     4,    89,    90,   265,   266,   267,    91,    94,   208,
     100,    34,   280,   280,    91,    88,   100,    99,    99,    88,
      88,     4,    91,    96,    91,   271,    87,    89,   280,    94,
      88,    97,    64,    88,    94,    87,   105,    89,   100,   148,
     149,   150,   151,   168,   170,   171,    96,    96,    87,   108,
      87,    89,   214,   103,    99,    87,    88,   208,   108,   191,
     193,   194,   193,    91,    89,    89,   192,   103,   192,    87,
     108,    59,    59,    94,    99,    96,    99,    88,    58,   136,
     203,    89,    99,    96,   268,    60,    88,    96,   100,    91,
     258,   100,   261,   280,    88,    95,    87,    87,    87,    34,
      89,   208,    89,   265,    96,    96,    88,    97,   201,   207,
     105,   201,   200,   200,    88,    89,    87,    91,    59,    87,
      88,    97,   280,    91,    91,   108,    59,    90,    34,    97,
     109,   161,   162,    95,    18,   147,    58,    94,    68,    87,
      89,   215,    94,   105,   215,    87,    88,    94,   105,   214,
      96,   196,    89,    87,   192,    87,    96,    94,   105,    89,
     189,   105,   108,   108,    59,    87,    94,    87,    91,     4,
      88,    88,   233,   208,    87,    26,   268,   206,   259,   110,
     253,   100,    64,    95,    94,   208,    94,   208,   208,   100,
      94,   105,    99,    91,    88,   280,    87,   135,    87,    94,
      96,    88,    94,   280,    88,    91,    88,    94,    91,   109,
       4,    11,    65,    66,    80,    87,    90,    92,   110,   152,
     153,   155,   156,   157,   158,   160,   161,   162,   163,   164,
     165,   166,   167,   172,   176,   246,   206,   108,   161,    94,
     169,    94,    88,    99,    88,    99,    88,    87,   108,    87,
      92,    89,   189,   103,    91,    87,    88,    91,   105,   108,
      59,   108,    59,    87,    88,    87,    88,    94,   101,    26,
      91,   111,   206,    91,   201,    95,    88,    88,    88,    90,
      94,    91,    34,   136,    94,    88,    87,   200,    88,    99,
      99,   200,   100,     4,   169,   149,   168,    11,   158,    89,
      94,   111,   173,   175,    96,    97,    92,    96,    97,    90,
      95,    99,    95,   108,    88,    89,   190,    59,    94,   190,
      93,    87,    88,    94,   105,   189,    91,    88,    91,    88,
      92,    99,   143,    91,    88,   220,   101,    91,   259,    91,
      91,    87,   205,    95,    91,    88,    88,    94,    87,   200,
     200,    91,    97,   108,    91,   108,    89,    95,    94,    94,
      90,    11,   159,   159,    90,    91,    94,   177,   178,     4,
     200,   149,   170,    88,   108,    59,    88,   208,   189,    91,
      88,   200,    99,   200,    93,   200,    88,    90,   220,   111,
      97,    89,    96,    99,   100,     4,    89,   267,   259,    88,
     136,   100,    90,    88,    91,   161,    90,   174,   108,   175,
     108,    96,    95,    95,    94,    94,    96,   105,   108,    88,
      88,    87,   200,   208,    18,    90,    34,   133,    56,    87,
     208,    34,    96,    91,    88,    99,    95,    65,    66,    80,
     154,   155,   156,   246,    96,   111,    94,   111,   100,   100,
       4,   149,   179,    94,   108,   178,   108,    94,    91,    99,
     136,    88,   220,    18,    87,    56,     4,    89,    90,   129,
     130,   208,    97,   208,    91,   100,   100,    97,   108,    92,
      90,    34,    96,    96,    95,    91,    94,    91,   108,    87,
      88,    99,    91,   220,    59,   129,    87,   130,    97,    88,
      99,    90,   164,   165,    90,   111,    91,   100,   149,   108,
      59,    64,   184,    87,    89,    91,    88,    58,    87,    94,
      88,    34,    91,    96,    34,    91,    59,    88,   184,    89,
       4,    94,    91,    99,   100,    91,   105,   200,    88,    88,
      88,    97,   149,    92,    90,   200,    91,    34,    91,    64,
      91,    43,    96,    91,    87
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
# if YYLTYPE_IS_TRIVIAL
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
  if (yyn == YYPACT_NINF)
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
      

/* Line 1455 of yacc.c  */
#line 3117 "y.tab.c"
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



/* Line 1675 of yacc.c  */
#line 695 "pyparsergen.y"


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
