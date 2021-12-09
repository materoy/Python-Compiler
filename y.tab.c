/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
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

#line 103 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    DIGITS = 258,                  /* DIGITS  */
    NAME = 259,                    /* NAME  */
    PLUS = 260,                    /* PLUS  */
    MINUS = 261,                   /* MINUS  */
    MUL = 262,                     /* MUL  */
    DIVIDE = 263,                  /* DIVIDE  */
    NUM = 264,                     /* NUM  */
    STRING = 265,                  /* STRING  */
    INTEGER = 266,                 /* INTEGER  */
    SPECIAL = 267,                 /* SPECIAL  */
    NL = 268,                      /* NL  */
    SPACE = 269,                   /* SPACE  */
    KEYWORD = 270,                 /* KEYWORD  */
    SPECIAL_START = 271,           /* SPECIAL_START  */
    SPECIAL_END = 272,             /* SPECIAL_END  */
    IF = 273,                      /* IF  */
    ELSE = 274,                    /* ELSE  */
    WHILE = 275,                   /* WHILE  */
    SEP = 276,                     /* SEP  */
    END = 277,                     /* END  */
    OR = 278,                      /* OR  */
    AND = 279,                     /* AND  */
    NOT = 280,                     /* NOT  */
    IN = 281,                      /* IN  */
    NOTIN = 282,                   /* NOTIN  */
    T = 283,                       /* T  */
    F = 284,                       /* F  */
    COLON = 285,                   /* COLON  */
    SQUAREBRACKET_START = 286,     /* SQUAREBRACKET_START  */
    SQUAREBRACKET_END = 287,       /* SQUAREBRACKET_END  */
    MOD = 288,                     /* MOD  */
    EQUAL = 289,                   /* EQUAL  */
    PLUSEQUAL = 290,               /* PLUSEQUAL  */
    PRINT = 291,                   /* PRINT  */
    COMMENT = 292,                 /* COMMENT  */
    RANGE = 293,                   /* RANGE  */
    SINGLEQUOTE = 294,             /* SINGLEQUOTE  */
    DOUBLEQUOTE = 295,             /* DOUBLEQUOTE  */
    EXPONENTIAL = 296,             /* EXPONENTIAL  */
    COMMA = 297,                   /* COMMA  */
    INDENT = 298,                  /* INDENT  */
    LIST = 299,                    /* LIST  */
    DIVIDEEQUAL = 300,             /* DIVIDEEQUAL  */
    MINUSEQUAL = 301,              /* MINUSEQUAL  */
    MULEQUAL = 302,                /* MULEQUAL  */
    LESSTHAN = 303,                /* LESSTHAN  */
    LESSTHANEQUAL = 304,           /* LESSTHANEQUAL  */
    GREATERTHAN = 305,             /* GREATERTHAN  */
    GREATERTHANEQUAL = 306,        /* GREATERTHANEQUAL  */
    DOUBLEEQUAL = 307,             /* DOUBLEEQUAL  */
    GLOBAL = 308,                  /* GLOBAL  */
    YIELD = 309,                   /* YIELD  */
    IMPORT = 310,                  /* IMPORT  */
    RETURN = 311,                  /* RETURN  */
    AS = 312,                      /* AS  */
    TYPE_COMMENT = 313,            /* TYPE_COMMENT  */
    FOR = 314,                     /* FOR  */
    DEL = 315,                     /* DEL  */
    NONLOCAL = 316,                /* NONLOCAL  */
    ELIF = 317,                    /* ELIF  */
    NEWLINE = 318,                 /* NEWLINE  */
    TRUE = 319,                    /* TRUE  */
    NONE = 320,                    /* NONE  */
    CLASS = 321,                   /* CLASS  */
    DEDENT = 322,                  /* DEDENT  */
    FINALLY = 323,                 /* FINALLY  */
    WITH = 324,                    /* WITH  */
    EXPECT = 325,                  /* EXPECT  */
    IS = 326,                      /* IS  */
    MATCH = 327,                   /* MATCH  */
    CONTINUE = 328,                /* CONTINUE  */
    RAISE = 329,                   /* RAISE  */
    FROM = 330,                    /* FROM  */
    PASS = 331,                    /* PASS  */
    LAMBDA = 332,                  /* LAMBDA  */
    DEF = 333,                     /* DEF  */
    FALSE = 334,                   /* FALSE  */
    CASE = 335,                    /* CASE  */
    ASSERT = 336,                  /* ASSERT  */
    AWAIT = 337,                   /* AWAIT  */
    BREAK = 338,                   /* BREAK  */
    ASYNC = 339,                   /* ASYNC  */
    TRY = 340,                     /* TRY  */
    NLOOK = 341,                   /* NLOOK  */
    PLOOK = 342,                   /* PLOOK  */
    RARROW = 343,                  /* RARROW  */
    TILDE = 344,                   /* TILDE  */
    DOUBLESTAR = 345,              /* DOUBLESTAR  */
    DOUBLESLASH = 346,             /* DOUBLESLASH  */
    LEFTSHIFT = 347,               /* LEFTSHIFT  */
    RIGHTSHIFT = 348,              /* RIGHTSHIFT  */
    NOTEQUAL = 349,                /* NOTEQUAL  */
    EQUALTO = 350,                 /* EQUALTO  */
    GREATEREQUAL = 351,            /* GREATEREQUAL  */
    LESSEQUAL = 352,               /* LESSEQUAL  */
    COLONEQUAL = 353,              /* COLONEQUAL  */
    ELLIPSIS = 354,                /* ELLIPSIS  */
    DOT = 355,                     /* DOT  */
    LSQB = 356,                    /* LSQB  */
    RSQB = 357,                    /* RSQB  */
    LBR = 358,                     /* LBR  */
    RBR = 359,                     /* RBR  */
    VBAR = 360,                    /* VBAR  */
    BXOR = 361,                    /* BXOR  */
    AMPER = 362                    /* AMPER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
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
#define GLOBAL 308
#define YIELD 309
#define IMPORT 310
#define RETURN 311
#define AS 312
#define TYPE_COMMENT 313
#define FOR 314
#define DEL 315
#define NONLOCAL 316
#define ELIF 317
#define NEWLINE 318
#define TRUE 319
#define NONE 320
#define CLASS 321
#define DEDENT 322
#define FINALLY 323
#define WITH 324
#define EXPECT 325
#define IS 326
#define MATCH 327
#define CONTINUE 328
#define RAISE 329
#define FROM 330
#define PASS 331
#define LAMBDA 332
#define DEF 333
#define FALSE 334
#define CASE 335
#define ASSERT 336
#define AWAIT 337
#define BREAK 338
#define ASYNC 339
#define TRY 340
#define NLOOK 341
#define PLOOK 342
#define RARROW 343
#define TILDE 344
#define DOUBLESTAR 345
#define DOUBLESLASH 346
#define LEFTSHIFT 347
#define RIGHTSHIFT 348
#define NOTEQUAL 349
#define EQUALTO 350
#define GREATEREQUAL 351
#define LESSEQUAL 352
#define COLONEQUAL 353
#define ELLIPSIS 354
#define DOT 355
#define LSQB 356
#define RSQB 357
#define LBR 358
#define RBR 359
#define VBAR 360
#define BXOR 361
#define AMPER 362

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_DIGITS = 3,                     /* DIGITS  */
  YYSYMBOL_NAME = 4,                       /* NAME  */
  YYSYMBOL_PLUS = 5,                       /* PLUS  */
  YYSYMBOL_MINUS = 6,                      /* MINUS  */
  YYSYMBOL_MUL = 7,                        /* MUL  */
  YYSYMBOL_DIVIDE = 8,                     /* DIVIDE  */
  YYSYMBOL_NUM = 9,                        /* NUM  */
  YYSYMBOL_STRING = 10,                    /* STRING  */
  YYSYMBOL_INTEGER = 11,                   /* INTEGER  */
  YYSYMBOL_SPECIAL = 12,                   /* SPECIAL  */
  YYSYMBOL_NL = 13,                        /* NL  */
  YYSYMBOL_SPACE = 14,                     /* SPACE  */
  YYSYMBOL_KEYWORD = 15,                   /* KEYWORD  */
  YYSYMBOL_SPECIAL_START = 16,             /* SPECIAL_START  */
  YYSYMBOL_SPECIAL_END = 17,               /* SPECIAL_END  */
  YYSYMBOL_IF = 18,                        /* IF  */
  YYSYMBOL_ELSE = 19,                      /* ELSE  */
  YYSYMBOL_WHILE = 20,                     /* WHILE  */
  YYSYMBOL_SEP = 21,                       /* SEP  */
  YYSYMBOL_END = 22,                       /* END  */
  YYSYMBOL_OR = 23,                        /* OR  */
  YYSYMBOL_AND = 24,                       /* AND  */
  YYSYMBOL_NOT = 25,                       /* NOT  */
  YYSYMBOL_IN = 26,                        /* IN  */
  YYSYMBOL_NOTIN = 27,                     /* NOTIN  */
  YYSYMBOL_T = 28,                         /* T  */
  YYSYMBOL_F = 29,                         /* F  */
  YYSYMBOL_COLON = 30,                     /* COLON  */
  YYSYMBOL_SQUAREBRACKET_START = 31,       /* SQUAREBRACKET_START  */
  YYSYMBOL_SQUAREBRACKET_END = 32,         /* SQUAREBRACKET_END  */
  YYSYMBOL_MOD = 33,                       /* MOD  */
  YYSYMBOL_EQUAL = 34,                     /* EQUAL  */
  YYSYMBOL_PLUSEQUAL = 35,                 /* PLUSEQUAL  */
  YYSYMBOL_PRINT = 36,                     /* PRINT  */
  YYSYMBOL_COMMENT = 37,                   /* COMMENT  */
  YYSYMBOL_RANGE = 38,                     /* RANGE  */
  YYSYMBOL_SINGLEQUOTE = 39,               /* SINGLEQUOTE  */
  YYSYMBOL_DOUBLEQUOTE = 40,               /* DOUBLEQUOTE  */
  YYSYMBOL_EXPONENTIAL = 41,               /* EXPONENTIAL  */
  YYSYMBOL_COMMA = 42,                     /* COMMA  */
  YYSYMBOL_INDENT = 43,                    /* INDENT  */
  YYSYMBOL_LIST = 44,                      /* LIST  */
  YYSYMBOL_DIVIDEEQUAL = 45,               /* DIVIDEEQUAL  */
  YYSYMBOL_MINUSEQUAL = 46,                /* MINUSEQUAL  */
  YYSYMBOL_MULEQUAL = 47,                  /* MULEQUAL  */
  YYSYMBOL_LESSTHAN = 48,                  /* LESSTHAN  */
  YYSYMBOL_LESSTHANEQUAL = 49,             /* LESSTHANEQUAL  */
  YYSYMBOL_GREATERTHAN = 50,               /* GREATERTHAN  */
  YYSYMBOL_GREATERTHANEQUAL = 51,          /* GREATERTHANEQUAL  */
  YYSYMBOL_DOUBLEEQUAL = 52,               /* DOUBLEEQUAL  */
  YYSYMBOL_GLOBAL = 53,                    /* GLOBAL  */
  YYSYMBOL_YIELD = 54,                     /* YIELD  */
  YYSYMBOL_IMPORT = 55,                    /* IMPORT  */
  YYSYMBOL_RETURN = 56,                    /* RETURN  */
  YYSYMBOL_AS = 57,                        /* AS  */
  YYSYMBOL_TYPE_COMMENT = 58,              /* TYPE_COMMENT  */
  YYSYMBOL_FOR = 59,                       /* FOR  */
  YYSYMBOL_DEL = 60,                       /* DEL  */
  YYSYMBOL_NONLOCAL = 61,                  /* NONLOCAL  */
  YYSYMBOL_ELIF = 62,                      /* ELIF  */
  YYSYMBOL_NEWLINE = 63,                   /* NEWLINE  */
  YYSYMBOL_TRUE = 64,                      /* TRUE  */
  YYSYMBOL_NONE = 65,                      /* NONE  */
  YYSYMBOL_CLASS = 66,                     /* CLASS  */
  YYSYMBOL_DEDENT = 67,                    /* DEDENT  */
  YYSYMBOL_FINALLY = 68,                   /* FINALLY  */
  YYSYMBOL_WITH = 69,                      /* WITH  */
  YYSYMBOL_EXPECT = 70,                    /* EXPECT  */
  YYSYMBOL_IS = 71,                        /* IS  */
  YYSYMBOL_MATCH = 72,                     /* MATCH  */
  YYSYMBOL_CONTINUE = 73,                  /* CONTINUE  */
  YYSYMBOL_RAISE = 74,                     /* RAISE  */
  YYSYMBOL_FROM = 75,                      /* FROM  */
  YYSYMBOL_PASS = 76,                      /* PASS  */
  YYSYMBOL_LAMBDA = 77,                    /* LAMBDA  */
  YYSYMBOL_DEF = 78,                       /* DEF  */
  YYSYMBOL_FALSE = 79,                     /* FALSE  */
  YYSYMBOL_CASE = 80,                      /* CASE  */
  YYSYMBOL_ASSERT = 81,                    /* ASSERT  */
  YYSYMBOL_AWAIT = 82,                     /* AWAIT  */
  YYSYMBOL_BREAK = 83,                     /* BREAK  */
  YYSYMBOL_ASYNC = 84,                     /* ASYNC  */
  YYSYMBOL_TRY = 85,                       /* TRY  */
  YYSYMBOL_NLOOK = 86,                     /* NLOOK  */
  YYSYMBOL_PLOOK = 87,                     /* PLOOK  */
  YYSYMBOL_RARROW = 88,                    /* RARROW  */
  YYSYMBOL_TILDE = 89,                     /* TILDE  */
  YYSYMBOL_DOUBLESTAR = 90,                /* DOUBLESTAR  */
  YYSYMBOL_DOUBLESLASH = 91,               /* DOUBLESLASH  */
  YYSYMBOL_LEFTSHIFT = 92,                 /* LEFTSHIFT  */
  YYSYMBOL_RIGHTSHIFT = 93,                /* RIGHTSHIFT  */
  YYSYMBOL_NOTEQUAL = 94,                  /* NOTEQUAL  */
  YYSYMBOL_EQUALTO = 95,                   /* EQUALTO  */
  YYSYMBOL_GREATEREQUAL = 96,              /* GREATEREQUAL  */
  YYSYMBOL_LESSEQUAL = 97,                 /* LESSEQUAL  */
  YYSYMBOL_COLONEQUAL = 98,                /* COLONEQUAL  */
  YYSYMBOL_ELLIPSIS = 99,                  /* ELLIPSIS  */
  YYSYMBOL_DOT = 100,                      /* DOT  */
  YYSYMBOL_LSQB = 101,                     /* LSQB  */
  YYSYMBOL_RSQB = 102,                     /* RSQB  */
  YYSYMBOL_LBR = 103,                      /* LBR  */
  YYSYMBOL_RBR = 104,                      /* RBR  */
  YYSYMBOL_VBAR = 105,                     /* VBAR  */
  YYSYMBOL_BXOR = 106,                     /* BXOR  */
  YYSYMBOL_AMPER = 107,                    /* AMPER  */
  YYSYMBOL_108_ = 108,                     /* '('  */
  YYSYMBOL_109_ = 109,                     /* ')'  */
  YYSYMBOL_110_ = 110,                     /* '*'  */
  YYSYMBOL_111_ = 111,                     /* '@'  */
  YYSYMBOL_112_ = 112,                     /* '/'  */
  YYSYMBOL_113_ = 113,                     /* '%'  */
  YYSYMBOL_114_ = 114,                     /* '+'  */
  YYSYMBOL_115_ = 115,                     /* '-'  */
  YYSYMBOL_116_ = 116,                     /* ';'  */
  YYSYMBOL_117_ = 117,                     /* '.'  */
  YYSYMBOL_118_ = 118,                     /* '['  */
  YYSYMBOL_119_ = 119,                     /* ']'  */
  YYSYMBOL_120_ = 120,                     /* ':'  */
  YYSYMBOL_121_ = 121,                     /* '!'  */
  YYSYMBOL_122_ = 122,                     /* '='  */
  YYSYMBOL_123_ = 123,                     /* '&'  */
  YYSYMBOL_124_ = 124,                     /* '|'  */
  YYSYMBOL_125_ = 125,                     /* '^'  */
  YYSYMBOL_126_ = 126,                     /* ','  */
  YYSYMBOL_127_ = 127,                     /* '?'  */
  YYSYMBOL_128___ = 128,                   /* '_'  */
  YYSYMBOL_129_ = 129,                     /* '{'  */
  YYSYMBOL_130_ = 130,                     /* '}'  */
  YYSYMBOL_131_ = 131,                     /* '~'  */
  YYSYMBOL_132_ = 132,                     /* '<'  */
  YYSYMBOL_133_ = 133,                     /* '>'  */
  YYSYMBOL_YYACCEPT = 134,                 /* $accept  */
  YYSYMBOL_file = 135,                     /* file  */
  YYSYMBOL_statements = 136,               /* statements  */
  YYSYMBOL_statement = 137,                /* statement  */
  YYSYMBOL_simple_stmts = 138,             /* simple_stmts  */
  YYSYMBOL_simple_stmt = 139,              /* simple_stmt  */
  YYSYMBOL_compound_stmt = 140,            /* compound_stmt  */
  YYSYMBOL_assignment = 141,               /* assignment  */
  YYSYMBOL_augassign = 142,                /* augassign  */
  YYSYMBOL_global_stmt = 143,              /* global_stmt  */
  YYSYMBOL_nonlocal_stmt = 144,            /* nonlocal_stmt  */
  YYSYMBOL_yield_stmt = 145,               /* yield_stmt  */
  YYSYMBOL_assert_stmt = 146,              /* assert_stmt  */
  YYSYMBOL_del_stmt = 147,                 /* del_stmt  */
  YYSYMBOL_import_stmt = 148,              /* import_stmt  */
  YYSYMBOL_import_name = 149,              /* import_name  */
  YYSYMBOL_import_from = 150,              /* import_from  */
  YYSYMBOL_import_from_targets = 151,      /* import_from_targets  */
  YYSYMBOL_import_from_as_names = 152,     /* import_from_as_names  */
  YYSYMBOL_import_from_as_name = 153,      /* import_from_as_name  */
  YYSYMBOL_dotted_as_names = 154,          /* dotted_as_names  */
  YYSYMBOL_dotted_as_name = 155,           /* dotted_as_name  */
  YYSYMBOL_dotted_name = 156,              /* dotted_name  */
  YYSYMBOL_if_stmt = 157,                  /* if_stmt  */
  YYSYMBOL_elif_stmt = 158,                /* elif_stmt  */
  YYSYMBOL_else_block = 159,               /* else_block  */
  YYSYMBOL_while_stmt = 160,               /* while_stmt  */
  YYSYMBOL_for_stmt = 161,                 /* for_stmt  */
  YYSYMBOL_with_stmt = 162,                /* with_stmt  */
  YYSYMBOL_with_async = 163,               /* with_async  */
  YYSYMBOL_with_item = 164,                /* with_item  */
  YYSYMBOL_try_stmt = 165,                 /* try_stmt  */
  YYSYMBOL_try1 = 166,                     /* try1  */
  YYSYMBOL_try2 = 167,                     /* try2  */
  YYSYMBOL_except_block = 168,             /* except_block  */
  YYSYMBOL_finally_block = 169,            /* finally_block  */
  YYSYMBOL_match_stmt = 170,               /* match_stmt  */
  YYSYMBOL_subject_expr = 171,             /* subject_expr  */
  YYSYMBOL_case_block = 172,               /* case_block  */
  YYSYMBOL_guard = 173,                    /* guard  */
  YYSYMBOL_patterns = 174,                 /* patterns  */
  YYSYMBOL_pattern = 175,                  /* pattern  */
  YYSYMBOL_as_pattern = 176,               /* as_pattern  */
  YYSYMBOL_or_pattern = 177,               /* or_pattern  */
  YYSYMBOL_closed_pattern = 178,           /* closed_pattern  */
  YYSYMBOL_literal_pattern = 179,          /* literal_pattern  */
  YYSYMBOL_literal_expr = 180,             /* literal_expr  */
  YYSYMBOL_complex_number = 181,           /* complex_number  */
  YYSYMBOL_signed_number = 182,            /* signed_number  */
  YYSYMBOL_signed_real_number = 183,       /* signed_real_number  */
  YYSYMBOL_real_number = 184,              /* real_number  */
  YYSYMBOL_imaginary_number = 185,         /* imaginary_number  */
  YYSYMBOL_capture_pattern = 186,          /* capture_pattern  */
  YYSYMBOL_pattern_capture_target = 187,   /* pattern_capture_target  */
  YYSYMBOL_wildcard_pattern = 188,         /* wildcard_pattern  */
  YYSYMBOL_value_pattern = 189,            /* value_pattern  */
  YYSYMBOL_attr = 190,                     /* attr  */
  YYSYMBOL_name_or_attr = 191,             /* name_or_attr  */
  YYSYMBOL_group_pattern = 192,            /* group_pattern  */
  YYSYMBOL_sequence_pattern = 193,         /* sequence_pattern  */
  YYSYMBOL_open_sequence_pattern = 194,    /* open_sequence_pattern  */
  YYSYMBOL_maybe_sequence_pattern = 195,   /* maybe_sequence_pattern  */
  YYSYMBOL_maybe_star_pattern = 196,       /* maybe_star_pattern  */
  YYSYMBOL_star_pattern = 197,             /* star_pattern  */
  YYSYMBOL_mapping_pattern = 198,          /* mapping_pattern  */
  YYSYMBOL_items_pattern = 199,            /* items_pattern  */
  YYSYMBOL_key_value_pattern = 200,        /* key_value_pattern  */
  YYSYMBOL_double_star_pattern = 201,      /* double_star_pattern  */
  YYSYMBOL_class_pattern = 202,            /* class_pattern  */
  YYSYMBOL_positional_patterns = 203,      /* positional_patterns  */
  YYSYMBOL_keyword_patterns = 204,         /* keyword_patterns  */
  YYSYMBOL_keyword_pattern = 205,          /* keyword_pattern  */
  YYSYMBOL_return_stmt = 206,              /* return_stmt  */
  YYSYMBOL_raise_stmt = 207,               /* raise_stmt  */
  YYSYMBOL_function_def = 208,             /* function_def  */
  YYSYMBOL_func1 = 209,                    /* func1  */
  YYSYMBOL_function_def_raw = 210,         /* function_def_raw  */
  YYSYMBOL_func_type_comment = 211,        /* func_type_comment  */
  YYSYMBOL_params = 212,                   /* params  */
  YYSYMBOL_parameters = 213,               /* parameters  */
  YYSYMBOL_slash_no_default = 214,         /* slash_no_default  */
  YYSYMBOL_slash_with_default = 215,       /* slash_with_default  */
  YYSYMBOL_star_etc = 216,                 /* star_etc  */
  YYSYMBOL_kwds = 217,                     /* kwds  */
  YYSYMBOL_param_no_default = 218,         /* param_no_default  */
  YYSYMBOL_param_with_default = 219,       /* param_with_default  */
  YYSYMBOL_param_maybe_default = 220,      /* param_maybe_default  */
  YYSYMBOL_param = 221,                    /* param  */
  YYSYMBOL_annotation = 222,               /* annotation  */
  YYSYMBOL_default = 223,                  /* default  */
  YYSYMBOL_decorators = 224,               /* decorators  */
  YYSYMBOL_class_def = 225,                /* class_def  */
  YYSYMBOL_cladf1 = 226,                   /* cladf1  */
  YYSYMBOL_class_def_raw = 227,            /* class_def_raw  */
  YYSYMBOL_block = 228,                    /* block  */
  YYSYMBOL_star_expressions = 229,         /* star_expressions  */
  YYSYMBOL_star_expression = 230,          /* star_expression  */
  YYSYMBOL_star_named_expressions = 231,   /* star_named_expressions  */
  YYSYMBOL_star_named_expression = 232,    /* star_named_expression  */
  YYSYMBOL_assigment_expression = 233,     /* assigment_expression  */
  YYSYMBOL_named_expression = 234,         /* named_expression  */
  YYSYMBOL_annotated_rhs = 235,            /* annotated_rhs  */
  YYSYMBOL_expression = 236,               /* expression  */
  YYSYMBOL_expr1 = 237,                    /* expr1  */
  YYSYMBOL_expr2 = 238,                    /* expr2  */
  YYSYMBOL_lambdef = 239,                  /* lambdef  */
  YYSYMBOL_lambda_params = 240,            /* lambda_params  */
  YYSYMBOL_lambda_parameters = 241,        /* lambda_parameters  */
  YYSYMBOL_lambda_slash_no_default = 242,  /* lambda_slash_no_default  */
  YYSYMBOL_lambda_slash_with_default = 243, /* lambda_slash_with_default  */
  YYSYMBOL_lambda_star_etc = 244,          /* lambda_star_etc  */
  YYSYMBOL_lambda_kwds = 245,              /* lambda_kwds  */
  YYSYMBOL_lambda_param_no_default = 246,  /* lambda_param_no_default  */
  YYSYMBOL_lambda_param_with_default = 247, /* lambda_param_with_default  */
  YYSYMBOL_lambda_param_maybe_default = 248, /* lambda_param_maybe_default  */
  YYSYMBOL_lambda_param = 249,             /* lambda_param  */
  YYSYMBOL_disjunction = 250,              /* disjunction  */
  YYSYMBOL_dsx = 251,                      /* dsx  */
  YYSYMBOL_conjunction = 252,              /* conjunction  */
  YYSYMBOL_inversion = 253,                /* inversion  */
  YYSYMBOL_inv1 = 254,                     /* inv1  */
  YYSYMBOL_comparison = 255,               /* comparison  */
  YYSYMBOL_compare_op_bitwise_or_pair = 256, /* compare_op_bitwise_or_pair  */
  YYSYMBOL_eq_bitwise_or = 257,            /* eq_bitwise_or  */
  YYSYMBOL_noteq_bitwise_or = 258,         /* noteq_bitwise_or  */
  YYSYMBOL_lte_bitwise_or = 259,           /* lte_bitwise_or  */
  YYSYMBOL_lt_bitwise_or = 260,            /* lt_bitwise_or  */
  YYSYMBOL_gte_bitwise_or = 261,           /* gte_bitwise_or  */
  YYSYMBOL_gt_bitwise_or = 262,            /* gt_bitwise_or  */
  YYSYMBOL_notin_bitwise_or = 263,         /* notin_bitwise_or  */
  YYSYMBOL_in_bitwise_or = 264,            /* in_bitwise_or  */
  YYSYMBOL_isnot_bitwise_or = 265,         /* isnot_bitwise_or  */
  YYSYMBOL_is_bitwise_or = 266,            /* is_bitwise_or  */
  YYSYMBOL_bitwise_or = 267,               /* bitwise_or  */
  YYSYMBOL_bitwise_xor = 268,              /* bitwise_xor  */
  YYSYMBOL_bitwise_and = 269,              /* bitwise_and  */
  YYSYMBOL_band = 270,                     /* band  */
  YYSYMBOL_shift_expr = 271,               /* shift_expr  */
  YYSYMBOL_shft = 272,                     /* shft  */
  YYSYMBOL_sum = 273,                      /* sum  */
  YYSYMBOL_sum_x = 274,                    /* sum_x  */
  YYSYMBOL_term = 275,                     /* term  */
  YYSYMBOL_trm = 276,                      /* trm  */
  YYSYMBOL_trm2 = 277,                     /* trm2  */
  YYSYMBOL_factor = 278,                   /* factor  */
  YYSYMBOL_fac = 279,                      /* fac  */
  YYSYMBOL_power = 280,                    /* power  */
  YYSYMBOL_await_expr = 281,               /* await_expr  */
  YYSYMBOL_await_primary = 282,            /* await_primary  */
  YYSYMBOL_primary = 283,                  /* primary  */
  YYSYMBOL_prn = 284,                      /* prn  */
  YYSYMBOL_slices = 285,                   /* slices  */
  YYSYMBOL_slice = 286,                    /* slice  */
  YYSYMBOL_atom = 287,                     /* atom  */
  YYSYMBOL_strings = 288,                  /* strings  */
  YYSYMBOL_list = 289,                     /* list  */
  YYSYMBOL_listcomp = 290,                 /* listcomp  */
  YYSYMBOL_tuple = 291,                    /* tuple  */
  YYSYMBOL_group = 292,                    /* group  */
  YYSYMBOL_genexp = 293,                   /* genexp  */
  YYSYMBOL_set = 294,                      /* set  */
  YYSYMBOL_setcomp = 295,                  /* setcomp  */
  YYSYMBOL_dict = 296,                     /* dict  */
  YYSYMBOL_dictcomp = 297,                 /* dictcomp  */
  YYSYMBOL_double_starred_kvpairs = 298,   /* double_starred_kvpairs  */
  YYSYMBOL_double_starred_kvpair = 299,    /* double_starred_kvpair  */
  YYSYMBOL_kvpair = 300,                   /* kvpair  */
  YYSYMBOL_for_if_clauses = 301,           /* for_if_clauses  */
  YYSYMBOL_for_if_clause = 302,            /* for_if_clause  */
  YYSYMBOL_yield_expr = 303,               /* yield_expr  */
  YYSYMBOL_arguments = 304,                /* arguments  */
  YYSYMBOL_args = 305,                     /* args  */
  YYSYMBOL_kwargs = 306,                   /* kwargs  */
  YYSYMBOL_starred_expression = 307,       /* starred_expression  */
  YYSYMBOL_kwarg_or_starred = 308,         /* kwarg_or_starred  */
  YYSYMBOL_kwarg_or_double_starred = 309,  /* kwarg_or_double_starred  */
  YYSYMBOL_star_targets = 310,             /* star_targets  */
  YYSYMBOL_star_targets_list_seq = 311,    /* star_targets_list_seq  */
  YYSYMBOL_star_targets_tuple_seq = 312,   /* star_targets_tuple_seq  */
  YYSYMBOL_star_target = 313,              /* star_target  */
  YYSYMBOL_target_with_star_atom = 314,    /* target_with_star_atom  */
  YYSYMBOL_star_atom = 315,                /* star_atom  */
  YYSYMBOL_single_target = 316,            /* single_target  */
  YYSYMBOL_single_subscript_attribute_target = 317, /* single_subscript_attribute_target  */
  YYSYMBOL_del_targets = 318,              /* del_targets  */
  YYSYMBOL_del_target = 319,               /* del_target  */
  YYSYMBOL_del_t_atom = 320,               /* del_t_atom  */
  YYSYMBOL_t_primary = 321,                /* t_primary  */
  YYSYMBOL_t_lookahead = 322               /* t_lookahead  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  183
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1558

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  134
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  189
/* YYNRULES -- Number of rules.  */
#define YYNRULES  421
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1152

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   362


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   121,     2,     2,     2,   113,   123,     2,
     108,   109,   110,   114,   126,   115,   117,   112,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   120,   116,
     132,   122,   133,   127,   111,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   118,     2,   119,   125,   128,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   129,   124,   130,   131,     2,     2,     2,
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
     105,   106,   107
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    53,    53,    55,    57,    58,    62,    63,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    82,    84,    85,    86,    87,    88,    89,    93,    94,
      95,    96,    96,    97,    97,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   115,
     118,   121,   124,   128,   129,   129,   133,   134,   136,   139,
     139,   140,   143,   144,   145,   147,   148,   150,   151,   153,
     154,   156,   157,   160,   161,   167,   168,   171,   172,   173,
     176,   177,   181,   185,   186,   190,   191,   192,   195,   196,
     199,   199,   199,   200,   204,   205,   208,   211,   215,   216,
     219,   220,   224,   228,   229,   231,   232,   235,   240,   241,
     245,   246,   249,   250,   254,   258,   259,   260,   262,   263,
     264,   270,   270,   271,   272,   273,   274,   275,   280,   280,
     281,   282,   283,   284,   285,   289,   290,   298,   299,   303,
     304,   308,   312,   315,   316,   320,   320,   320,   324,   328,
     328,   328,   331,   332,   336,   337,   341,   345,   346,   350,
     353,   354,   358,   359,   363,   364,   368,   369,   370,   371,
     375,   378,   379,   379,   383,   387,   388,   389,   390,   394,
     398,   402,   406,   411,   412,   419,   420,   423,   427,   428,
     432,   433,   436,   437,   441,   442,   443,   444,   445,   449,
     450,   454,   455,   460,   461,   462,   465,   468,   469,   472,
     473,   476,   477,   479,   481,   483,   485,   491,   492,   495,
     498,   499,   503,   504,   508,   509,   514,   515,   518,   522,
     523,   527,   531,   532,   535,   536,   548,   549,   550,   553,
     556,   560,   564,   568,   569,   570,   571,   572,   576,   577,
     581,   582,   586,   587,   588,   591,   595,   596,   600,   601,
     605,   606,   609,   616,   621,   625,   630,   631,   634,   641,
     642,   647,   649,   650,   651,   652,   653,   654,   655,   656,
     660,   663,   666,   669,   672,   675,   677,   679,   681,   683,
     688,   689,   695,   696,   702,   703,   705,   706,   712,   713,
     714,   717,   722,   726,   727,   728,   740,   741,   744,   745,
     746,   747,   748,   753,   756,   757,   760,   761,   762,   767,
     768,   771,   774,   779,   786,   787,   788,   789,   790,   795,
     796,   799,   800,   803,   804,   805,   806,   807,   808,   809,
     809,   809,   810,   810,   811,   811,   811,   811,   812,   814,
     817,   820,   823,   826,   826,   829,   829,   831,   834,   837,
     842,   844,   846,   847,   848,   850,   852,   853,   856,   857,
     860,   861,   864,   865,   867,   868,   868,   868,   869,   872,
     873,   874,   876,   877,   880,   881,   884,   885,   889,   890,
     892,   895,   896,   899,   900,   903,   904,   908,   909,   910,
     911,   914,   915,   916,   919,   920,   923,   926,   927,   928,
     931,   932,   933,   934,   938,   939,   940,   941,   942,   945,
     946,   947
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "DIGITS", "NAME",
  "PLUS", "MINUS", "MUL", "DIVIDE", "NUM", "STRING", "INTEGER", "SPECIAL",
  "NL", "SPACE", "KEYWORD", "SPECIAL_START", "SPECIAL_END", "IF", "ELSE",
  "WHILE", "SEP", "END", "OR", "AND", "NOT", "IN", "NOTIN", "T", "F",
  "COLON", "SQUAREBRACKET_START", "SQUAREBRACKET_END", "MOD", "EQUAL",
  "PLUSEQUAL", "PRINT", "COMMENT", "RANGE", "SINGLEQUOTE", "DOUBLEQUOTE",
  "EXPONENTIAL", "COMMA", "INDENT", "LIST", "DIVIDEEQUAL", "MINUSEQUAL",
  "MULEQUAL", "LESSTHAN", "LESSTHANEQUAL", "GREATERTHAN",
  "GREATERTHANEQUAL", "DOUBLEEQUAL", "GLOBAL", "YIELD", "IMPORT", "RETURN",
  "AS", "TYPE_COMMENT", "FOR", "DEL", "NONLOCAL", "ELIF", "NEWLINE",
  "TRUE", "NONE", "CLASS", "DEDENT", "FINALLY", "WITH", "EXPECT", "IS",
  "MATCH", "CONTINUE", "RAISE", "FROM", "PASS", "LAMBDA", "DEF", "FALSE",
  "CASE", "ASSERT", "AWAIT", "BREAK", "ASYNC", "TRY", "NLOOK", "PLOOK",
  "RARROW", "TILDE", "DOUBLESTAR", "DOUBLESLASH", "LEFTSHIFT",
  "RIGHTSHIFT", "NOTEQUAL", "EQUALTO", "GREATEREQUAL", "LESSEQUAL",
  "COLONEQUAL", "ELLIPSIS", "DOT", "LSQB", "RSQB", "LBR", "RBR", "VBAR",
  "BXOR", "AMPER", "'('", "')'", "'*'", "'@'", "'/'", "'%'", "'+'", "'-'",
  "';'", "'.'", "'['", "']'", "':'", "'!'", "'='", "'&'", "'|'", "'^'",
  "','", "'?'", "'_'", "'{'", "'}'", "'~'", "'<'", "'>'", "$accept",
  "file", "statements", "statement", "simple_stmts", "simple_stmt",
  "compound_stmt", "assignment", "augassign", "global_stmt",
  "nonlocal_stmt", "yield_stmt", "assert_stmt", "del_stmt", "import_stmt",
  "import_name", "import_from", "import_from_targets",
  "import_from_as_names", "import_from_as_name", "dotted_as_names",
  "dotted_as_name", "dotted_name", "if_stmt", "elif_stmt", "else_block",
  "while_stmt", "for_stmt", "with_stmt", "with_async", "with_item",
  "try_stmt", "try1", "try2", "except_block", "finally_block",
  "match_stmt", "subject_expr", "case_block", "guard", "patterns",
  "pattern", "as_pattern", "or_pattern", "closed_pattern",
  "literal_pattern", "literal_expr", "complex_number", "signed_number",
  "signed_real_number", "real_number", "imaginary_number",
  "capture_pattern", "pattern_capture_target", "wildcard_pattern",
  "value_pattern", "attr", "name_or_attr", "group_pattern",
  "sequence_pattern", "open_sequence_pattern", "maybe_sequence_pattern",
  "maybe_star_pattern", "star_pattern", "mapping_pattern", "items_pattern",
  "key_value_pattern", "double_star_pattern", "class_pattern",
  "positional_patterns", "keyword_patterns", "keyword_pattern",
  "return_stmt", "raise_stmt", "function_def", "func1", "function_def_raw",
  "func_type_comment", "params", "parameters", "slash_no_default",
  "slash_with_default", "star_etc", "kwds", "param_no_default",
  "param_with_default", "param_maybe_default", "param", "annotation",
  "default", "decorators", "class_def", "cladf1", "class_def_raw", "block",
  "star_expressions", "star_expression", "star_named_expressions",
  "star_named_expression", "assigment_expression", "named_expression",
  "annotated_rhs", "expression", "expr1", "expr2", "lambdef",
  "lambda_params", "lambda_parameters", "lambda_slash_no_default",
  "lambda_slash_with_default", "lambda_star_etc", "lambda_kwds",
  "lambda_param_no_default", "lambda_param_with_default",
  "lambda_param_maybe_default", "lambda_param", "disjunction", "dsx",
  "conjunction", "inversion", "inv1", "comparison",
  "compare_op_bitwise_or_pair", "eq_bitwise_or", "noteq_bitwise_or",
  "lte_bitwise_or", "lt_bitwise_or", "gte_bitwise_or", "gt_bitwise_or",
  "notin_bitwise_or", "in_bitwise_or", "isnot_bitwise_or", "is_bitwise_or",
  "bitwise_or", "bitwise_xor", "bitwise_and", "band", "shift_expr", "shft",
  "sum", "sum_x", "term", "trm", "trm2", "factor", "fac", "power",
  "await_expr", "await_primary", "primary", "prn", "slices", "slice",
  "atom", "strings", "list", "listcomp", "tuple", "group", "genexp", "set",
  "setcomp", "dict", "dictcomp", "double_starred_kvpairs",
  "double_starred_kvpair", "kvpair", "for_if_clauses", "for_if_clause",
  "yield_expr", "arguments", "args", "kwargs", "starred_expression",
  "kwarg_or_starred", "kwarg_or_double_starred", "star_targets",
  "star_targets_list_seq", "star_targets_tuple_seq", "star_target",
  "target_with_star_atom", "star_atom", "single_target",
  "single_subscript_attribute_target", "del_targets", "del_target",
  "del_t_atom", "t_primary", "t_lookahead", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-860)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-375)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     745,    -6,  -860,  -860,   426,   141,   -38,   136,    84,    94,
    1065,   135,   149,    29,  -860,  -860,   279,   -32,   115,  -860,
     902,   190,  -860,   203,   336,  -860,  1041,  -860,  -860,   357,
     251,   276,   426,  1253,   988,   247,   247,   247,   249,   223,
     247,   402,  -860,  -860,  -860,   302,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,   396,  -860,  -860,   353,
    -860,  -860,  -860,   291,   -23,  -860,   313,   153,   423,  -860,
    -860,   321,  -860,   344,  -860,  -860,   438,   348,   355,   358,
     364,   382,   487,  -860,   284,  -860,  -860,  -860,  -860,  -860,
    -860,   386,   394,  -860,   390,  -860,   393,  -860,   401,  -860,
    -860,  1375,   403,   643,   395,  1041,   421,   410,   418,  -860,
     429,  1041,   904,   434,  -860,   904,   421,  -860,   445,   252,
     448,   153,   536,   -12,  -860,   647,   447,   479,   456,  -860,
     458,   459,   475,   247,   470,   472,   481,   493,   512,    44,
     517,   506,   460,  -860,  1065,   -18,   622,   540,    22,    13,
     270,    58,   523,  -860,   335,   -25,  1278,   426,    76,  -860,
    -860,  -860,   594,   525,  -860,  -860,   947,   514,   502,    13,
     374,    13,  -860,  -860,   521,   426,  -860,   560,  -860,  -860,
     528,   518,  -860,   542,   554,   555,   141,   634,   636,   632,
     247,   262,   247,   247,   247,   247,   247,   247,  -860,   553,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     274,  -860,  -860,  -860,   543,   544,   548,   552,   557,   184,
     558,   559,   561,   562,   565,   566,   586,   556,   365,   300,
     673,   604,   605,  1041,   573,   540,   690,  -860,   579,  -860,
     701,   587,    61,   590,   591,   592,   626,   624,   593,   595,
     365,   714,  1324,   615,   722,   627,   614,   520,   525,   669,
     607,   659,  -860,  -860,   731,    52,   620,  -860,   731,   731,
    -860,  -860,    39,   623,   160,   629,   616,   365,   328,   747,
    -860,   726,   630,   642,   650,    17,  1075,  -860,    19,   248,
     701,  1065,   704,   664,  -860,  -860,  -860,  -860,   607,   115,
    1123,   658,   705,   646,   660,   655,   115,  -860,   653,  1041,
     654,   717,   657,   751,   904,  -860,   677,  -860,   768,   141,
     141,   247,   525,   247,   525,   525,   525,   525,   348,   525,
     525,   667,  -860,   355,   364,   487,   487,   284,   284,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,   668,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,   681,  1041,  1041,   674,  -860,   692,   709,   798,
     585,   411,   274,  -860,   769,   689,  -860,  -860,  -860,  -860,
     388,  -860,   702,   904,  -860,  1065,   713,   437,   270,   400,
    1182,   698,  -860,   772,   715,  -860,   707,   520,  -860,   724,
     716,   777,   792,   710,  1041,  -860,   133,   731,   731,   718,
     729,   730,   719,   731,   144,   732,   246,   723,  1041,  -860,
     163,   125,  1041,   743,   585,  -860,   758,   733,   520,   738,
     859,   737,  1000,   740,  -860,   725,  -860,   748,  -860,   776,
     154,   840,  1065,  -860,   752,   744,  -860,  -860,   763,   760,
     759,   773,   764,   765,  -860,  -860,  -860,  -860,   540,   770,
     781,    13,  1041,   782,   783,   525,   525,   848,  -860,   839,
     778,   779,   407,   442,   771,   798,   784,   809,   780,   786,
    -860,   274,   274,  -860,   661,   881,   898,   849,  1065,   785,
     800,   461,   274,   135,   135,   803,   790,   365,   906,  -860,
     585,   791,  -860,   793,  1065,   841,  -860,   811,   821,   719,
     835,  1041,   731,   828,   836,   827,  -860,   831,   833,  -860,
    -860,   830,  -860,   834,   949,    72,   842,  -860,   949,   949,
    -860,  -860,    96,   837,   209,   844,  1349,   845,   904,   520,
     850,   125,   892,   540,   540,   847,   881,   853,   964,   851,
     248,   887,   952,   878,   864,  -860,  1031,   857,   839,   870,
     865,   174,   925,   875,   890,  -860,  -860,  -860,  -860,   886,
    -860,   970,   885,   888,   274,   274,  -860,  -860,   124,   917,
     923,   905,  -860,  -860,  -860,   913,  -860,   914,   918,  -860,
    1032,   929,   922,   931,   274,  -860,   924,   926,  -860,   928,
     942,   473,   930,   932,   993,   971,   -26,   996,  -860,   974,
     933,   953,  -860,   962,   246,   165,  -860,   246,  -860,  -860,
    1041,   946,  -860,    20,   949,   949,   976,   973,   978,   719,
     949,   171,   982,   260,   954,  1028,    79,  -860,  -860,   989,
     975,   968,   979,   985,  -860,  -860,  -860,  1044,   986,   980,
     991,  -860,  -860,  1035,   141,  1018,  -860,   607,   247,   992,
     998,  -860,  -860,  -860,  1048,  1003,   426,   881,  -860,  1005,
     999,  -860,   247,   661,  1008,  1002,  -860,  -860,    35,  1041,
    1024,  1041,  -860,  1009,  -860,  1027,  1050,  1019,  -860,   540,
    -860,  1022,  -860,  1085,  1033,   123,  1051,  1046,  -860,   482,
     274,  1054,  1055,  1042,  1052,   256,  1053,  1145,  1039,  -860,
    1110,  -860,  1043,  -860,  -860,  1058,   177,   974,  1063,  1074,
    1062,  -860,  1076,  -860,  -860,  1066,   719,  1061,  1079,   949,
    1080,  1087,  1097,  -860,  1090,  1084,  1122,  1083,  1086,  1154,
    -860,  1096,  1088,  1160,  1115,  1216,  1103,  1104,  1168,  1119,
    1210,   141,  1111,   525,  1107,  -860,  -860,  1109,  1116,  -860,
    1117,   525,  1120,  1041,  1121,  1041,  1041,  -860,  -860,  -860,
    1108,  1156,   274,  1157,  -860,  -860,  1124,  1125,  -860,  1127,
    1207,  -860,  -860,  -860,   274,  -860,  1129,  1130,   540,  1132,
    1140,  1128,  -860,  -860,  -860,  -860,   599,   426,  1126,    30,
    1134,  -860,  1135,  -860,  1146,   246,  -860,  -860,  -860,  1176,
    1141,  1149,  1181,  1163,   260,   207,  -860,   260,  -860,  1166,
    -860,  1187,  1148,  1218,  1170,  1158,  1162,  1172,  1224,  1189,
    1290,  1195,   141,  1190,  1180,  1183,   540,  -860,  -860,  -860,
    1185,  -860,  -860,  -860,  1184,  1271,  -860,  1198,   540,  1193,
    1188,  1065,  1205,  -860,  1196,   540,  -860,  -860,  -860,  1315,
    1234,  -860,  -860,  -860,   -26,    33,  1134,   -24,  -860,  -860,
    -860,  1237,   465,  -860,  -860,  -860,   217,  -860,  -860,  1320,
    -860,  -860,  1206,  -860,  1212,  1200,  -860,  -860,  1220,  1221,
     185,  1176,  1041,  1213,  1222,  1233,  -860,  1225,  -860,  1241,
    -860,  1227,  1228,   540,  1259,  1230,  1232,  -860,  1243,  -860,
    1254,  1346,  1261,  -860,   183,  1248,    53,  1260,  -860,  1252,
    -860,  1255,  1256,  1257,   257,  -860,   540,  -860,  1285,  1264,
    1251,  1294,  -860,  -860,  1258,    30,  1266,  -860,  1265,  1268,
    1279,  1381,  1381,  -860,  1286,  -860,  -860,  1310,  1280,  -860,
     -22,  -860,   540,   -26,  -860,  -860,  -860,  1272,  1340,  1281,
    1283,   260,  -860,  -860,  -860,  -860,   540,   540,  -860,  1041,
     540,  -860,  -860,  1295,   141,  -860,   881,  -860,  1284,  1288,
    -860,  1293,   881,  1065,  1306,  1308,  1289,  -860,  -860,  1309,
    -860,  1307,  1299,  -860,    87,   -20,  1292,  1316,  -860,  -860,
    -860,  -860,  1312,  1417,   -27,  -860,  -860,  1296,  1337,  1302,
    -860,  1313,  1317,  1319,  -860,  1321,  -860,  -860,  1325,  1322,
    1326,  1323,  1327,  1329,  -860,  -860,  1065,  1335,  -860,  -860,
     308,  1333,  -860,  1328,  1330,  1331,  -860,  1343,  -860,  -860,
    1334,  1336,  1344,  1318,  1350,  -860,  1341,  -860,   881,  1351,
    1356,  -860,  1041,  1347,  -860,  1348,  1360,  -860,  -860,  -860,
    -860,    36,  -860,  -860,  1374,  -860,  1352,  -860,  1354,  -860,
    -860,    75,   455,  1355,  -860,  -860,   370,  1357,  1359,  -860,
    1364,  1358,  1365,  1372,  1361,  -860,  1384,  1369,  1366,  1373,
    -860,  -860,  1377,  1388,  1376,  1392,  -860,  1445,  1385,  -860,
     370,  1386,   132,  -860,  -860,  1380,  1393,  -860,  -860,  1369,
    1504,  -860,  1382,  -860,  1423,   540,  1394,  -860,  1395,  -860,
    -860,  1402,  1404,  -860,   540,  -860,  -860,  1452,  -860,  1473,
    1408,  -860
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      53,   402,   338,   349,   296,   296,     0,     0,    69,     0,
     296,     0,     0,     0,   334,   336,     0,     0,   296,    18,
     184,     0,    13,     0,     0,   335,   296,   324,    17,     0,
       0,   348,   296,   296,   296,   296,     0,     0,     0,   296,
       0,     0,     2,     3,     5,     0,     4,     8,    19,    20,
      15,    16,    14,    11,    56,    57,    26,    24,    23,    87,
      25,    94,    95,    27,    10,    12,     0,   186,   187,   220,
      22,   218,   219,     9,     0,   232,     0,   227,   237,   238,
     239,     0,   264,     0,   266,   267,   270,   291,   293,     0,
     295,     0,   300,   302,   313,   306,   305,   307,   314,   315,
     322,   320,     0,   337,     0,   340,     0,   345,     0,   346,
      51,    35,   401,   296,     0,   296,     0,     0,     0,   268,
       0,   296,   296,     0,    58,   296,   333,   348,     0,     0,
       0,     0,     0,     0,   394,   296,     0,     0,     0,    55,
       0,     0,     0,   296,     0,     0,   104,     0,     0,     0,
       0,     0,   321,   323,   296,     0,     0,    53,     0,   366,
     402,     0,     0,   401,   296,     0,   296,   296,   296,   342,
     339,   344,     0,   226,   316,   317,    53,     0,     0,   366,
       0,   366,   318,     1,     0,   296,    21,     0,   185,   217,
      34,     0,   225,     0,     0,     0,   296,     0,     0,     0,
     296,   296,   296,   296,   296,   296,   296,   296,   269,     0,
     272,   273,   274,   275,   276,   277,   278,   279,   296,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   343,   341,   347,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   296,     0,
       0,     0,     0,   296,     0,    53,     0,   370,     0,   227,
      71,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     296,     0,   296,     0,     0,     0,     0,   296,   229,     0,
       0,     0,    59,   262,     0,     0,     0,   242,     0,     0,
     247,   254,     0,     0,     0,     0,     0,   296,     0,     0,
     326,     0,     0,     0,     0,     0,   296,   223,   100,    65,
       0,   296,     0,     0,   367,   355,   353,   403,     0,   296,
     296,     0,     0,     0,     0,     0,   296,   357,     0,   296,
       0,     0,     0,     0,   296,   354,     0,   233,     0,   296,
     296,   296,   287,   296,   289,   280,   284,   282,   290,   283,
     285,     0,   271,   292,   294,   298,   299,   303,   304,   310,
     308,   312,   309,   311,   319,   419,   421,   420,   418,    47,
      45,    46,    38,    39,     0,    40,    41,    36,    37,    42,
      43,    44,     0,   296,   296,     0,   332,     0,     0,     0,
     296,     0,     0,   231,     0,     0,    49,   371,    74,    70,
       0,   182,     0,   296,   388,   296,     0,     0,   410,   296,
     296,     0,   409,   296,     0,    50,     0,   296,    91,     0,
       0,    93,     0,     0,   296,   255,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   296,   256,
       0,   192,   296,     0,   296,   325,     0,     0,   296,     0,
      53,     0,   296,     0,    96,    65,    64,     0,    61,     0,
       0,     0,   296,   351,     0,     0,   230,    29,     0,     0,
       0,     0,     0,     0,   358,   365,   360,     6,    53,     0,
       0,   366,   296,     0,     0,   286,   288,     0,    48,     0,
       0,     0,   296,     0,     0,     0,     0,     0,     0,     0,
     378,     0,     0,   416,   296,    80,     0,     0,   296,     0,
       0,     0,     0,     0,     0,     0,     0,   296,     0,    54,
     296,     0,    92,     0,   296,   105,   103,     0,     0,     0,
       0,   296,     0,     0,     0,     0,   248,     0,     0,   257,
     215,     0,   258,     0,     0,     0,     0,   193,     0,     0,
     198,   205,     0,     0,     0,     0,   296,     0,   296,   296,
       0,   192,     0,    53,    53,     0,    80,     0,    67,     0,
      65,     0,     0,     0,     0,   216,   296,     0,     0,     0,
       0,    77,     0,     0,     0,   240,   236,   263,   265,     0,
      33,     0,     0,     0,     0,     0,   329,   376,   382,     0,
       0,     0,   404,   414,   235,     0,   234,     0,     0,    73,
       0,     0,     0,     0,     0,   395,     0,     0,   411,     0,
       0,     0,     0,     0,     0,     0,   112,     0,   183,     0,
       0,     0,   241,     0,     0,     0,   249,     0,   246,   259,
     296,     0,   206,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,   328,     0,
       0,     0,     0,     0,   222,   101,    99,     0,     0,     0,
       0,    66,    63,     0,   296,     0,   350,     0,   296,     0,
       0,   364,   359,    31,     0,     0,   296,    80,    75,     0,
       0,   356,   296,   296,     0,     0,   405,   415,     0,   296,
     382,   296,   385,   380,   381,     0,     0,     0,    28,    53,
      82,     0,   393,     0,     0,     0,     0,     0,   406,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   109,   110,
     111,   108,     0,   162,   102,     0,     0,     0,     0,     0,
       0,   250,     0,   214,   213,     0,     0,     0,     0,     0,
       0,     0,     0,   199,     0,     0,     0,     0,     0,     0,
     327,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   296,     0,   363,     0,     7,   228,     0,     0,    32,
       0,   281,     0,   296,     0,   296,   296,   387,   375,   383,
       0,     0,     0,     0,    81,    72,     0,     0,   397,     0,
     296,   396,   413,   412,     0,   407,     0,     0,    53,     0,
       0,     0,   146,   148,   164,   165,   143,   296,     0,     0,
     160,   253,     0,   260,     0,     0,   244,   251,   245,     0,
       0,     0,     0,     0,     0,     0,   200,     0,   197,     0,
     207,     0,     0,     0,     0,     0,     0,     0,   100,     0,
       0,     0,   296,     0,     0,     0,    53,    76,   224,    30,
       0,   330,   384,   386,     0,     0,   417,     0,    53,     0,
       0,   296,     0,   408,     0,    53,    86,    90,   147,     0,
     141,   126,   125,   127,   112,     0,   160,     0,   114,   115,
     123,     0,     0,   139,   116,   144,   152,   118,   119,   152,
     124,   107,     0,   113,     0,     0,   261,   252,     0,     0,
       0,     0,   296,     0,     0,     0,   201,     0,   208,     0,
     209,     0,     0,    53,     0,     0,     0,    62,     0,    60,
       0,     0,     0,   361,    77,     0,     0,     0,   373,     0,
     389,     0,     0,     0,     0,   398,    53,    85,     0,   163,
       0,   141,   122,   140,     0,     0,     0,   166,     0,     0,
       0,     0,     0,   155,     0,   150,   117,   154,     0,   154,
       0,   120,    53,   112,   159,   243,   204,     0,     0,     0,
       0,     0,   195,   202,   196,   210,    53,    53,    89,   296,
      53,    97,    68,     0,   296,   352,    80,    78,     0,     0,
     379,     0,    80,   296,     0,     0,     0,   392,   221,     0,
     156,     0,     0,   174,   152,     0,     0,     0,   142,   135,
     136,   151,     0,     0,     0,   106,   163,     0,     0,     0,
     203,     0,     0,     0,    88,     0,    98,   369,     0,     0,
       0,     0,     0,     0,   400,   399,   296,     0,   158,   157,
       0,   154,   170,     0,     0,     0,   121,     0,   153,   175,
       0,     0,     0,     0,     0,   211,     0,   194,    80,     0,
       0,    79,   296,     0,    83,     0,     0,   145,   133,   132,
     134,     0,   172,   130,     0,   131,     0,   169,     0,   167,
     149,   112,     0,     0,   161,   212,     0,     0,     0,   368,
       0,     0,     0,     0,     0,   129,     0,   112,     0,     0,
     179,   180,     0,     0,     0,     0,   191,     0,     0,    84,
       0,     0,   382,   377,   390,     0,     0,   173,   168,   112,
       0,   176,     0,   177,     0,    53,     0,   331,     0,   128,
     181,     0,     0,   188,    53,   391,   178,     0,   189,     0,
       0,   190
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -860,  -860,  1068,  -860,    11,  1345,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,   950,  1064,  -860,
    -860,  -860,  1214,  -860,   588,  -557,  -860,  -860,  -860,  -860,
    -373,  -860,  -860,  -860,  -860,   675,  -860,  -860,  -860,  -860,
    -860,  -850,  -860,  -860,  -860,  -860,  -860,   476,   477,  -860,
    -848,   563,  -860,  -766,   712,  -860,  -859,   631,  -860,  -860,
     645,   648,   564,  -860,  -860,  -860,  -860,   516,  -860,  -860,
     440,  -860,  -860,  -860,  -860,  1464,  -860,   415,   977,  -860,
    -860,  -860,  -633,  -770,  -181,  -511,   891,  -368,  -860,  -493,
    -860,  -860,  1470,  -860,  -250,  -115,  1208,  -267,   -57,  -149,
      15,   852,    -4,  1353,  -860,  -860,  -860,  -860,  -860,  -860,
    -418,  -562,   202,  -237,  1112,  -100,  -649,  1202,  -860,    12,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,   -33,  1338,  1332,  -860,  1339,  -860,   363,
    -860,   366,  -860,  -860,   244,  -860,  -860,  -860,  -860,  -860,
    -860,  -239,  1056,   990,  -790,  -860,  -860,  -860,  -860,   -89,
    -860,  -860,  -860,  -860,  -860,  -860,   981,  -158,  -860,  -157,
    -376,  -860,   471,   854,  -860,   611,    -2,  -860,  -860,  -404,
     753,  -860,    -1,     6,    73,  1142,  -860,    -7,  -377
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    41,    42,    43,   307,    45,    46,    47,   246,    48,
      49,    50,    51,    52,    53,    54,    55,   458,   459,   671,
     124,   399,   400,   186,   688,   608,    56,    57,    58,    59,
     420,    60,    61,    62,   453,   454,    63,   144,   627,   818,
     727,   728,   729,   730,   888,   889,  1082,   890,   891,   892,
     893,  1019,   894,   814,   815,   966,   967,   968,   897,   898,
     731,   905,   732,   733,   899,   958,  1052,   959,   971,  1061,
    1062,  1111,    64,    65,    66,    67,    68,  1118,   546,   547,
     548,   549,   550,   551,   552,   553,   745,   649,   641,   440,
      69,    70,    71,    72,   308,    73,    74,   178,   145,    75,
      76,   605,    77,    78,   586,    79,   286,   287,   288,   289,
     290,   291,   292,   293,   528,   432,    80,    81,    82,    83,
      84,    85,   208,   209,   352,   210,   211,   212,   213,   214,
     215,   216,   217,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   152,
     153,   387,   388,   102,   103,   169,   104,   170,   105,   106,
     107,   108,   171,   109,   470,   680,   181,   313,   314,   110,
     498,   499,   500,   702,   703,   704,   172,   942,   943,   133,
     134,   801,   111,   112,   137,   411,   412,   113,   368
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     118,   510,   173,   135,   316,   395,   131,   258,   132,   668,
     261,    44,   315,   423,   118,   503,   147,   119,   538,   117,
     755,   328,   151,   330,   252,   770,   900,   135,   118,   131,
     131,   406,   162,   146,   949,   180,   630,   953,   648,   163,
     969,   652,   951,   283,   521,   951,   252,   159,   283,   294,
     895,   464,   431,   903,   179,   435,   283,   999,   443,   909,
     450,   656,   116,   300,   810,   116,   955,   735,   557,   785,
     955,   141,   311,   554,   268,   560,   543,   309,   654,  1109,
     116,  -333,  1059,   262,   725,   191,  1024,   451,   120,   452,
     302,   963,   114,   319,   142,  1023,   269,   312,   726,  1060,
     543,     5,   956,   192,   611,   316,   957,  1053,   303,   251,
     278,   254,     7,   315,   115,     7,   811,   257,   259,   116,
     625,   259,   853,  1026,   602,   603,   139,   798,   698,   543,
     778,   251,   310,   812,   284,   615,   698,   758,   139,   751,
       5,   979,   952,   699,   622,  1105,   655,   135,   251,   433,
     131,   434,   301,    23,   285,  1051,   656,   786,    27,   263,
     118,   264,   131,   118,   180,   321,     5,   342,   344,   345,
     346,   347,   163,   349,   350,   824,   643,   643,   427,   159,
     643,   118,   322,   179,   426,   426,   661,   265,   426,  1013,
      36,    37,    23,   554,   323,  1050,   534,    27,   644,   726,
     332,   914,   177,   930,   917,   759,   650,    40,   651,   570,
     123,   121,   125,  -171,   699,   544,   739,   696,   697,   742,
     437,   963,   699,    27,   799,   143,   800,   116,   581,    36,
      37,   535,   700,   953,   701,   545,   686,   715,   833,   194,
     315,  1110,   701,   977,   118,   686,    40,   437,     5,   393,
     541,   964,   740,   830,   122,    36,    37,  1127,   752,   439,
    1085,   136,   465,   386,   822,   413,   118,   654,   131,   473,
     536,   506,    40,   421,   195,   138,   746,   746,   620,  1140,
     174,   175,   438,   140,   182,   386,   439,   343,   509,   542,
     810,   741,   687,   118,   915,   633,   374,   753,   148,   135,
      23,   996,   131,   823,   135,    27,   375,   131,   485,   461,
     486,   978,   386,   665,   666,   118,   131,   880,     3,   162,
     965,   149,   118,   584,   252,   475,   163,   529,   529,    27,
     259,   438,   590,   916,   466,   655,   284,    36,    37,   116,
     150,   466,   811,   805,    27,  1038,   597,   606,  1032,   177,
     544,   455,   484,   263,    40,   264,   285,  -333,   456,   812,
       5,    36,    37,   642,   645,  1006,   176,   647,   114,   116,
     545,   157,  1078,  1079,   457,   224,    36,    37,    40,   490,
     491,   265,   365,  1007,   813,   158,   497,  1080,   184,   604,
       5,   366,   367,    40,   225,   226,   227,   228,   135,   259,
     190,   131,   183,   413,   116,   118,   131,   908,   389,   251,
     772,   116,    23,   421,   185,   866,   154,    27,   390,    16,
     527,   683,   193,  1081,   159,     5,   155,   873,  1116,   197,
     116,    24,     5,  1117,   540,   156,   389,   187,   555,  1039,
     497,   196,    23,   660,   421,  1042,   444,    27,   565,    36,
      37,     5,   198,   318,   218,   135,  -301,  -301,   131,   794,
     572,    44,  -297,   199,   200,   219,    40,   944,   359,   360,
     361,   362,   363,   364,   220,   221,   229,    23,   585,    36,
      37,   230,    27,   384,    23,     5,   425,   428,   118,    27,
     430,   385,   222,   223,   329,   195,    40,   501,   502,   231,
     259,   135,   232,    23,   131,   506,   507,   386,    27,   201,
     233,  1097,   247,   118,    36,    37,   497,   135,   513,   114,
     131,    36,    37,   512,   502,   384,   253,   632,   594,   595,
     255,    40,   386,   202,   203,   204,   606,    23,    40,   195,
      36,    37,    27,   205,     1,     5,   256,   614,   595,     2,
       3,   260,   131,   262,   259,   421,   266,    40,   876,   720,
     502,   297,   267,   298,   272,     5,   273,  -296,   804,   595,
     206,   207,   679,   274,    36,    37,   275,   299,   604,   961,
     962,  1112,  1113,   355,   356,   276,   616,   617,   357,   358,
     279,    40,   277,     6,     7,     8,     9,    23,   280,  1043,
      11,    12,    27,   305,    14,    15,   934,  -230,   880,     3,
       5,   281,   282,    19,    20,    21,    22,    23,   939,    25,
     295,    26,    27,    28,   296,   947,   304,   317,   324,   418,
     205,   326,   327,   810,    36,    37,   743,   331,   156,    31,
     419,    32,  1076,    33,   334,   773,   335,  -296,   306,   333,
      35,    40,   336,   337,    36,    37,    38,   339,   341,   781,
     340,   351,    23,   881,   882,   369,   370,    27,     5,    39,
     371,    40,     5,   988,   372,   382,   383,   391,   883,   373,
     376,   377,   118,   378,   379,   811,     5,   380,   381,   259,
     194,   394,   392,   495,   396,   787,  1008,   789,   397,    36,
      37,   777,   812,  -374,  -372,   398,   401,   884,   318,   319,
     323,   496,   402,   403,   885,     7,    40,   886,   407,   404,
      23,   405,  1025,   414,    23,    27,   415,   813,   887,    27,
     416,   417,   422,   177,   424,   283,  1033,  1034,    23,   429,
    1036,   436,   442,    27,   248,  -220,   249,   441,   270,     1,
     249,   445,   446,   449,     2,     3,   447,    36,    37,   448,
     250,    36,    37,   462,   271,     4,   463,   467,   468,   471,
       5,    35,   469,   472,    40,    36,    37,   478,    40,   860,
     477,   862,   863,   474,   476,   479,   481,   482,   487,   489,
     488,   492,    40,   135,   493,   494,   131,     5,     6,     7,
       8,     9,   116,   504,    10,    11,    12,   505,    13,    14,
      15,    16,   508,   118,    17,   511,   516,    18,    19,    20,
      21,    22,    23,    24,    25,   520,    26,    27,    28,    29,
      30,   519,   901,   522,   524,   525,   523,   526,   531,   532,
     533,   438,   537,   539,    31,   556,    32,   558,    33,    23,
     559,   457,  -296,    34,    27,    35,   561,   563,   566,    36,
      37,    38,   569,     1,   135,   568,   571,   131,     2,     3,
     574,   573,   575,   517,    39,   249,    40,   576,   577,     4,
     579,   578,   589,   580,     5,  1143,    36,    37,   582,   518,
     583,   587,   588,     7,  1148,   599,   591,   596,   592,   600,
     607,   598,   609,    40,   601,   612,   610,   618,   980,   613,
     621,   624,     6,     7,     8,     9,   619,   623,    10,    11,
      12,   626,    13,    14,    15,    16,  -220,     5,    17,     5,
     628,    18,    19,    20,    21,    22,    23,    24,    25,   629,
      26,    27,    28,    29,    30,   631,   634,   636,   635,   637,
     639,     1,   638,   543,   640,   653,     2,     3,    31,   664,
      32,   646,    33,   657,   659,   667,  -296,    34,   670,    35,
     662,   669,     5,    36,    37,    38,   674,   672,   675,    23,
     676,    23,   677,   689,    27,  1035,    27,   682,    39,   684,
      40,   685,   126,   690,   691,   692,   135,     2,     3,   131,
       6,     7,     8,     9,   693,   694,   695,    11,    12,  -296,
      13,    14,    15,     5,    35,   705,    36,    37,    36,    37,
      19,    20,    21,    22,    23,     5,    25,   706,    26,    27,
      28,   707,   708,    40,   709,    40,   711,   710,   712,   135,
     713,   714,   131,   716,   719,   717,    31,   718,    32,   721,
      33,   723,    14,    15,  -296,   306,     5,    35,   724,   722,
     736,    36,    37,   734,   284,    23,     5,    25,  1100,   126,
      27,   737,   738,   744,     2,     3,    39,    23,    40,   126,
     748,   756,    27,   749,     2,     3,   757,   127,   750,   164,
       5,   165,   754,   760,   762,   761,   166,   763,   130,   167,
       5,   765,    36,    37,   764,   766,   767,   771,    23,   768,
     769,   775,   329,    27,    36,    37,   774,   168,    23,    40,
     564,   678,   776,    27,   779,   780,   783,   160,   784,    14,
      15,    40,     2,     3,   701,   790,   791,   792,   793,    14,
      15,   795,    23,   796,    25,    36,    37,    27,     5,  -362,
     803,   797,    23,   802,    25,    36,    37,    27,   806,   807,
     809,   808,    40,   817,   127,  -163,    32,   819,   128,   820,
     816,   831,    40,   129,   127,   130,   164,   821,   165,    36,
      37,   825,   827,   166,   829,   130,   408,    14,    15,    36,
      37,     2,     3,   826,    39,   828,    40,   832,   834,   835,
      23,   836,    25,   838,   168,    27,    40,     5,   837,   839,
     840,   126,   842,   841,   843,   844,     2,     3,   845,   846,
     847,   848,   127,   849,    32,   850,    33,   851,   852,   856,
     854,   161,     5,   855,   864,   857,   858,    36,    37,   859,
     861,   319,   865,   868,   867,   870,    14,    15,   874,   878,
     875,   869,    39,   902,    40,   906,   879,   160,   877,    23,
     904,    25,     2,     3,    27,   907,   544,   911,   910,   912,
     918,    14,    15,   913,   919,   920,   921,   923,     5,   922,
     924,   127,   160,   409,    23,   410,    25,     2,     3,    27,
     161,   925,   451,   927,   928,   929,    36,    37,   931,   932,
     514,   936,   933,     5,   935,   937,   127,   938,    32,   945,
     128,    39,   940,    40,   941,   129,   946,    14,    15,   948,
    -137,    36,    37,   960,   963,   871,   972,   974,   408,   973,
      23,   981,    25,     2,     3,    27,    39,   983,    40,   975,
     976,   982,    14,    15,   984,   985,   986,   989,   987,     5,
     990,   991,   127,   126,    32,    23,    33,    25,     2,     3,
      27,   161,   992,   993,   994,   995,   998,    36,    37,  1001,
    1002,  1009,  1003,  1010,     5,  1004,  1005,   127,  1011,   164,
    -138,   320,    39,  1014,    40,  1012,   129,  1017,    14,    15,
    1018,  1015,    36,    37,  1016,  1021,  1022,  1023,  1029,  1028,
    1030,    23,  1031,    25,  1040,  1037,    27,   168,  1044,    40,
     786,  1041,  1045,    14,    15,  1046,  1048,  1047,  1049,  1055,
    1057,  1058,  1063,   127,  1064,   409,    23,   410,    25,  1065,
    1056,    27,   129,  1066,  1070,  1077,  1067,  1068,    36,    37,
    1069,  1071,  1086,  1090,  1072,  1094,  1074,  1075,   127,  1073,
      32,  1091,   128,    39,  1095,    40,  1088,   129,  1087,  1096,
    1106,  1089,  1092,    36,    37,   234,  1099,   235,   236,  1104,
    1093,  1098,  1107,  1101,  1103,  1122,  1119,  1120,    39,  1125,
      40,  1108,  1115,  1121,  1123,   237,   238,   239,   240,   241,
     242,  1124,  1126,   726,  1130,  1129,  1128,  1131,   243,   244,
     245,  1133,  1132,  1134,  1135,  1137,  1138,  1139,  1109,  1141,
    1142,  1146,  1147,  1144,  1145,  1149,  1150,  1151,   562,   567,
     673,   325,   997,   926,   460,  1020,  1083,  1084,   896,   950,
     970,  1054,  1114,   188,   954,  1136,   747,  1027,   663,   189,
     530,   483,   480,   348,  1102,   782,   658,  1000,   593,   338,
     353,     0,   515,   872,   788,     0,     0,   681,   354
};

