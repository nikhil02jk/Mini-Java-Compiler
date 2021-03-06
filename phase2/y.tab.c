/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "codeinter.y"

#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include "lex.yy.c"
#include<ctype.h>


void codegen_umin();
void push();
void pushId(char *name);
void codegen();
void codegen_umin();
void codegen_assign();
void yyerror (char const *);
void printStack();
void lab1();
void  lab2();
void lab3() ;
void lab1f();
void lab2f();
void lab3f() ;
void lab4f();
void my_itoa(int num, char temp1[20]);
void print_INT_CODE();
int isDigit(char t[100]);
void copy();
//extern char yytext[];

struct OPT
{
	char op[10];
	char arg1[10];
	char arg2[10];
	char result[10];
};

struct OPT QIC[100];
struct OPT OPT[100];
int ind = 0;
int oind =0;


#line 116 "y.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

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

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUM = 258,
    DECIMAL = 259,
    IDENTIFIER = 260,
    CONSTANT = 261,
    STRING_LITERAL = 262,
    INC_OP = 263,
    DEC_OP = 264,
    LE = 265,
    GE = 266,
    EQ = 267,
    NE_OP = 268,
    DEQ = 269,
    AND_OP = 270,
    OR_OP = 271,
    MUL_ASSIGN = 272,
    DIV_ASSIGN = 273,
    MOD = 274,
    ADD_ASSIGN = 275,
    SUB_ASSIGN = 276,
    TYPEDEF = 277,
    STATIC = 278,
    CHAR = 279,
    INT = 280,
    FLOAT = 281,
    CONST = 282,
    VOID = 283,
    IF = 284,
    ELSE = 285,
    FOR = 286,
    GOTO = 287,
    CONTINUE = 288,
    BREAK = 289,
    RETURN = 290,
    TRUE1 = 291,
    FALSE1 = 292,
    BOOLEAN = 293,
    IMPORT = 294,
    CLASS = 295,
    PACKAGE = 296,
    MAIN = 297,
    STRING = 298,
    ARGS = 299,
    PUBLIC = 300,
    SOP = 301,
    OC = 302,
    CC = 303,
    OF = 304,
    CF = 305,
    OS = 306,
    FS = 307,
    ADD = 308,
    SUB = 309,
    MUL = 310,
    DIV = 311,
    LT = 312,
    GT = 313,
    COMMA = 314,
    COL = 315,
    DOT = 316,
    BIT_AND = 317,
    NOT = 318,
    EXP = 319,
    BIT_OR = 320,
    QUE = 321,
    SEMC = 322,
    NE = 323
  };
#endif
/* Tokens.  */
#define NUM 258
#define DECIMAL 259
#define IDENTIFIER 260
#define CONSTANT 261
#define STRING_LITERAL 262
#define INC_OP 263
#define DEC_OP 264
#define LE 265
#define GE 266
#define EQ 267
#define NE_OP 268
#define DEQ 269
#define AND_OP 270
#define OR_OP 271
#define MUL_ASSIGN 272
#define DIV_ASSIGN 273
#define MOD 274
#define ADD_ASSIGN 275
#define SUB_ASSIGN 276
#define TYPEDEF 277
#define STATIC 278
#define CHAR 279
#define INT 280
#define FLOAT 281
#define CONST 282
#define VOID 283
#define IF 284
#define ELSE 285
#define FOR 286
#define GOTO 287
#define CONTINUE 288
#define BREAK 289
#define RETURN 290
#define TRUE1 291
#define FALSE1 292
#define BOOLEAN 293
#define IMPORT 294
#define CLASS 295
#define PACKAGE 296
#define MAIN 297
#define STRING 298
#define ARGS 299
#define PUBLIC 300
#define SOP 301
#define OC 302
#define CC 303
#define OF 304
#define CF 305
#define OS 306
#define FS 307
#define ADD 308
#define SUB 309
#define MUL 310
#define DIV 311
#define LT 312
#define GT 313
#define COMMA 314
#define COL 315
#define DOT 316
#define BIT_AND 317
#define NOT 318
#define EXP 319
#define BIT_OR 320
#define QUE 321
#define SEMC 322
#define NE 323

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 48 "codeinter.y"

        int number;
        char *string;
        bool *boo;
       
        

