/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

