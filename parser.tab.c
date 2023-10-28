
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
#line 1 "parser.y"

#pragma once 
#include "parser.tab.h"
#include "ast.h"
#include "util.h"

int yylex(void);
void yyerror(char* s);



/* Line 189 of yacc.c  */
#line 85 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
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

/* Line 214 of yacc.c  */
#line 13 "parser.y"

    struct ASTNode* node;
	char* text;



/* Line 214 of yacc.c  */
#line 207 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 219 "parser.tab.c"

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   243

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNRULES -- Number of states.  */
#define YYNSTATES  181

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   334

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    89,     2,     2,     2,    91,    84,     2,
      79,    80,    85,    86,    83,    87,     2,    90,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    99,    97,
      92,    96,    93,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    81,     2,    82,    94,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    95,     2,    88,     2,     2,     2,
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
      75,    76,    77,    78,    98
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    13,    15,    20,    24,
      29,    31,    35,    37,    40,    42,    44,    46,    48,    50,
      52,    54,    58,    62,    66,    68,    72,    76,    78,    82,
      86,    88,    92,    96,   100,   104,   106,   110,   114,   116,
     120,   122,   126,   128,   132,   134,   138,   140,   144,   146,
     150,   152,   154,   156,   158,   160,   162,   164,   166,   168,
     170,   172,   178,   180,   182,   184,   186,   188,   192,   197,
     199,   202,   204,   207,   212,   219,   224,   230,   232,   234,
     237,   240,   244,   246,   249,   251,   253,   255,   259,   262,
     267,   271,   277,   280,   286,   294,   301,   310,   317,   326,
     334,   344,   346,   350,   352
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     128,     0,    -1,     3,    -1,     4,    -1,     5,    -1,    79,
     117,    80,    -1,   101,    -1,   102,    81,   117,    82,    -1,
     102,    79,    80,    -1,   102,    79,   103,    80,    -1,   116,
      -1,   103,    83,   116,    -1,   102,    -1,   105,   101,    -1,
      84,    -1,    85,    -1,    86,    -1,    87,    -1,    88,    -1,
      89,    -1,   104,    -1,   106,    85,   104,    -1,   106,    90,
     104,    -1,   106,    91,   104,    -1,   106,    -1,   107,    86,
     106,    -1,   107,    87,   106,    -1,   107,    -1,   108,     9,
     107,    -1,   108,    10,   107,    -1,   108,    -1,   109,    92,
     108,    -1,   109,    93,   108,    -1,   109,    11,   108,    -1,
     109,    12,   108,    -1,   109,    -1,   110,    13,   109,    -1,
     110,    14,   109,    -1,   110,    -1,   111,    84,   110,    -1,
     111,    -1,   112,    94,   111,    -1,   112,    -1,   113,    95,
     112,    -1,   113,    -1,   114,    16,   113,    -1,   114,    -1,
     115,    17,   114,    -1,   115,    -1,   104,    96,   116,    -1,
     116,    -1,    56,    -1,    62,    -1,    60,    -1,    47,    -1,
      48,    -1,    61,    -1,    45,    -1,    59,    -1,     3,    -1,
     118,    -1,    27,    81,    82,    26,   119,    -1,   121,    -1,
     123,    -1,   124,    -1,   125,    -1,   127,    -1,    36,    37,
      97,    -1,    36,   122,    37,    97,    -1,   120,    -1,   122,
     120,    -1,    97,    -1,   117,    97,    -1,    69,   117,    28,
     120,    -1,    69,   117,    28,   120,    70,   120,    -1,    72,
     117,    73,   120,    -1,    34,   120,   126,   117,    97,    -1,
      72,    -1,    35,    -1,    77,    97,    -1,    78,    97,    -1,
      78,   117,    97,    -1,   129,    -1,   128,   129,    -1,   134,
      -1,     3,    -1,     3,    -1,   131,    83,     3,    -1,   131,
      97,    -1,   131,    99,   119,    97,    -1,   132,   131,    97,
      -1,   132,   131,    99,   119,    97,    -1,    29,   132,    -1,
      33,   130,    79,    80,   121,    -1,    33,   130,    79,    80,
      99,   119,   121,    -1,    33,   130,    79,   135,    80,   121,
      -1,    33,   130,    79,   135,    80,    99,   119,   121,    -1,
      33,   130,    79,    80,   133,   121,    -1,    33,   130,    79,
      80,    99,   119,   133,   121,    -1,    33,   130,    79,   135,
      80,   133,   121,    -1,    33,   130,    79,   135,    80,    99,
     119,   133,   121,    -1,   136,    -1,   135,    83,   136,    -1,
       3,    -1,     3,    99,   119,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    74,    74,    75,    76,    77,    81,    82,    83,    84,
      88,    89,    93,    94,    98,    99,   100,   101,   102,   103,
     107,   108,   109,   110,   114,   115,   116,   120,   121,   122,
     126,   127,   128,   129,   130,   134,   135,   136,   140,   141,
     145,   146,   150,   151,   155,   156,   160,   161,   165,   166,
     173,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     189,   190,   194,   195,   196,   197,   198,   202,   203,   207,
     208,   212,   213,   217,   218,   222,   223,   227,   228,   232,
     233,   234,   238,   239,   242,   244,   247,   248,   252,   253,
     254,   255,   258,   261,   262,   263,   264,   265,   266,   267,
     268,   272,   273,   276,   277
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP",
  "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "SIZEOF", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "OF", "ARRAY", "THEN",
  "VAR", "XOR_ASSIGN", "OR_ASSIGN", "TYPE_NAME", "METHOD", "REPEAT",
  "UNTIL", "T_BEGIN", "T_END", "TYPEDEF", "EXTERN", "STATIC", "AUTO",
  "REGISTER", "INLINE", "RESTRICT", "CHAR", "SHORT", "INT", "LONG",
  "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID",
  "BOOL", "COMPLEX", "IMAGINARY", "STRING", "UINT", "ULONG", "BYTE",
  "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE",
  "SWITCH", "WHILE", "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN",
  "'('", "')'", "'['", "']'", "','", "'&'", "'*'", "'+'", "'-'", "'~'",
  "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'='", "';'", "P_THEN",
  "':'", "$accept", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "assignment_expression", "expression", "type_atom", "type_ref",
  "statement", "compound_statement", "block_item_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "repeat_kind", "jump_statement", "translation_unit", "source_item",
  "fname", "varNames", "varsSpec", "varsSpecs", "function_definition",
  "arglistSpec", "arglistSpecItem", 0
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
     325,   326,   327,   328,   329,   330,   331,   332,   333,    40,
      41,    91,    93,    44,    38,    42,    43,    45,   126,    33,
      47,    37,    60,    62,    94,   124,    61,    59,   334,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   101,   101,   102,   102,   102,   102,
     103,   103,   104,   104,   105,   105,   105,   105,   105,   105,
     106,   106,   106,   106,   107,   107,   107,   108,   108,   108,
     109,   109,   109,   109,   109,   110,   110,   110,   111,   111,
     112,   112,   113,   113,   114,   114,   115,   115,   116,   116,
     117,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     119,   119,   120,   120,   120,   120,   120,   121,   121,   122,
     122,   123,   123,   124,   124,   125,   125,   126,   126,   127,
     127,   127,   128,   128,   129,   130,   131,   131,   132,   132,
     132,   132,   133,   134,   134,   134,   134,   134,   134,   134,
     134,   135,   135,   136,   136
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       1,     3,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     1,     1,     1,     1,     1,     3,     4,     1,
       2,     1,     2,     4,     6,     4,     5,     1,     1,     2,
       2,     3,     1,     2,     1,     1,     1,     3,     2,     4,
       3,     5,     2,     5,     7,     6,     8,     6,     8,     7,
       9,     1,     3,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    82,    84,    85,     0,     1,    83,     0,
     103,     0,     0,   101,     0,     0,     0,     0,    93,     0,
       0,     0,    59,     0,    57,    54,    55,    51,    58,    53,
      56,    52,    60,   104,    86,     0,    92,     2,     3,     4,
       0,     0,     0,     0,     0,     0,     0,    14,    15,    16,
      17,    18,    19,    71,     6,    12,    20,     0,    24,    27,
      30,    35,    38,    40,    42,    44,    46,    48,    50,     0,
      69,    62,     0,    63,    64,    65,    66,     0,    97,     0,
      95,     0,   102,     0,     0,    88,     0,     0,     0,    67,
       0,     0,    79,    80,     0,     0,     0,     0,     0,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,     0,
      70,    94,     0,     0,    99,     0,    87,     0,    90,     0,
      78,    77,     0,     0,     0,    81,     5,     8,     0,    10,
       0,    49,    21,    22,    23,    20,    25,    26,    28,    29,
      33,    34,    31,    32,    36,    37,    39,    41,    43,    45,
      47,    68,    98,    96,     0,     0,    89,     0,     0,    73,
      75,     9,     0,     7,   100,    61,    91,    76,     0,    11,
      74
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    54,    55,   138,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    32,    33,
      70,    71,    72,    73,    74,    75,   132,    76,     2,     3,
       6,    35,    36,    19,     4,    12,    13
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -71
static const yytype_int16 yypact[] =
{
     -23,    28,    14,   -71,   -71,   -71,   -44,   -71,   -71,     3,
     -62,    -6,   -26,   -71,   163,    36,    12,   163,   -71,     9,
      22,    56,   -71,   -16,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -63,    36,   -71,   -71,   -71,
     100,   -30,    73,    73,    -9,    58,    73,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -52,    17,     8,   -35,   -34,
      59,    -7,   119,    54,   -14,    -3,   135,   137,   -71,    68,
     -71,   -71,    38,   -71,   -71,   -71,   -71,    -4,   -71,   163,
     -71,     9,   -71,    74,   164,   -71,   163,   -59,   -28,   -71,
     140,    97,   -71,   -71,    76,    91,   115,    73,    73,   -71,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,   -71,    77,
     -71,   -71,     9,    -4,   -71,   149,   -71,    79,   -71,   163,
     -71,   -71,    73,   100,   100,   -71,   -71,   -71,    -1,   -71,
      98,   -71,   -71,   -71,   -71,   -71,   -35,   -35,   -34,   -34,
      59,    59,    59,    59,    -7,    -7,   119,    54,   -14,    -3,
     135,   -71,   -71,   -71,     9,   163,   -71,    84,    85,   113,
     -71,   -71,    73,   -71,   -71,   -71,   -71,   -71,   100,   -71,
     -71
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -71,   134,   -71,   -71,   126,   -71,    37,    43,    21,    52,
      80,    78,    81,    82,    88,   -71,   -70,   -24,   -71,   -15,
     -39,   -11,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   204,
     -71,   171,   -71,   -17,   -71,   -71,   188
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      18,    88,    77,    81,   107,   108,    10,   130,    78,    80,
       1,    37,    38,    39,     7,    37,    38,    39,    90,    91,
      84,    94,    95,    15,    84,    15,   139,    96,   141,    97,
      16,     5,    16,   120,    85,     9,    86,    14,   128,    34,
     129,    37,    38,    39,   131,    16,    40,     1,    16,    41,
     100,    15,   103,   104,    20,   101,   102,    21,    16,    10,
     122,    37,    38,    39,   123,    83,   121,    89,   105,   106,
     124,   127,    40,   140,    16,   119,    37,    38,    39,   171,
     114,    42,   172,    11,    43,   109,   110,    46,    92,    44,
      45,    46,   115,    17,   169,   170,    47,    48,    49,    50,
      51,    52,   179,    37,    38,    39,   164,    42,   168,    53,
      43,   162,   163,    98,   167,    44,    45,    46,    37,    38,
      39,    79,    47,    48,    49,    50,    51,    52,   150,   151,
     152,   153,   111,   112,    40,    53,    16,    46,   113,   180,
     146,   147,    47,    48,    49,    50,    51,    52,   148,   149,
     175,   116,    46,   174,   117,    93,   125,    47,    48,    49,
      50,    51,    52,   154,   155,   118,    22,   126,   133,    42,
     134,   136,    43,   135,   161,   165,   166,    44,    45,    46,
     173,   176,   177,   178,    47,    48,    49,    50,    51,    52,
      23,    99,   157,   156,    46,   137,   158,    53,   159,    47,
      48,    49,    50,    51,    52,   160,     8,    87,    24,    82,
      25,    26,     0,     0,     0,     0,     0,     0,     0,    27,
       0,     0,    28,    29,    30,    31,   142,   143,   144,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145
};