#line 312 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
typedef yytype_uint8 yy_state_t;

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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   176

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  157

#define YYUNDEFTOK  2
#define YYMAXUTOK   323


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      65,    66,    67,    68
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    87,    87,    90,    92,    94,    95,    96,    97,   100,
     102,   104,   107,   108,   111,   112,   113,   114,   115,   118,
     121,   122,   123,   126,   126,   126,   127,   128,   132,   132,
     132,   133,   134,   137,   137,   137,   138,   139,   142,   143,
     147,   147,   148,   148,   149,   149,   150,   150,   151,   151,
     152,   152,   153,   153,   153,   154,   155,   156,   160,   160,
     161,   161,   162,   162,   163,   163,   164,   164,   164,   165,
     166,   166,   168,   168,   169,   169,   177,   177,   177,   182,
     185,   185,   185,   188,   189,   190,   194,   195,   198,   199
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "DECIMAL", "IDENTIFIER",
  "CONSTANT", "STRING_LITERAL", "INC_OP", "DEC_OP", "LE", "GE", "EQ",
  "NE_OP", "DEQ", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD",
  "ADD_ASSIGN", "SUB_ASSIGN", "TYPEDEF", "STATIC", "CHAR", "INT", "FLOAT",
  "CONST", "VOID", "IF", "ELSE", "FOR", "GOTO", "CONTINUE", "BREAK",
  "RETURN", "TRUE1", "FALSE1", "BOOLEAN", "IMPORT", "CLASS", "PACKAGE",
  "MAIN", "STRING", "ARGS", "PUBLIC", "SOP", "OC", "CC", "OF", "CF", "OS",
  "FS", "ADD", "SUB", "MUL", "DIV", "LT", "GT", "COMMA", "COL", "DOT",
  "BIT_AND", "NOT", "EXP", "BIT_OR", "QUE", "SEMC", "NE", "$accept", "S",
  "compilation_unit", "package_statement", "import_statement",
  "class_name", "class_stmt", "main_method", "sl", "s1",
  "variable_declaration", "dtypes", "ids1", "$@1", "$@2", "ids2", "$@3",
  "$@4", "ids3", "$@5", "$@6", "expression", "rel_e", "$@7", "$@8", "$@9",
  "$@10", "$@11", "$@12", "$@13", "$@14", "arithm_e", "$@15", "$@16",
  "$@17", "$@18", "$@19", "$@20", "$@21", "$@22", "$@23", "if_stmt",
  "$@24", "$@25", "for_stmt", "for_args", "$@26", "$@27", "arg1", "arg2",
  "arg3", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323
};
# endif

