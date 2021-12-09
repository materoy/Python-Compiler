/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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