static const yytype_int16 yycheck[] =
{
      11,    40,    17,    20,    11,    12,     3,    35,    19,    20,
      33,     3,     4,     5,     0,     3,     4,     5,    42,    43,
      83,    45,    46,    29,    83,    29,    96,    79,    98,    81,
      36,     3,    36,    72,    97,    79,    99,    99,    97,     3,
      99,     3,     4,     5,    72,    36,    34,    33,    36,    37,
      85,    29,    86,    87,    80,    90,    91,    83,    36,     3,
      77,     3,     4,     5,    79,    81,    77,    97,     9,    10,
      81,    86,    34,    97,    36,    37,     3,     4,     5,    80,
      94,    69,    83,    80,    72,    92,    93,    79,    97,    77,
      78,    79,    95,    99,   133,   134,    84,    85,    86,    87,
      88,    89,   172,     3,     4,     5,   123,    69,   132,    97,
      72,   122,   123,    96,   129,    77,    78,    79,     3,     4,
       5,    99,    84,    85,    86,    87,    88,    89,   107,   108,
     109,   110,    13,    14,    34,    97,    36,    79,    84,   178,
     103,   104,    84,    85,    86,    87,    88,    89,   105,   106,
     165,    16,    79,   164,    17,    97,    82,    84,    85,    86,
      87,    88,    89,   111,   112,    97,     3,     3,    28,    69,
      73,    80,    72,    97,    97,    26,    97,    77,    78,    79,
      82,    97,    97,    70,    84,    85,    86,    87,    88,    89,
      27,    57,   114,   113,    79,    80,   115,    97,   116,    84,
      85,    86,    87,    88,    89,   117,     2,    36,    45,    21,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    59,    60,    61,    62,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    33,   128,   129,   134,     3,   130,     0,   129,    79,
       3,    80,   135,   136,    99,    29,    36,    99,   121,   133,
      80,    83,     3,    27,    45,    47,    48,    56,    59,    60,
      61,    62,   118,   119,     3,   131,   132,     3,     4,     5,
      34,    37,    69,    72,    77,    78,    79,    84,    85,    86,
      87,    88,    89,    97,   101,   102,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     120,   121,   122,   123,   124,   125,   127,   119,   121,    99,
     121,   133,   136,    81,    83,    97,    99,   131,   120,    97,
     117,   117,    97,    97,   117,   117,    79,    81,    96,   101,
      85,    90,    91,    86,    87,     9,    10,    11,    12,    92,
      93,    13,    14,    84,    94,    95,    16,    17,    97,    37,
     120,   121,   133,   119,   121,    82,     3,   119,    97,    99,
      35,    72,   126,    28,    73,    97,    80,    80,   103,   116,
     117,   116,   104,   104,   104,   104,   106,   106,   107,   107,
     108,   108,   108,   108,   109,   109,   110,   111,   112,   113,
     114,    97,   121,   121,   133,    26,    97,   119,   117,   120,
     120,    80,    83,    82,   121,   119,    97,    97,    70,   116,
     120
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
        case 2:

/* Line 1455 of yacc.c  */
#line 74 "parser.y"
    {(yyval.node) = createNode("IDENTIFIER", NULL,NULL, (yyvsp[(1) - (1)].text));;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 75 "parser.y"
    {(yyval.node) = createNode("CONSTANT", NULL,NULL, (yyvsp[(1) - (1)].text));;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 76 "parser.y"
    {(yyval.node) = createNode("STRING_LITERAL", NULL,NULL, (yyvsp[(1) - (1)].text));;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 77 "parser.y"
    {(yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 81 "parser.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 82 "parser.y"
    {(yyval.node) = createNode("postfix_expression", (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), "");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 83 "parser.y"
    {(yyval.node) = createNode("postfix_expression", (yyvsp[(1) - (3)].node), NULL, ""); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 84 "parser.y"
    {(yyval.node) = createNode("postfix_expression", (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), "");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 88 "parser.y"
    {(yyval.node) = createNode("argument_expression_list", (yyvsp[(1) - (1)].node), NULL, "");;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 89 "parser.y"
    {(yyval.node) = createNode("argument_expression_list", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 93 "parser.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 94 "parser.y"
    {(yyval.node) = createNode("unary_expression", (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node), "");;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 98 "parser.y"
    {(yyval.node) = NULL;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 99 "parser.y"
    {(yyval.node) = NULL;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 100 "parser.y"
    {(yyval.node) = NULL;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 101 "parser.y"
    {(yyval.node) = NULL;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 102 "parser.y"
    {(yyval.node) = NULL;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 103 "parser.y"
    {(yyval.node) = NULL;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 107 "parser.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 108 "parser.y"
    {(yyval.node) = createNode("'*'", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 109 "parser.y"
    {(yyval.node) = createNode("'/'", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 110 "parser.y"
    {(yyval.node) = createNode("'%'", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 114 "parser.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 115 "parser.y"
    {(yyval.node) = createNode("'+'", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 116 "parser.y"
    {(yyval.node) = createNode("'-'", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 120 "parser.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 121 "parser.y"
    {(yyval.node) = createNode("LEFT_OP", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 122 "parser.y"
    {(yyval.node) = createNode("RIGHT_OP", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 126 "parser.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 127 "parser.y"
    {(yyval.node) = createNode("'<'", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 128 "parser.y"
    {(yyval.node) = createNode("'>'", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 129 "parser.y"
    {(yyval.node) = createNode("LE_OP", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 130 "parser.y"
    {(yyval.node) = createNode("GE_OP", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 134 "parser.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 135 "parser.y"
    {(yyval.node) = createNode("EQ_OP", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 136 "parser.y"
    {(yyval.node) = createNode("NE_OP", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 140 "parser.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 141 "parser.y"
    {(yyval.node) = createNode("'&'", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 145 "parser.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 146 "parser.y"
    {(yyval.node) = createNode("'^'", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 150 "parser.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 151 "parser.y"
    {(yyval.node) = createNode("'|'", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 155 "parser.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 156 "parser.y"
    {(yyval.node) = createNode("AND_OP", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 160 "parser.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 161 "parser.y"
    {(yyval.node) = createNode("OR_OP", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 165 "parser.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 166 "parser.y"
    {(yyval.node) = createNode("assignment_expression", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 173 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 177 "parser.y"
    {(yyval.node) = createNode("BOOL", NULL,NULL, "");;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 178 "parser.y"
    {(yyval.node) = createNode("BYTE", NULL,NULL, "");;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 179 "parser.y"
    {(yyval.node) = createNode("UINT", NULL,NULL, "");;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 180 "parser.y"
    {(yyval.node) = createNode("INT", NULL,NULL, "");;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 181 "parser.y"
    {(yyval.node) = createNode("LONG", NULL,NULL, "");;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 182 "parser.y"
    {(yyval.node) = createNode("ULONG", NULL,NULL, "");;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 183 "parser.y"
    {(yyval.node) = createNode("CHAR", NULL,NULL, "");;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 184 "parser.y"
    {(yyval.node) = createNode("STRING", NULL,NULL, "");;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 185 "parser.y"
    {(yyval.node) = createNode("IDENTIFIER", NULL,NULL, "");;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 190 "parser.y"
    {(yyval.node) = createNode("type_ref", (yyvsp[(5) - (5)].node),NULL, "");;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 194 "parser.y"
    {(yyval.node) =  (yyvsp[(1) - (1)].node);;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 195 "parser.y"
    {(yyval.node) =  (yyvsp[(1) - (1)].node);;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 196 "parser.y"
    {(yyval.node) =  (yyvsp[(1) - (1)].node);;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 197 "parser.y"
    {(yyval.node) =  (yyvsp[(1) - (1)].node);;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 198 "parser.y"
    {(yyval.node) =  (yyvsp[(1) - (1)].node);;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 203 "parser.y"
    {(yyval.node) = createNode("compound_statement", (yyvsp[(2) - (4)].node),NULL, "");;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 207 "parser.y"
    {(yyval.node) =  (yyvsp[(1) - (1)].node);;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 208 "parser.y"
    {(yyval.node) = createNode("block_item_list", (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node), "");;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 212 "parser.y"
    {(yyval.node) = NULL;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 213 "parser.y"
    {(yyval.node) = createNode("expression_statement", (yyvsp[(1) - (2)].node), NULL, "");;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 217 "parser.y"
    {(yyval.node) = createNode("if_statement", (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node), "");;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 218 "parser.y"
    {(yyval.node) = createNode("if_statement", (yyvsp[(2) - (6)].node), createNode("else", (yyvsp[(4) - (6)].node), (yyvsp[(6) - (6)].node), ""), "");;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 222 "parser.y"
    {(yyval.node) = createNode("while", (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node), "");;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 223 "parser.y"
    {(yyval.node) = createNode("iteration_statement", createNode("repeat", (yyvsp[(2) - (5)].node), NULL, ""), (yyvsp[(4) - (5)].node), "");;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 227 "parser.y"
    {(yyval.node) = createNode("while", (yyvsp[(1) - (1)].node), NULL, "");;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 228 "parser.y"
    {(yyval.node) = createNode("until", (yyvsp[(1) - (1)].node), NULL, "");;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 232 "parser.y"
    {(yyval.node) = createNode("BREAK", NULL, NULL, "");;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 233 "parser.y"
    {(yyval.node) = createNode("RETURN", (yyvsp[(1) - (2)].node), NULL, "");;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 234 "parser.y"
    {(yyval.node) = createNode("RETURN", (yyvsp[(1) - (3)].node), NULL, "");;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 238 "parser.y"
    {(yyval.node) =  (yyvsp[(1) - (1)].node);;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 239 "parser.y"
    {(yyval.node) = createNode("translation_unit", (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node), "");;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 242 "parser.y"
    {(yyval.node) =  (yyvsp[(1) - (1)].node);;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 244 "parser.y"
    {(yyval.node) = createNode("fname", NULL, NULL, (yyvsp[(1) - (1)].text));;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 247 "parser.y"
    {(yyval.node) = createNode("vname", NULL, NULL, (yyvsp[(1) - (1)].text));;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 248 "parser.y"
    {(yyval.node) = createNode("vname", (yyvsp[(1) - (3)].node), NULL, (yyvsp[(3) - (3)].text));;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 252 "parser.y"
    {(yyval.node) = createNode("varsSpec", NULL, createNode("varsSpec", (yyvsp[(1) - (2)].node), NULL, ""), "");;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 253 "parser.y"
    {(yyval.node) = createNode("varsSpec", NULL, createNode("varsSpec", (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), ""), "");;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 254 "parser.y"
    {(yyval.node) = createNode("varsSpec", (yyvsp[(1) - (3)].node), createNode("varsSpec", (yyvsp[(2) - (3)].node), NULL, ""), "");;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 255 "parser.y"
    {(yyval.node) = createNode("varsSpec", (yyvsp[(1) - (5)].node), createNode("varsSpec", (yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node), ""), "");;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 258 "parser.y"
    { (yyval.node) = (yyvsp[(2) - (2)].node) ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 261 "parser.y"
    {(yyval.node) = createNode("function_definition", createNode("signature", (yyvsp[(2) - (5)].node), NULL, ""), (yyvsp[(5) - (5)].node), "");;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 262 "parser.y"
    {(yyval.node) = createNode("function_definition", createNode("signature", (yyvsp[(2) - (7)].node), createNode("types", NULL, (yyvsp[(6) - (7)].node), ""), ""), (yyvsp[(7) - (7)].node), "");;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 263 "parser.y"
    {(yyval.node) = createNode("function_definition", createNode("signature", (yyvsp[(2) - (6)].node), createNode("types", (yyvsp[(4) - (6)].node), NULL, ""), ""), (yyvsp[(6) - (6)].node), "");;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 264 "parser.y"
    {(yyval.node) = createNode("function_definition", createNode("signature", (yyvsp[(2) - (8)].node), createNode("types", (yyvsp[(4) - (8)].node), (yyvsp[(7) - (8)].node), ""), ""), (yyvsp[(8) - (8)].node), "");;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 265 "parser.y"
    {(yyval.node) = createNode("function_definition", createNode("signature1", (yyvsp[(2) - (6)].node), NULL, ""), createNode("body", (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].node), ""), "");;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 266 "parser.y"
    {(yyval.node) = createNode("function_definition", createNode("signature2", (yyvsp[(2) - (8)].node), createNode("types", NULL, (yyvsp[(6) - (8)].node), ""), ""), createNode("body", (yyvsp[(7) - (8)].node), (yyvsp[(8) - (8)].node), ""), "");;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 267 "parser.y"
    {(yyval.node) = createNode("function_definition", createNode("signature3", (yyvsp[(2) - (7)].node), createNode("types", (yyvsp[(4) - (7)].node), NULL, ""), ""), createNode("body", (yyvsp[(6) - (7)].node), (yyvsp[(7) - (7)].node), ""), "");;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 268 "parser.y"
    {(yyval.node) = createNode("function_definition", createNode("signature4", (yyvsp[(2) - (9)].node), createNode("types", (yyvsp[(4) - (9)].node), (yyvsp[(7) - (9)].node), ""), ""), createNode("body", (yyvsp[(8) - (9)].node), (yyvsp[(9) - (9)].node), ""), "");;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 272 "parser.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 273 "parser.y"
    {(yyval.node) = createNode("arglistSpec", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 276 "parser.y"
    {(yyval.node) = (yyvsp[(1) - (1)].text);;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 277 "parser.y"
    {(yyval.node) = createNode("arglistSpecItem", (yyvsp[(3) - (3)].node),NULL, "");;}
    break;



/* Line 1455 of yacc.c  */
#line 2327 "parser.tab.c"
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
#line 279 "parser.y"