#define YYPACT_NINF (-135)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-90)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -36,     8,     7,  -135,   -21,   -48,  -135,    -2,   -20,  -135,
     -35,   -39,   -38,   -13,  -135,   -24,  -135,  -135,    27,   -15,
    -135,    -3,  -135,    13,    36,    10,    37,  -135,    22,    19,
      26,    29,    18,    38,    43,    44,  -135,    25,     0,    80,
      90,    51,    54,  -135,  -135,    99,  -135,  -135,  -135,    39,
    -135,    46,  -135,   118,   113,  -135,  -135,   109,   110,   115,
     121,   122,    76,   124,    78,    12,    71,   128,    83,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,   131,   139,   133,   141,
      85,   118,  -135,  -135,   100,  -135,   135,   144,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,    12,   145,
    -135,  -135,  -135,  -135,  -135,   102,    86,  -135,  -135,     2,
     -32,   -32,   -32,   -32,   -40,   -40,  -135,  -135,   -32,   -32,
    -135,   -32,   145,   145,   103,  -135,    50,    12,   -32,   -32,
    -135,    52,  -135,  -135,  -135,    74,  -135,    87,  -135,    -1,
     125,   -32,  -135,   108,  -135,    89,  -135
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     8,     0,     1,     0,     0,     4,
       9,     0,     0,     0,     3,     0,     7,     6,     0,     0,
       9,     0,     5,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,    13,    70,    69,     0,
       0,     0,     0,    55,    56,     0,    11,    18,    12,     0,
      19,     0,    38,    39,     0,    16,    17,     0,     0,     0,
       0,    27,    20,    32,    21,    70,    70,    37,    22,    14,
      15,    44,    46,    50,    48,    58,    60,    62,    64,    40,
      42,    71,    53,    67,    73,    75,     0,     0,     0,     0,
       0,    57,    83,    84,     0,    80,     0,     0,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      24,    26,    29,    31,    76,     0,     0,    34,    36,    69,
      45,    47,    51,    49,    59,    61,    63,    65,    41,    43,
      54,    68,    70,    70,     0,    13,    70,    70,    25,    30,
      13,    70,    86,    81,    35,    70,    79,     0,    77,    70,
       0,    88,    82,     0,    13,    70,    78
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -135,  -135,  -135,  -135,  -135,   140,  -135,  -135,  -134,  -135,
      93,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,    94,   -63,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,   -65,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     8,    12,    14,    25,    37,    48,
      49,    50,    62,    86,   132,    64,    88,   133,    68,    96,
     137,    51,    52,   106,   107,    98,    99,   101,   100,    57,
     108,    53,   102,   103,   104,   105,    58,   109,    54,    59,
      60,    55,   134,   150,    56,    94,   116,   147,    95,   143,
     152
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      91,   141,    90,    10,   119,     1,   145,     6,   -72,   -74,
     -72,   -74,   -52,     5,   -66,    77,    78,    38,     7,     9,
     155,    75,    76,    77,    78,    13,    15,    18,    16,    17,
      38,    19,    20,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,    91,   131,   130,    23,   -89,    43,    44,
      39,    40,    22,    11,    41,    38,    42,    38,    24,    26,
      27,    43,    44,    45,    29,    28,    30,   138,   139,    31,
      33,    91,    91,   142,   144,    46,    38,    39,    40,    38,
      32,    41,    34,    42,   151,    61,    43,    44,    43,    44,
      45,    35,    47,    36,    38,    63,    39,    40,    65,    39,
      40,    66,   146,    41,    67,    42,    69,    43,    44,    45,
      43,    44,    45,    70,    39,    40,    81,   -87,    41,    47,
      42,    82,    83,    84,   148,    43,    44,    45,    71,    72,
      85,    73,    74,   114,   -23,    87,   -28,    89,   -85,   156,
     -33,    47,    97,   110,   111,   112,   113,   117,   115,   118,
     119,   135,   140,   136,   149,   153,    47,   154,    21,    92,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    75,    76,    77,    78,    79,    80
};

