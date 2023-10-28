
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     CONSTANT = 259,
     STRING_LITERAL = 260,
     PTR_OP = 261,
     INC_OP = 262,
     DEC_OP = 263,
     LEFT_OP = 264,
     RIGHT_OP = 265,
     LE_OP = 266,
     GE_OP = 267,
     EQ_OP = 268,
     NE_OP = 269,
     SIZEOF = 270,
     AND_OP = 271,
     OR_OP = 272,
     MUL_ASSIGN = 273,
     DIV_ASSIGN = 274,
     MOD_ASSIGN = 275,
     ADD_ASSIGN = 276,
     SUB_ASSIGN = 277,
     LEFT_ASSIGN = 278,
     RIGHT_ASSIGN = 279,
     AND_ASSIGN = 280,
     OF = 281,
     ARRAY = 282,
     THEN = 283,
     VAR = 284,
     XOR_ASSIGN = 285,
     OR_ASSIGN = 286,
     TYPE_NAME = 287,
     METHOD = 288,
     REPEAT = 289,
     UNTIL = 290,
     T_BEGIN = 291,
     T_END = 292,
     TYPEDEF = 293,
     EXTERN = 294,
     STATIC = 295,
     AUTO = 296,
     REGISTER = 297,
     INLINE = 298,
     RESTRICT = 299,
     CHAR = 300,
     SHORT = 301,
     INT = 302,
     LONG = 303,
     SIGNED = 304,
     UNSIGNED = 305,
     FLOAT = 306,
     DOUBLE = 307,
     CONST = 308,
     VOLATILE = 309,
     VOID = 310,
     BOOL = 311,
     COMPLEX = 312,
     IMAGINARY = 313,
     STRING = 314,
     UINT = 315,
     ULONG = 316,
     BYTE = 317,
     STRUCT = 318,
     UNION = 319,
     ENUM = 320,
     ELLIPSIS = 321,
     CASE = 322,
     DEFAULT = 323,
     IF = 324,
     ELSE = 325,
     SWITCH = 326,
     WHILE = 327,
     DO = 328,
     FOR = 329,
     GOTO = 330,
     CONTINUE = 331,
     BREAK = 332,
     RETURN = 333,
     P_THEN = 334
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 13 "parser.y"

    struct ASTNode* node;
	char* text;



/* Line 1676 of yacc.c  */
#line 138 "parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