static const yytype_int16 yycheck[] =
{
       4,   405,    35,    10,   161,   255,    10,   122,    10,   566,
     125,     0,   161,   280,    18,   392,    20,     5,   436,     4,
     653,   179,    26,   181,   113,   674,   816,    34,    32,    33,
      34,   270,    33,    18,   884,    39,   529,   885,   549,    33,
     899,   552,     9,     4,   417,     9,   135,    32,     4,   149,
     816,   318,   289,   819,    39,   292,     4,     4,   297,   829,
      43,   554,     4,   152,    34,     4,    90,   629,   444,    34,
      90,   103,    59,   441,    86,   448,     4,    55,    58,     4,
       4,    87,   109,   108,   110,   108,   108,    68,   126,    70,
     108,     4,    98,   118,   126,   117,   108,    84,   124,   126,
       4,    25,   126,   126,   508,   262,   130,   127,   126,   113,
     143,   115,    54,   262,   120,    54,    86,   121,   122,     4,
     524,   125,   771,   973,   501,   502,   109,     4,     4,     4,
     687,   135,   110,   103,    90,   512,     4,    58,   109,   650,
      25,   911,   109,    90,   520,   109,   126,   154,   152,   110,
     154,   112,   154,    77,   110,  1014,   649,   122,    82,   101,
     164,   103,   166,   167,   168,   166,    25,   200,   201,   202,
     203,   204,   166,   206,   207,   737,   544,   545,   126,   164,
     548,   185,   167,   168,   284,   285,   559,   129,   288,   955,
     114,   115,    77,   561,   118,   108,   433,    82,   126,   124,
     185,   834,   126,   852,   837,   126,   110,   131,   112,    55,
     126,    75,   118,   126,    90,    90,   634,   594,   595,   637,
      87,     4,    90,    82,   101,   110,   103,     4,   478,   114,
     115,    87,   108,  1081,   110,   110,    62,   614,   749,    86,
     389,  1091,   110,    58,   248,    62,   131,    87,    25,   253,
      87,    34,    87,   746,   118,   114,   115,  1107,    87,   126,
    1050,   126,   319,   248,    87,   272,   270,    58,   272,   326,
     126,   117,   131,   277,   121,   126,   644,   645,   517,  1129,
      36,    37,   122,     4,    40,   270,   126,    25,   403,   126,
      34,   126,   118,   297,    87,   532,   112,   126,   108,   306,
      77,   118,   306,   126,   311,    82,   122,   311,   341,   311,
     343,   126,   297,   563,   564,   319,   320,     9,    10,   320,
     103,   118,   326,   481,   413,   329,   320,   427,   428,    82,
     334,   122,   489,   126,   319,   126,    90,   114,   115,     4,
       4,   326,    86,   720,    82,   994,   495,   504,   981,   126,
      90,   103,   340,   101,   131,   103,   110,    87,   110,   103,
      25,   114,   115,   544,   545,   108,   117,   548,    98,     4,
     110,   120,    64,    65,   126,    91,   114,   115,   131,   383,
     384,   129,   108,   126,   128,   109,   390,    79,    86,   504,
      25,   117,   118,   131,   110,   111,   112,   113,   405,   403,
     109,   405,     0,   410,     4,   409,   410,   825,   108,   413,
     677,     4,    77,   417,    18,   792,    59,    82,   118,    66,
     424,   578,   109,   115,   409,    25,    69,   804,    58,   108,
       4,    78,    25,    63,   438,    78,   108,    84,   442,   996,
     444,    18,    77,   558,   448,  1002,   118,    82,   452,   114,
     115,    25,   108,   118,   106,   462,    92,    93,   462,   709,
     462,   450,   107,    25,    26,   107,   131,   871,   224,   225,
     226,   227,   228,   229,    92,    93,    90,    77,   482,   114,
     115,    87,    82,   118,    77,    25,   284,   285,   492,    82,
     288,   126,     5,     6,   120,   121,   131,    86,    87,   109,
     504,   508,   109,    77,   508,   117,   118,   492,    82,    71,
     109,  1068,   109,   517,   114,   115,   520,   524,   118,    98,
     524,   114,   115,    86,    87,   118,   131,   531,    86,    87,
     120,   131,   517,    95,    96,    97,   693,    77,   131,   121,
     114,   115,    82,   105,     4,    25,   117,    86,    87,     9,
      10,   117,   556,   108,   558,   559,   108,   131,   808,    86,
      87,   101,    26,   103,   117,    25,    87,   107,    86,    87,
     132,   133,   576,   117,   114,   115,   118,   117,   693,   114,
     115,   126,   127,   220,   221,   126,   513,   514,   222,   223,
     120,   131,   117,    53,    54,    55,    56,    77,   126,  1003,
      60,    61,    82,    63,    64,    65,   856,   126,     9,    10,
      25,   118,   100,    73,    74,    75,    76,    77,   868,    79,
     103,    81,    82,    83,   118,   875,     4,   104,    34,   109,
     105,   117,   130,    34,   114,   115,   640,   116,    78,    99,
     120,   101,  1046,   103,   126,   678,   104,   107,   108,   121,
     110,   131,    98,    98,   114,   115,   116,    23,    26,   692,
      24,   108,    77,    64,    65,   122,   122,    82,    25,   129,
     122,   131,    25,   923,   122,    89,   120,     4,    79,   122,
     122,   122,   686,   122,   122,    86,    25,   122,   122,   693,
      86,   118,    87,   108,     4,   699,   946,   701,   119,   114,
     115,   686,   103,   118,   119,     4,   119,   108,   118,   118,
     118,   126,    86,    89,   115,    54,   131,   118,     4,   126,
      77,   126,   972,   108,    77,    82,     4,   128,   129,    82,
     103,   117,    63,   126,    75,     4,   986,   987,    77,   119,
     990,   118,   126,    82,   101,     0,   103,   118,   101,     4,
     103,     4,    26,   103,     9,    10,   126,   114,   115,   117,
     117,   114,   115,    59,   117,    20,   102,   109,    63,   109,
      25,   110,   126,   118,   131,   114,   115,   120,   131,   783,
      63,   785,   786,   130,   130,    34,   109,    19,   121,   108,
     122,   117,   131,   800,   102,    86,   800,    25,    53,    54,
      55,    56,     4,    34,    59,    60,    61,   118,    63,    64,
      65,    66,   110,   817,    69,   102,   118,    72,    73,    74,
      75,    76,    77,    78,    79,   118,    81,    82,    83,    84,
      85,   116,   817,   109,    57,    43,   120,   127,   120,   110,
     110,   122,   110,   120,    99,   102,   101,    89,   103,    77,
     117,   126,   107,   108,    82,   110,   118,   120,   118,   114,
     115,   116,    86,     4,   871,   117,    26,   871,     9,    10,
     126,   119,   109,   101,   129,   103,   131,   117,   119,    20,
     116,   108,    34,   118,    25,  1135,   114,   115,   118,   117,
     109,   109,   109,    54,  1144,    86,   118,   126,   119,   119,
      19,   117,     4,   131,   118,   120,    57,   104,   912,   109,
       4,   118,    53,    54,    55,    56,   126,   126,    59,    60,
      61,    80,    63,    64,    65,    66,    67,    25,    69,    25,
     119,    72,    73,    74,    75,    76,    77,    78,    79,   118,
      81,    82,    83,    84,    85,   110,   118,   120,   112,   118,
     120,     4,   119,     4,   120,   118,     9,    10,    99,    67,
     101,   119,   103,   119,   119,   118,   107,   108,     4,   110,
     120,   118,    25,   114,   115,   116,    89,   126,    26,    77,
     102,    77,   118,    58,    82,   989,    82,   130,   129,   119,
     131,   126,     4,   118,   104,   109,  1003,     9,    10,  1003,
      53,    54,    55,    56,    34,   120,   118,    60,    61,   107,
      63,    64,    65,    25,   110,    98,   114,   115,   114,   115,
      73,    74,    75,    76,    77,    25,    79,   104,    81,    82,
      83,   126,   119,   131,   120,   131,     4,   119,   109,  1046,
     118,   110,  1046,   119,   102,   119,    99,   119,   101,   119,
     103,    58,    64,    65,   107,   108,    25,   110,    87,   127,
     127,   114,   115,    67,    90,    77,    25,    79,  1072,     4,
      82,   118,   110,   127,     9,    10,   129,    77,   131,     4,
     104,   127,    82,   110,     9,    10,    58,    99,   110,   101,
      25,   103,   110,   104,   126,   120,   108,   118,   110,   111,
      25,    57,   114,   115,   119,   119,   126,    89,    77,   118,
      75,    63,   120,    82,   114,   115,   118,   129,    77,   131,
     120,    90,   119,    82,   119,   126,   118,     4,   126,    64,
      65,   131,     9,    10,   110,   126,   109,    87,   119,    64,
      65,   119,    77,    58,    79,   114,   115,    82,    25,   118,
     104,   118,    77,   102,    79,   114,   115,    82,   104,   104,
     108,   119,   131,    18,    99,   126,   101,    57,   103,   126,
     117,   110,   131,   108,    99,   110,   101,   119,   103,   114,
     115,   118,   120,   108,   118,   110,     4,    64,    65,   114,
     115,     9,    10,   119,   129,   119,   131,   118,   118,   112,
      77,   104,    79,   119,   129,    82,   131,    25,   118,    87,
     127,     4,    58,   127,   118,   127,     9,    10,    58,   104,
       4,   118,    99,   119,   101,    57,   103,   108,    18,   120,
     119,   108,    25,   126,   126,   119,   119,   114,   115,   119,
     119,   118,    86,   119,    87,   118,    64,    65,   119,   109,
     120,   126,   129,   127,   131,   120,   128,     4,   126,    77,
     126,    79,     9,    10,    82,   119,    90,   118,   127,    88,
     104,    64,    65,   110,    87,   127,    58,   119,    25,   109,
     118,    99,     4,   101,    77,   103,    79,     9,    10,    82,
     108,   119,    68,   104,     4,   100,   114,   115,   108,   119,
     118,   117,   119,    25,   119,    34,    99,   109,   101,   104,
     103,   129,   119,   131,   126,   108,   120,    64,    65,     4,
      86,   114,   115,    86,     4,   118,   120,   127,     4,   117,
      77,   118,    79,     9,    10,    82,   129,   104,   131,   119,
     119,   119,    64,    65,   119,   104,   119,    88,   120,    25,
     120,   119,    99,     4,   101,    77,   103,    79,     9,    10,
      82,   108,   119,   109,    18,   104,   118,   114,   115,   109,
     118,    86,   117,   109,    25,   119,   119,    99,   127,   101,
      86,   103,   129,   117,   131,   127,   108,   108,    64,    65,
       9,   126,   114,   115,   126,   109,    86,   117,    58,   127,
     119,    77,   119,    79,   120,   110,    82,   129,   102,   131,
     122,   118,   104,    64,    65,   126,   109,   108,   119,   127,
     108,     4,   126,    99,    87,   101,    77,   103,    79,   127,
     114,    82,   108,   120,   109,   100,   119,   118,   114,   115,
     119,   119,   109,   100,   118,   127,   119,   118,    99,   126,
     101,   117,   103,   129,   104,   131,   126,   108,   130,   118,
      86,   130,   126,   114,   115,    90,   110,    92,    93,   109,
     126,   120,   120,   126,   126,   117,   119,   118,   129,   118,
     131,   127,   127,   119,   119,   110,   111,   112,   113,   114,
     115,   119,   108,   124,   117,   122,   130,   109,   123,   124,
     125,   109,   126,    58,   119,   119,   126,   114,     4,   127,
      87,   109,   108,   119,   119,    63,    43,   109,   450,   455,
     570,   176,   934,   848,   310,   962,  1050,  1050,   816,   884,
     899,  1015,  1092,    69,   886,  1120,   645,   973,   561,    69,
     428,   339,   334,   205,  1073,   693,   556,   936,   492,   196,
     218,    -1,   410,   800,   700,    -1,    -1,   576,   219
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     4,     9,    10,    20,    25,    53,    54,    55,    56,
      59,    60,    61,    63,    64,    65,    66,    69,    72,    73,
      74,    75,    76,    77,    78,    79,    81,    82,    83,    84,
      85,    99,   101,   103,   108,   110,   114,   115,   116,   129,
     131,   135,   136,   137,   138,   139,   140,   141,   143,   144,
     145,   146,   147,   148,   149,   150,   160,   161,   162,   163,
     165,   166,   167,   170,   206,   207,   208,   209,   210,   224,
     225,   226,   227,   229,   230,   233,   234,   236,   237,   239,
     250,   251,   252,   253,   254,   255,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   287,   288,   290,   292,   293,   294,   295,   297,
     303,   316,   317,   321,    98,   120,     4,   234,   236,   253,
     126,    75,   118,   126,   154,   118,     4,    99,   103,   108,
     110,   236,   310,   313,   314,   321,   126,   318,   126,   109,
       4,   103,   126,   110,   171,   232,   234,   236,   108,   118,
       4,   236,   283,   284,    59,    69,    78,   120,   109,   234,
       4,   108,   316,   317,   101,   103,   108,   111,   129,   289,
     291,   296,   310,   267,   278,   278,   117,   126,   231,   234,
     236,   300,   278,     0,    86,    18,   157,    84,   209,   226,
     109,   108,   126,   109,    86,   121,    18,   108,   108,    25,
      26,    71,    95,    96,    97,   105,   132,   133,   256,   257,
     259,   260,   261,   262,   263,   264,   265,   266,   106,   107,
      92,    93,     5,     6,    91,   110,   111,   112,   113,    90,
      87,   109,   109,   109,    90,    92,    93,   110,   111,   112,
     113,   114,   115,   123,   124,   125,   142,   109,   101,   103,
     117,   236,   293,   131,   236,   120,   117,   236,   229,   236,
     117,   229,   108,   101,   103,   129,   108,    26,    86,   108,
     101,   117,   117,    87,   117,   118,   126,   117,   267,   120,
     126,   118,   100,     4,    90,   110,   240,   241,   242,   243,
     244,   245,   246,   247,   249,   103,   118,   101,   103,   117,
     293,   310,   108,   126,     4,    63,   108,   138,   228,    55,
     110,    59,    84,   301,   302,   233,   303,   104,   118,   118,
     103,   316,   234,   118,    34,   139,   117,   130,   301,   120,
     301,   116,   234,   121,   126,   104,    98,    98,   237,    23,
      24,    26,   267,    25,   267,   267,   267,   267,   268,   267,
     267,   108,   258,   269,   271,   273,   273,   275,   275,   278,
     278,   278,   278,   278,   278,   108,   117,   118,   322,   122,
     122,   122,   122,   122,   112,   122,   122,   122,   122,   122,
     122,   122,    89,   120,   118,   126,   234,   285,   286,   108,
     118,     4,    87,   236,   118,   228,     4,   119,     4,   155,
     156,   119,    86,    89,   126,   126,   285,     4,     4,   101,
     103,   319,   320,   321,   108,     4,   103,   117,   109,   120,
     164,   236,    63,   231,    75,   246,   249,   126,   246,   119,
     246,   247,   249,   110,   112,   247,   118,    87,   122,   126,
     223,   118,   126,   285,   118,     4,    26,   126,   117,   103,
      43,    68,    70,   168,   169,   103,   110,   126,   151,   152,
     156,   310,    59,   102,   231,   232,   234,   109,    63,   126,
     298,   109,   118,   232,   130,   236,   130,    63,   120,    34,
     230,   109,    19,   251,   253,   267,   267,   121,   122,   108,
     236,   236,   117,   102,    86,   108,   126,   236,   304,   305,
     306,    86,    87,   322,    34,   118,   117,   118,   110,   229,
     313,   102,    86,   118,   118,   319,   118,   101,   117,   116,
     118,   164,   109,   120,    57,    43,   127,   236,   248,   249,
     248,   120,   110,   110,   247,    87,   126,   110,   244,   120,
     236,    87,   126,     4,    90,   110,   212,   213,   214,   215,
     216,   217,   218,   219,   221,   236,   102,   304,    89,   117,
     164,   118,   136,   120,   120,   236,   118,   152,   117,    86,
      55,    26,   310,   119,   126,   109,   117,   119,   108,   116,
     118,   228,   118,   109,   301,   236,   238,   109,   109,    34,
     303,   118,   119,   286,    86,    87,   126,   233,   117,    86,
     119,   118,   322,   322,   229,   235,   303,    19,   159,     4,
      57,   313,   120,   109,    86,   322,   318,   318,   104,   126,
     285,     4,   304,   126,   118,   313,    80,   172,   119,   118,
     223,   110,   236,   247,   118,   112,   120,   118,   119,   120,
     120,   222,   218,   221,   126,   218,   119,   218,   219,   221,
     110,   112,   219,   118,    58,   126,   223,   119,   287,   119,
     229,   164,   120,   212,    67,   228,   228,   118,   159,   118,
       4,   153,   126,   151,    89,    26,   102,   118,    90,   236,
     299,   300,   130,   303,   119,   126,    62,   118,   158,    58,
     118,   104,   109,    34,   120,   118,   322,   322,     4,    90,
     108,   110,   307,   308,   309,    98,   104,   126,   119,   120,
     119,     4,   109,   118,   110,   322,   119,   119,   119,   102,
      86,   119,   127,    58,    87,   110,   124,   174,   175,   176,
     177,   194,   196,   197,    67,   245,   127,   118,   110,   244,
      87,   126,   244,   236,   127,   220,   221,   220,   104,   110,
     110,   219,    87,   126,   110,   216,   127,    58,    58,   126,
     104,   120,   126,   118,   119,    57,   119,   126,   118,    75,
     250,    89,   231,   267,   118,    63,   119,   234,   159,   119,
     126,   267,   235,   118,   126,    34,   122,   236,   307,   236,
     126,   109,    87,   119,   228,   119,    58,   118,     4,   101,
     103,   315,   102,   104,    86,   322,   104,   104,   119,   108,
      34,    86,   103,   128,   187,   188,   117,    18,   173,    57,
     126,   119,    87,   126,   245,   118,   119,   120,   119,   118,
     223,   110,   118,   219,   118,   112,   104,   118,   119,    87,
     127,   127,    58,   118,   127,    58,   104,     4,   118,   119,
      57,   108,    18,   250,   119,   126,   120,   119,   119,   119,
     236,   119,   236,   236,   126,    86,   322,    87,   119,   126,
     118,   118,   314,   322,   119,   120,   228,   126,   109,   128,
       9,    64,    65,    79,   108,   115,   118,   129,   178,   179,
     181,   182,   183,   184,   186,   187,   188,   192,   193,   198,
     288,   234,   127,   187,   126,   195,   120,   119,   244,   217,
     127,   118,    88,   110,   216,    87,   126,   216,   104,    87,
     127,    58,   109,   119,   118,   119,   169,   104,     4,   100,
     250,   108,   119,   119,   228,   119,   117,    34,   109,   228,
     119,   126,   311,   312,   313,   104,   120,   228,     4,   175,
     194,     9,   109,   184,   195,    90,   126,   130,   199,   201,
      86,   114,   115,     4,    34,   103,   189,   190,   191,   190,
     191,   202,   120,   117,   127,   119,   119,    58,   126,   217,
     236,   118,   119,   104,   119,   104,   119,   120,   228,    88,
     120,   119,   119,   109,    18,   104,   118,   158,   118,     4,
     309,   109,   118,   117,   119,   119,   108,   126,   228,    86,
     109,   127,   127,   187,   117,   126,   126,   108,     9,   185,
     185,   109,    86,   117,   108,   228,   175,   196,   127,    58,
     119,   119,   216,   228,   228,   236,   228,   110,   250,   159,
     120,   118,   159,   313,   102,   104,   126,   108,   109,   119,
     108,   190,   200,   127,   201,   127,   114,   108,     4,   109,
     126,   203,   204,   126,    87,   127,   120,   119,   118,   119,
     109,   119,   118,   126,   119,   118,   313,   100,    64,    65,
      79,   115,   180,   181,   182,   288,   109,   130,   126,   130,
     100,   117,   126,   126,   127,   104,   118,   159,   120,   110,
     236,   126,   306,   126,   109,   109,    86,   120,   127,     4,
     175,   205,   126,   127,   204,   127,    58,    63,   211,   119,
     118,   119,   117,   119,   119,   118,   108,   175,   130,   122,
     117,   109,   126,   109,    58,   119,   211,   119,   126,   114,
     175,   127,    87,   228,   119,   119,   109,   108,   228,    63,
      43,   109
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   134,   135,   136,   137,   137,   138,   138,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   140,   140,   140,   140,   140,   140,   140,   141,   141,
     141,   141,   141,   141,   141,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   143,
     144,   145,   146,   147,   147,   147,   148,   148,   149,   150,
     150,   150,   151,   151,   151,   152,   152,   153,   153,   154,
     154,   155,   155,   156,   156,   157,   157,   158,   158,   158,
     159,   159,   160,   161,   161,   162,   162,   162,   163,   163,
     164,   164,   164,   164,   165,   165,   166,   167,   168,   168,
     169,   169,   170,   171,   171,   172,   172,   173,   174,   174,
     175,   175,   176,   176,   177,   178,   178,   178,   178,   178,
     178,   179,   179,   179,   179,   179,   179,   179,   180,   180,
     180,   180,   180,   180,   180,   181,   181,   182,   182,   183,
     183,   184,   185,   186,   186,   187,   187,   187,   188,   189,
     189,   189,   190,   190,   191,   191,   192,   193,   193,   194,
     195,   195,   196,   196,   197,   197,   198,   198,   198,   198,
     199,   200,   200,   200,   201,   202,   202,   202,   202,   203,
     204,   205,   206,   207,   207,   208,   208,   209,   210,   210,
     211,   211,   212,   212,   213,   213,   213,   213,   213,   214,
     214,   215,   215,   216,   216,   216,   217,   218,   218,   219,
     219,   220,   220,   221,   222,   223,   224,   225,   225,   226,
     227,   227,   228,   228,   229,   229,   230,   230,   231,   232,
     232,   233,   234,   234,   235,   235,   236,   236,   236,   237,
     238,   239,   240,   241,   241,   241,   241,   241,   242,   242,
     243,   243,   244,   244,   244,   245,   246,   246,   247,   247,
     248,   248,   249,   250,   251,   252,   253,   253,   254,   255,
     255,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   267,   268,   268,   269,   269,   270,   270,   271,   271,
     271,   272,   273,   274,   274,   274,   275,   275,   276,   276,
     276,   276,   276,   277,   278,   278,   279,   279,   279,   280,
     280,   281,   282,   283,   284,   284,   284,   284,   284,   285,
     285,   286,   286,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   288,
     289,   290,   291,   292,   292,   293,   293,   294,   295,   296,
     297,   298,   299,   299,   299,   300,   301,   301,   302,   302,
     303,   303,   304,   304,   305,   305,   305,   305,   305,   306,
     306,   306,   307,   307,   308,   308,   309,   309,   310,   310,
     311,   312,   312,   313,   313,   314,   314,   315,   315,   315,
     315,   316,   316,   316,   317,   317,   318,   319,   319,   319,
     320,   320,   320,   320,   321,   321,   321,   321,   321,   322,
     322,   322
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     4,     7,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     7,     4,
       8,     6,     7,     5,     2,     0,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     4,
       4,     1,     6,     0,     5,     2,     1,     1,     2,     3,
       9,     4,     6,     3,     1,     0,     3,     0,     5,     0,
       3,     0,     5,     3,     1,     5,     7,     0,     5,     7,
       0,     3,     7,    13,    14,    10,     9,     1,    11,    10,
       6,     1,     2,     1,     1,     1,     4,    10,     8,     3,
       0,     3,     7,     4,     1,     0,     6,     2,     1,     1,
       1,     1,     0,     3,     3,     1,     1,     2,     1,     1,
       2,     4,     2,     1,     1,     1,     1,     1,     4,     2,
       1,     1,     1,     1,     1,     3,     3,     1,     2,     1,
       2,     1,     1,     0,     1,     6,     1,     2,     1,     4,
       1,     2,     0,     3,     1,     1,     3,     4,     4,     4,
       0,     5,     1,     1,     2,     2,     2,     5,     7,     5,
       3,     0,     2,     4,     2,     3,     6,     6,     8,     3,
       3,     3,     4,     6,     1,     2,     1,     1,    16,    17,
       7,     1,     0,     1,     8,     6,     6,     4,     1,     3,
       4,     5,     6,     7,     6,     1,     2,     4,     5,     5,
       6,     6,     7,     3,     2,     2,     5,     2,     1,     1,
       0,    11,     4,     1,     8,     2,     2,     1,     6,     2,
       1,     4,     1,     3,     1,     1,     5,     1,     1,     1,
       1,     6,     1,     8,     6,     6,     4,     1,     3,     4,
       5,     6,     7,     6,     1,     2,     2,     3,     3,     4,
       4,     5,     1,     5,     1,     5,     1,     1,     2,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     5,     2,     2,     2,     2,     3,     2,     3,     2,
       3,     1,     3,     1,     3,     1,     0,     1,     3,     3,
       1,     1,     1,     3,     3,     1,     1,     1,     3,     3,
       3,     3,     3,     1,     1,     1,     2,     2,     2,     3,
       1,     2,     1,     1,     0,     3,     2,     6,     5,     3,
       6,    13,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     2,     2,     2,     1,     1,     2,     1,     1,
       5,     4,     9,     3,     3,     3,     6,     3,     4,     5,
       4,     6,     0,     2,     1,     3,     0,     1,    11,     9,
       3,     4,     0,     6,     0,     4,     2,    11,     1,     7,
       3,     3,     0,     2,     3,     1,     3,     2,     3,     9,
       6,     8,     2,     6,     1,     5,     7,     1,     3,     5,
       5,     1,     1,     3,     5,     6,     6,     5,     6,     1,
       1,     3,     5,     5,     5,     6,     4,     8,     3,     1,
       1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {

#line 2541 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 951 "pyparsergen.y"


int yyerror(){
        printf("\n------------------SYNTAX ERROR : at line NUM %d -------------------------\n",lineno);
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