static const yytype_int16 yycheck[] =
{
      65,   135,    65,     5,     5,    41,   140,     0,     8,     9,
       8,     9,    12,     5,    12,    55,    56,     5,    39,    67,
     154,    53,    54,    55,    56,    45,    61,    40,    67,    67,
       5,    55,     5,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   108,    49,    48,    36,    37,
      25,    26,    67,    55,    29,     5,    31,     5,    45,    23,
      50,    36,    37,    38,    42,    28,    47,   132,   133,    43,
      52,   136,   137,   136,   137,    50,     5,    25,    26,     5,
      51,    29,    44,    31,   149,     5,    36,    37,    36,    37,
      38,    48,    67,    49,     5,     5,    25,    26,    47,    25,
      26,    47,    50,    29,     5,    31,    67,    36,    37,    38,
      36,    37,    38,    67,    25,    26,     3,    67,    29,    67,
      31,    12,    12,     8,    50,    36,    37,    38,    10,    11,
       9,    13,    14,    48,    12,    59,    12,    59,    67,    50,
      12,    67,    59,    12,     5,    12,     5,    12,    48,     5,
       5,    49,    49,    67,    67,    30,    67,    49,    18,    66,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    55,    56,    57,    58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    41,    70,    71,    72,     5,     0,    39,    73,    67,
       5,    55,    74,    45,    75,    61,    67,    67,    40,    55,
       5,    74,    67,    49,    45,    76,    23,    50,    28,    42,
      47,    43,    51,    52,    44,    48,    49,    77,     5,    25,
      26,    29,    31,    36,    37,    38,    50,    67,    78,    79,
      80,    90,    91,   100,   107,   110,   113,    98,   105,   108,
     109,     5,    81,     5,    84,    47,    47,     5,    87,    67,
      67,    10,    11,    13,    14,    53,    54,    55,    56,    57,
      58,     3,    12,    12,     8,     9,    82,    59,    85,    59,
      91,   100,    79,    90,   114,   117,    88,    59,    94,    95,
      97,    96,   101,   102,   103,   104,    92,    93,    99,   106,
      12,     5,    12,     5,    48,    48,   115,    12,     5,     5,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
      91,   100,    83,    86,   111,    49,    67,    89,   100,   100,
      49,    77,    91,   118,    91,    77,    50,   116,    50,    67,
     112,   100,   119,    30,    49,    77,    50
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    69,    70,    71,    72,    73,    73,    73,    73,    74,
      75,    76,    77,    77,    78,    78,    78,    78,    78,    79,
      80,    80,    80,    82,    83,    81,    81,    81,    85,    86,
      84,    84,    84,    88,    89,    87,    87,    87,    90,    90,
      92,    91,    93,    91,    94,    91,    95,    91,    96,    91,
      97,    91,    98,    99,    91,    91,    91,    91,   101,   100,
     102,   100,   103,   100,   104,   100,   105,   106,   100,   100,
     107,   100,   108,   100,   109,   100,   111,   112,   110,   113,
     115,   116,   114,   117,   117,   117,   118,   118,   119,   119
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     3,     5,     3,     3,     0,     1,
       6,    13,     2,     0,     2,     2,     1,     1,     1,     1,
       2,     2,     2,     0,     0,     5,     3,     1,     0,     0,
       5,     3,     1,     0,     0,     5,     3,     1,     1,     1,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     0,     5,     1,     1,     1,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     0,     5,     1,
       0,     2,     0,     3,     0,     3,     0,     0,    13,     7,
       0,     0,     7,     1,     1,     0,     1,     0,     1,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
  case 2:
#line 87 "codeinter.y"
                        {printf("\nLine No. is %d  \n ACCEPTED\n\n\n\n",yylineno);  print_INT_CODE();  }
#line 1615 "y.tab.c"
    break;

  case 23:
#line 126 "codeinter.y"
                 { pushId((yyvsp[0].string));}
#line 1621 "y.tab.c"
    break;

  case 24:
#line 126 "codeinter.y"
                                   {push();}
#line 1627 "y.tab.c"
    break;

  case 25:
#line 126 "codeinter.y"
                                                      { codegen_assign();}
#line 1633 "y.tab.c"
    break;

  case 28:
#line 132 "codeinter.y"
                 {/*printf("pushing identifier");*/ pushId((yyvsp[0].string));}
#line 1639 "y.tab.c"
    break;

  case 29:
#line 132 "codeinter.y"
                                                                    {push();}
#line 1645 "y.tab.c"
    break;

  case 30:
#line 132 "codeinter.y"
                                                                                       { codegen_assign();}
#line 1651 "y.tab.c"
    break;

  case 33:
#line 137 "codeinter.y"
                 {pushId((yyvsp[0].string));}
#line 1657 "y.tab.c"
    break;

  case 34:
#line 137 "codeinter.y"
                                  {push();}
#line 1663 "y.tab.c"
    break;

  case 35:
#line 137 "codeinter.y"
                                                  {/*printStack();*/  codegen_assign();}
#line 1669 "y.tab.c"
    break;

  case 40:
#line 147 "codeinter.y"
                  {push();}
#line 1675 "y.tab.c"
    break;

  case 41:
#line 147 "codeinter.y"
                                     {codegen();}
#line 1681 "y.tab.c"
    break;

  case 42:
#line 148 "codeinter.y"
                       {push();}
#line 1687 "y.tab.c"
    break;

  case 43:
#line 148 "codeinter.y"
                                          {codegen();}
#line 1693 "y.tab.c"
    break;

  case 44:
#line 149 "codeinter.y"
                       {push();}
#line 1699 "y.tab.c"
    break;

  case 45:
#line 149 "codeinter.y"
                                          {codegen();}
#line 1705 "y.tab.c"
    break;

  case 46:
#line 150 "codeinter.y"
                       {push();}
#line 1711 "y.tab.c"
    break;

  case 47:
#line 150 "codeinter.y"
                                          {codegen();}
#line 1717 "y.tab.c"
    break;

  case 48:
#line 151 "codeinter.y"
                        {push();}
#line 1723 "y.tab.c"
    break;

  case 49:
#line 151 "codeinter.y"
                                           {codegen();}
#line 1729 "y.tab.c"
    break;

  case 50:
#line 152 "codeinter.y"
                          {push();}
#line 1735 "y.tab.c"
    break;

  case 51:
#line 152 "codeinter.y"
                                             {codegen();}
#line 1741 "y.tab.c"
    break;

  case 52:
#line 153 "codeinter.y"
                      { pushId((yyvsp[0].string));}
#line 1747 "y.tab.c"
    break;

  case 53:
#line 153 "codeinter.y"
                                       {push();}
#line 1753 "y.tab.c"
    break;

  case 54:
#line 153 "codeinter.y"
                                                       {codegen_assign();}
#line 1759 "y.tab.c"
    break;

  case 55:
#line 154 "codeinter.y"
                  {push();}
#line 1765 "y.tab.c"
    break;

  case 56:
#line 155 "codeinter.y"
                   {push();}
#line 1771 "y.tab.c"
    break;

  case 58:
#line 160 "codeinter.y"
                      {push();}
#line 1777 "y.tab.c"
    break;

  case 59:
#line 160 "codeinter.y"
                                        { /*printStack();*/ codegen();}
#line 1783 "y.tab.c"
    break;

  case 60:
#line 161 "codeinter.y"
                    {push();}
#line 1789 "y.tab.c"
    break;

  case 61:
#line 161 "codeinter.y"
                                      {/* printStack();*/codegen();}
#line 1795 "y.tab.c"
    break;

  case 62:
#line 162 "codeinter.y"
                    {push();}
#line 1801 "y.tab.c"
    break;

  case 63:
#line 162 "codeinter.y"
                                      {/* printStack();*/ codegen();}
#line 1807 "y.tab.c"
    break;

  case 64:
#line 163 "codeinter.y"
                    {push();}
#line 1813 "y.tab.c"
    break;

  case 65:
#line 163 "codeinter.y"
                                      { /*printStack();*/ codegen();}
#line 1819 "y.tab.c"
    break;

  case 66:
#line 164 "codeinter.y"
                  {pushId((yyvsp[0].string));}
#line 1825 "y.tab.c"
    break;

  case 67:
#line 164 "codeinter.y"
                                   {push();}
#line 1831 "y.tab.c"
    break;

  case 68:
#line 164 "codeinter.y"
                                                       {/*printStack();*/ codegen_assign();}
#line 1837 "y.tab.c"
    break;

  case 69:
#line 165 "codeinter.y"
                  {  pushId((yyvsp[0].string));}
#line 1843 "y.tab.c"
    break;

  case 70:
#line 166 "codeinter.y"
       {printf("");}
#line 1849 "y.tab.c"
    break;

  case 71:
#line 166 "codeinter.y"
                        {push();}
#line 1855 "y.tab.c"
    break;

  case 72:
#line 168 "codeinter.y"
                  {pushId((yyvsp[0].string));}
#line 1861 "y.tab.c"
    break;

  case 73:
#line 168 "codeinter.y"
                                       {push();}
#line 1867 "y.tab.c"
    break;

  case 74:
#line 169 "codeinter.y"
                  {pushId((yyvsp[0].string));}
#line 1873 "y.tab.c"
    break;

  case 75:
#line 169 "codeinter.y"
                                       {push();}
#line 1879 "y.tab.c"
    break;

  case 76:
#line 177 "codeinter.y"
                        {printf("\n");lab1();}
#line 1885 "y.tab.c"
    break;

  case 77:
#line 177 "codeinter.y"
                                                        {lab2();}
#line 1891 "y.tab.c"
    break;

  case 78:
#line 177 "codeinter.y"
                                                                                {lab3();}
#line 1897 "y.tab.c"
    break;

  case 79:
#line 182 "codeinter.y"
                                      {lab4f(); }
#line 1903 "y.tab.c"
    break;

  case 80:
#line 185 "codeinter.y"
              {lab1f();}
#line 1909 "y.tab.c"
    break;

  case 81:
#line 185 "codeinter.y"
                                  {lab2f();}
#line 1915 "y.tab.c"
    break;

  case 82:
#line 185 "codeinter.y"
                                                       {lab3f();}
#line 1921 "y.tab.c"
    break;


#line 1925 "y.tab.c"

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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
                  yystos[+*yyssp], yyvsp);
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
  return yyresult;
}
#line 203 "codeinter.y"



void yyerror (char const *s)
{
fprintf (stderr, "%s\n", s);
  printf("Error occured at  Line No.  %d\n" , yylineno);
 
   printf("Error after : %s\n" , yytext);
 exit(0); 
}
char st[100][10];
int top=0;
int i_ = 0;
char si[20];

char temp[2]="t";

int label[20];
int lnum=0;
int ltop=0;
int start=1;
char ss[20];
char l[1] = "L";

int main()
{
yyparse();
return 1;
}



void push()
{
//printf("pushing YYtext is %s\n",yytext);
strcpy(st[++top],yytext);
}


void pushId(char *name)
{
//printf("pushing yylval is %s\n",name);
strcpy(st[++top],name);
}



void codegen()
{
strcpy(temp,"t");
my_itoa(i_ , si);
strcat(temp, si);
strcpy(QIC[ind].result , temp);
strcpy(QIC[ind].op , st[top-1]);
strcpy(QIC[ind].arg1, st[top-2]);
strcpy(QIC[ind].arg2 , st[top]);
ind++;
printf("%s = %s %s %s\n",temp,st[top-2],st[top-1],st[top]);
top-=2;
strcpy(st[top],temp);
i_++;
}


void codegen_umin()
{
strcpy(temp,"t");


my_itoa(i_ , si);
strcat(temp, si);

printf("%s = -%s\n",temp,st[top]);
top--;
strcpy(st[top],temp);
i_++;
}

void codegen_assign()
{
strcpy(QIC[ind].result , st[top-2]);
strcpy(QIC[ind].op , "=");
strcpy(QIC[ind].arg1, st[top]);
strcpy(QIC[ind].arg2 , "");
ind++;

printf("%s = %s\n",st[top-2],st[top]);
top-=2;
}


void printStack()
{
int i = top;
printf("Printing Curr stack\n");
while(i>-1){
	printf("%s \n",st[i]);
	i = i-1;
}
}



void lab1()   //Create a new label - after a not condition
{
 lnum++;
 strcpy(temp,"t");


my_itoa(i_ , si);
strcat(temp, si);

strcpy(QIC[ind].result , temp);
strcpy(QIC[ind].op , "= not");
strcpy(QIC[ind].arg1, st[top]);
strcpy(QIC[ind].arg2 , "");
ind++;
 printf("%s = not %s\n",temp,st[top]);

my_itoa(lnum, ss);
strcpy(QIC[ind].result , strcat(ss,l));
strcpy(QIC[ind].op , "if goto");
strcpy(QIC[ind].arg1, temp);
strcpy(QIC[ind].arg2 , "");
ind++;

 printf("if %s goto L%d\n",temp,lnum);
 i_++;
 label[++ltop]=lnum;
}

void  lab2()  // Create an unconditional label
{
int x;
lnum++;
x=label[ltop--];

my_itoa(lnum ,ss );
strcpy(QIC[ind].result , strcat(ss , l ));
strcpy(QIC[ind].op , "goto");
strcpy(QIC[ind].arg1, "");
strcpy(QIC[ind].arg2 , "");
ind++;
printf("goto L%d\n",lnum);


my_itoa(lnum ,ss );
strcpy(QIC[ind].result , strcat(ss,l));
strcpy(QIC[ind].op , "");
strcpy(QIC[ind].arg1, "");
strcpy(QIC[ind].arg2 , "");
ind++;
printf("L%d: \n",x);
label[++ltop]=lnum;
}

void lab3()   //Add created label
{
int y;
y=label[ltop--];

my_itoa(lnum ,ss );
strcpy(QIC[ind].result , strcat(ss,l));
strcpy(QIC[ind].op , "");
strcpy(QIC[ind].arg1, "");
strcpy(QIC[ind].arg2 , "");
ind++;
printf("L%d: \n",y);
}
 
void lab1f()
{
	my_itoa(lnum ,ss );
	strcpy(QIC[ind].result , strcat(ss ,l ));
	strcpy(QIC[ind].op , "");
	strcpy(QIC[ind].arg1, "");
	strcpy(QIC[ind].arg2 , "");
	ind++;
    	printf("L%d: \n",lnum++);
}

void lab2f()  // if with 2 labels 
{
    strcpy(temp,"t");
    
my_itoa(i_ , si);
strcat(temp, si);

strcpy(QIC[ind].result , temp);
strcpy(QIC[ind].op , "= not");
strcpy(QIC[ind].arg1, st[top]);
strcpy(QIC[ind].arg2 , "");
ind++;
 printf("%s = not %s\n",temp,st[top]);

my_itoa(lnum, ss);
strcpy(QIC[ind].result , strcat(ss, l));
strcpy(QIC[ind].op , "if goto");
strcpy(QIC[ind].arg1, temp);
strcpy(QIC[ind].arg2 , "");
ind++;

 printf("if %s goto L%d\n",temp,lnum);



    i_++;
    label[++ltop]=lnum;
    lnum++;


	my_itoa(lnum, ss);
	strcpy(QIC[ind].result , strcat(ss , l));
	strcpy(QIC[ind].op , "if goto");
	strcpy(QIC[ind].arg1, temp);
	strcpy(QIC[ind].arg2 , "");
	ind++;
	 printf("if %s goto L%d\n",temp,lnum);

	
	my_itoa(lnum ,ss );
strcpy(QIC[ind].result , strcat(ss,l ));
strcpy(QIC[ind].op , "goto");
strcpy(QIC[ind].arg1, "");
strcpy(QIC[ind].arg2 , "");
ind++;
    printf("goto L%d\n",lnum);
    label[++ltop]=lnum;


	my_itoa(++lnum ,ss );
	strcpy(QIC[ind].result , strcat(ss,l ));
	strcpy(QIC[ind].op , "");
	strcpy(QIC[ind].arg1, "");
	strcpy(QIC[ind].arg2 , "");
	ind++;
	printf("L%d: \n",lnum);
 }
void lab3f()
{
    int x;
    x=label[ltop--];

	my_itoa(start ,ss );
strcpy(QIC[ind].result , strcat(ss,l));
strcpy(QIC[ind].op , "goto");
strcpy(QIC[ind].arg1, "");
strcpy(QIC[ind].arg2 , "");
ind++;
    printf("goto L%d \n",start);


	my_itoa(x ,ss );
	strcpy(QIC[ind].result , strcat(ss,l ));
	strcpy(QIC[ind].op , "");
	strcpy(QIC[ind].arg1, "");
	strcpy(QIC[ind].arg2 , "");
	ind++;
    printf("L%d: \n",x);
   
}

void lab4f()
{
    int x;
    x=label[ltop--];


	my_itoa(lnum ,ss );
strcpy(QIC[ind].result , strcat(ss,l));
strcpy(QIC[ind].op , "goto");
strcpy(QIC[ind].arg1, "");
strcpy(QIC[ind].arg2 , "");
ind++;
    printf("goto L%d \n",lnum);   


	my_itoa(x ,ss );
	strcpy(QIC[ind].result , strcat(ss,l));
	strcpy(QIC[ind].op , "");
	strcpy(QIC[ind].arg1, "");
	strcpy(QIC[ind].arg2 , "");
	ind++;

    printf("L%d: \n",x);
}

void my_itoa(int num, char temp1[20])
{
	sprintf(temp1,"%d",num);
	//return temp1;
}







void print_INT_CODE()
{
	int i;
	printf("the value of ind %d\n",ind);
	printf("\n--------------------------------------------------------\n");
	printf("\nINTERMEDIATE CODE\n\n");
	printf("--------------------------------------------------------\n");
	printf("--------------------------------------------------------\n");
	printf("\n%17s%10s%10s%10s%10s","post","op","arg1","arg2","result\n");
	printf("--------------------------------------------------------\n");
	
	for(i=0;i<ind;i++)
	{
		printf("\n%15d%10s%10s%10s%10s", i,QIC[i].op, QIC[i].arg1,QIC[i].arg2,QIC[i].result);
	}
	printf("\n\t\t -----------------------");
	printf("\n");
	
}














int counter =0 ;



int isDigit(char t[100])
{
	//printf("inside digit %s\n",t);
	if(t!=NULL)
	{
		int check=atoi(t);
		//printf("value of check %s for %d\n",t,check);
		if(check==0)
			return 1;
		else
			return 0;
	}
	return 1;
}




void copy()
{
  oind=ind;
  int i=0;
  for(i=0;i<ind;i++)
  {
	OPT[i] = QIC[i];
  }
}



























