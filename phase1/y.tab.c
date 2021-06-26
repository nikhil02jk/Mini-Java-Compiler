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
#line 1 "codeSymbolTable.y"

#include <stdio.h>
#include<stdbool.h>
#include"lex.yy.c"

#include<string.h>

void PSymTable();
int mapping(char *);
void yyerror (char const *);
int func(int, int, int);

char errMess[55] = "Error";
extern int yylineno;
int xpos =-1;
int idx =-1; // A global variable to hold the number of items already in the symbol table
struct SymTable
{
    char idName[50];
    int value;
    int type;  //0-int , 1-float , 2-true , 3-false
    int line_no;
    int scope;
};

struct SymTable st[50];





#line 102 "y.tab.c"

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
#line 34 "codeSymbolTable.y"

    	int number;
    	char *string;
//    	bool *boo;
   	 

#line 294 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);





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
#define YYLAST   231

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  145

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
       0,    74,    74,    77,    79,    81,    82,    83,    84,    87,
      89,    91,    94,    95,    98,    99,   100,   101,   102,   105,
     108,   109,   110,   113,   114,   115,   116,   119,   120,   121,
     124,   126,   129,   130,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   144,   145,   146,   147,   148,   149,   151,
     152,   153,   154,   155,   163,   164,   169,   170,   173,   174,
     177,   180,   183,   184,   185,   189,   190,   193,   194
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
  "variable_declaration", "dtypes", "ids1", "ids2", "ids3", "expression",
  "rel_e", "arithm_e", "if_stmt", "else_if_blocks", "else_if_block",
  "for_stmt", "for_args", "arg1", "arg2", "arg3", YY_NULLPTR
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

#define YYPACT_NINF (-96)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -29,    26,    32,   -96,     1,   -26,   -96,    -3,     0,   -96,
     -13,   -16,   -14,    17,   -96,     3,   -96,   -96,    61,     2,
     -96,    18,   -96,    23,    50,    24,    52,   -96,    36,    43,
      38,    42,    44,    51,    54,    55,   -96,    34,   -96,    77,
     101,   102,   103,   104,    66,    69,   -96,   -96,   112,   -96,
     -96,   -96,    56,   -96,    63,   -96,   170,   -96,   -96,   -96,
     -96,    25,   -96,   -96,   107,    62,   110,    73,    25,   193,
     116,   -96,   -96,   -96,    41,    41,    41,    41,    41,    41,
      41,    41,    41,    41,   -96,   170,    25,   128,    41,   131,
      90,   170,   -96,   -96,    92,    70,    25,    79,   -50,   -50,
     -50,   -50,   -45,   -45,   -96,   -96,   -50,   -50,   -96,   170,
     -96,   -50,   -96,    93,    94,    25,   -96,    41,   -96,   -96,
     -96,    78,   -50,    74,    89,    41,   117,   -96,   -50,   -96,
     -20,   118,   106,   -96,   -96,   -20,    25,   126,   -96,   111,
     -96,   105,   -96,   141,   -96
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     8,     0,     1,     0,     0,     4,
       9,     0,     0,     0,     3,     0,     7,     6,     0,     0,
       9,     0,     5,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,    13,     0,    48,    47,
       0,     0,     0,     0,     0,     0,    41,    42,     0,    11,
      18,    12,     0,    19,     0,    33,    32,    16,    17,    49,
      50,     0,    51,    52,    25,    20,    29,    21,     0,    64,
      31,    22,    14,    15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    40,    53,     0,     0,     0,     0,
       0,     0,    62,    63,     0,     0,     0,    47,    36,    37,
      39,    38,    45,    46,    43,    44,    34,    35,    26,    23,
      24,    27,    28,     0,     0,    66,    30,     0,    13,    13,
      65,     0,    53,     0,     0,    68,    54,    60,    67,    61,
       0,    55,     0,    13,    56,     0,     0,     0,    57,     0,
      59,     0,    13,     0,    58
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -96,   -96,   -96,   -96,   -96,   140,   -96,   -96,   -95,   -96,
      91,   -96,   -96,   -96,   -96,    96,   -60,   -61,   -96,   -96,
      33,   -96,   -96,   -96,   -96,   -96
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     8,    12,    14,    25,    37,    51,
      52,    53,    65,    67,    71,    54,    55,    56,    57,   131,
     134,    58,    94,    95,   121,   129
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      85,    84,    10,    78,    79,    80,    81,    91,    90,   132,
      80,    81,     1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   123,   124,   109,   108,   111,    38,   133,
      39,     5,     6,    40,    41,    91,   116,    38,   137,    39,
       7,     9,    40,    41,    38,    13,    97,   143,    15,    40,
      41,    16,    11,    17,    91,   120,   122,    18,    19,    42,
      43,    46,    47,    44,   128,    45,    20,    23,    24,    22,
      46,    47,    48,    26,    27,    91,   139,    38,    29,    39,
      28,    31,    40,    41,    49,    59,    60,    59,    60,    61,
      30,   117,    38,    32,    39,    34,    33,    40,    41,    42,
      43,    50,    35,    44,    36,    45,    62,    63,    64,    66,
      46,    47,    48,    68,    42,    43,    69,    70,    44,    86,
      45,    87,    88,    72,   126,    46,    47,    48,    96,    38,
      73,    39,    89,   110,    40,    41,   112,   115,   113,   127,
     114,    50,   118,   119,    38,   125,    39,   130,   135,    40,
      41,    42,    43,   136,   142,    44,    50,    45,    21,   141,
      92,     0,    46,    47,    48,    93,    42,    43,   138,     0,
      44,     0,    45,     0,     0,     0,   140,    46,    47,    48,
      74,    75,     0,    76,    77,     0,     0,     0,     0,     0,
       0,   144,     0,    50,     0,     0,    38,     0,    39,     0,
       0,    40,    41,     0,     0,     0,     0,     0,    50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    42,    43,
       0,     0,     0,    78,    79,    80,    81,    82,    83,    46,
      47,    48
};

static const yytype_int16 yycheck[] =
{
      61,    61,     5,    53,    54,    55,    56,    68,    68,    29,
      55,    56,    41,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,   118,   119,    86,    86,    88,     3,    49,
       5,     5,     0,     8,     9,    96,    96,     3,   133,     5,
      39,    67,     8,     9,     3,    45,     5,   142,    61,     8,
       9,    67,    55,    67,   115,   115,   117,    40,    55,    25,
      26,    36,    37,    29,   125,    31,     5,    49,    45,    67,
      36,    37,    38,    23,    50,   136,   136,     3,    42,     5,
      28,    43,     8,     9,    50,     8,     9,     8,     9,    12,
      47,    12,     3,    51,     5,    44,    52,     8,     9,    25,
      26,    67,    48,    29,    49,    31,     5,     5,     5,     5,
      36,    37,    38,    47,    25,    26,    47,     5,    29,    12,
      31,    59,    12,    67,    50,    36,    37,    38,    12,     3,
      67,     5,    59,     5,     8,     9,     5,    67,    48,    50,
      48,    67,    49,    49,     3,    67,     5,    30,    30,     8,
       9,    25,    26,    47,    49,    29,    67,    31,    18,    48,
      69,    -1,    36,    37,    38,    69,    25,    26,   135,    -1,
      29,    -1,    31,    -1,    -1,    -1,    50,    36,    37,    38,
      10,    11,    -1,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    67,    -1,    -1,     3,    -1,     5,    -1,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      -1,    -1,    -1,    53,    54,    55,    56,    57,    58,    36,
      37,    38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    41,    70,    71,    72,     5,     0,    39,    73,    67,
       5,    55,    74,    45,    75,    61,    67,    67,    40,    55,
       5,    74,    67,    49,    45,    76,    23,    50,    28,    42,
      47,    43,    51,    52,    44,    48,    49,    77,     3,     5,
       8,     9,    25,    26,    29,    31,    36,    37,    38,    50,
      67,    78,    79,    80,    84,    85,    86,    87,    90,     8,
       9,    12,     5,     5,     5,    81,     5,    82,    47,    47,
       5,    83,    67,    67,    10,    11,    13,    14,    53,    54,
      55,    56,    57,    58,    85,    86,    12,    59,    12,    59,
      85,    86,    79,    84,    91,    92,    12,     5,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    85,    86,
       5,    86,     5,    48,    48,    67,    85,    12,    49,    49,
      85,    93,    86,    77,    77,    67,    50,    50,    86,    94,
      30,    88,    29,    49,    89,    30,    47,    77,    89,    85,
      50,    48,    49,    77,    50
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    69,    70,    71,    72,    73,    73,    73,    73,    74,
      75,    76,    77,    77,    78,    78,    78,    78,    78,    79,
      80,    80,    80,    81,    81,    81,    81,    82,    82,    82,
      83,    83,    84,    84,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    87,    87,    88,    88,    89,    89,
      90,    91,    92,    92,    92,    93,    93,    94,    94
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     3,     5,     3,     3,     0,     1,
       6,    13,     2,     0,     2,     2,     1,     1,     1,     1,
       2,     2,     2,     3,     3,     1,     3,     3,     3,     1,
       3,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     3,     3,     3,     3,     1,     1,     2,
       2,     2,     2,     3,     7,     8,     2,     3,     7,     3,
       7,     5,     1,     1,     0,     1,     0,     1,     0
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
#line 74 "codeSymbolTable.y"
                       {PSymTable(); printf("\n ACCEPTED\n");}
#line 1591 "y.tab.c"
    break;

  case 23:
#line 113 "codeSymbolTable.y"
                                {if(mapping((yyvsp[-2].string))==-1){idx++; strcpy(st[idx].idName,(yyvsp[-2].string)); st[idx].type =0; st[idx].value = (yyvsp[0].number);st[idx].line_no=yylineno;st[idx].scope=n;} }
#line 1597 "y.tab.c"
    break;

  case 24:
#line 114 "codeSymbolTable.y"
                              {if(mapping((yyvsp[0].string))==-1) {idx++; strcpy(st[idx].idName,(yyvsp[0].string));  st[idx].type =0;st[idx].line_no=yylineno;st[idx].scope=n; } else {yyerror(errMess);} }
#line 1603 "y.tab.c"
    break;

  case 25:
#line 115 "codeSymbolTable.y"
                         {if(mapping((yyvsp[0].string))==-1) {idx++; strcpy(st[idx].idName,(yyvsp[0].string)); st[idx].type =0;st[idx].line_no=yylineno;st[idx].scope=n; } }
#line 1609 "y.tab.c"
    break;

  case 26:
#line 116 "codeSymbolTable.y"
                            {xpos = mapping((yyvsp[-2].string));  if(xpos==-1) {idx++; strcpy(st[idx].idName,(yyvsp[-2].string)); st[idx].type =3; st[idx].value = (yyvsp[0].number);st[idx].line_no=yylineno;st[idx].scope=n;} else { st[xpos].value = (yyvsp[0].number); } }
#line 1615 "y.tab.c"
    break;

  case 27:
#line 119 "codeSymbolTable.y"
                                {if(mapping((yyvsp[-2].string))==-1) {idx++; strcpy(st[idx].idName,(yyvsp[-2].string)); st[idx].type =1; st[idx].value = (yyvsp[0].number);st[idx].line_no=yylineno;st[idx].scope=n;} }
#line 1621 "y.tab.c"
    break;

  case 28:
#line 120 "codeSymbolTable.y"
                              {if(mapping((yyvsp[0].string))==-1) { idx++; strcpy(st[idx].idName,(yyvsp[0].string));  st[idx].type =1;st[idx].line_no=yylineno; st[idx].scope=n;} else {yyerror(errMess);}}
#line 1627 "y.tab.c"
    break;

  case 29:
#line 121 "codeSymbolTable.y"
                                 {if(mapping((yyvsp[0].string))==-1) {idx++; strcpy(st[idx].idName,(yyvsp[0].string));  st[idx].type =1; st[idx].line_no=yylineno;st[idx].scope=n;}}
#line 1633 "y.tab.c"
    break;

  case 30:
#line 124 "codeSymbolTable.y"
                             {if(mapping((yyvsp[-2].string))==-1) {idx++; strcpy(st[idx].idName,(yyvsp[-2].string)); st[idx].type =3; st[idx].value = (yyvsp[0].number);} else { st[xpos].value = (yyvsp[0].number); st[idx].line_no=yylineno;st[idx].scope=n;} }
#line 1639 "y.tab.c"
    break;

  case 31:
#line 126 "codeSymbolTable.y"
                         {if(mapping((yyvsp[0].string))==-1) {idx++; strcpy(st[idx].idName,(yyvsp[0].string)); st[idx].type =3;st[idx].line_no=yylineno; st[idx].scope=n;} }
#line 1645 "y.tab.c"
    break;

  case 34:
#line 133 "codeSymbolTable.y"
                                 {(yyval.number) = func((yyvsp[-2].number),(yyvsp[0].number),1);}
#line 1651 "y.tab.c"
    break;

  case 35:
#line 134 "codeSymbolTable.y"
                                 {(yyval.number) = func((yyvsp[-2].number),(yyvsp[0].number),2);}
#line 1657 "y.tab.c"
    break;

  case 36:
#line 135 "codeSymbolTable.y"
                                 {(yyval.number) = func((yyvsp[-2].number),(yyvsp[0].number),3);}
#line 1663 "y.tab.c"
    break;

  case 37:
#line 136 "codeSymbolTable.y"
                                 {(yyval.number) = func((yyvsp[-2].number),(yyvsp[0].number),4);}
#line 1669 "y.tab.c"
    break;

  case 38:
#line 137 "codeSymbolTable.y"
                                    {(yyval.number) = func((yyvsp[-2].number),(yyvsp[0].number),5);}
#line 1675 "y.tab.c"
    break;

  case 39:
#line 138 "codeSymbolTable.y"
                                      {(yyval.number) = func((yyvsp[-2].number),(yyvsp[0].number),6);}
#line 1681 "y.tab.c"
    break;

  case 40:
#line 139 "codeSymbolTable.y"
                                {xpos = mapping((yyvsp[-2].string));if(xpos!=-1) { st[xpos].value = (yyvsp[0].number); st[xpos].line_no=yylineno;st[xpos].scope=n;} else { yyerror(errMess);}}
#line 1687 "y.tab.c"
    break;

  case 41:
#line 140 "codeSymbolTable.y"
                                 {(yyval.number)=1;}
#line 1693 "y.tab.c"
    break;

  case 42:
#line 141 "codeSymbolTable.y"
                                 {(yyval.number)=0;}
#line 1699 "y.tab.c"
    break;

  case 43:
#line 144 "codeSymbolTable.y"
                                         {(yyval.number) = (yyvsp[-2].number) * (yyvsp[0].number);}
#line 1705 "y.tab.c"
    break;

  case 44:
#line 145 "codeSymbolTable.y"
                                {(yyval.number) = (yyvsp[-2].number) / (yyvsp[0].number);}
#line 1711 "y.tab.c"
    break;

  case 45:
#line 146 "codeSymbolTable.y"
                                { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number);}
#line 1717 "y.tab.c"
    break;

  case 46:
#line 147 "codeSymbolTable.y"
                                {(yyval.number) = (yyvsp[-2].number) - (yyvsp[0].number);}
#line 1723 "y.tab.c"
    break;

  case 47:
#line 148 "codeSymbolTable.y"
                                {xpos = mapping((yyvsp[0].string)); if(xpos!=-1) { (yyval.number) = st[xpos].value;  st[xpos].line_no=yylineno;st[xpos].scope=n;} else {yyerror(errMess);} }
#line 1729 "y.tab.c"
    break;

  case 48:
#line 149 "codeSymbolTable.y"
                                 {(yyval.number) =  (yyvsp[0].number); }
#line 1735 "y.tab.c"
    break;

  case 49:
#line 151 "codeSymbolTable.y"
                                 {xpos = mapping((yyvsp[-1].string)); (yyval.number)=st[xpos].value+1; st[xpos].line_no=yylineno;st[xpos].scope=n;}
#line 1741 "y.tab.c"
    break;

  case 50:
#line 152 "codeSymbolTable.y"
                                 {xpos = mapping((yyvsp[-1].string)); (yyval.number)=st[xpos].value-1; st[xpos].line_no=yylineno;st[xpos].scope=n;}
#line 1747 "y.tab.c"
    break;

  case 51:
#line 153 "codeSymbolTable.y"
                                 {xpos = mapping((yyvsp[0].string)); (yyval.number)=st[xpos].value+1; st[xpos].line_no=yylineno;st[xpos].scope=n;}
#line 1753 "y.tab.c"
    break;

  case 52:
#line 154 "codeSymbolTable.y"
                                 {xpos = mapping((yyvsp[0].string)); (yyval.number)=st[xpos].value-1; st[xpos].line_no=yylineno;st[xpos].scope=n;}
#line 1759 "y.tab.c"
    break;

  case 53:
#line 155 "codeSymbolTable.y"
                                 {xpos = mapping((yyvsp[-2].string)); if(xpos!=-1) { st[xpos].value = (yyvsp[0].number);  st[xpos].line_no=yylineno;st[xpos].scope=n;} else {yyerror(errMess);}}
#line 1765 "y.tab.c"
    break;


#line 1769 "y.tab.c"

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
#line 199 "codeSymbolTable.y"




void yyerror (char const *s)
{
fprintf (stderr, "%s\n", s);
  printf("Error occured at  Line No.  %d\n" , yylineno);
 
   printf("Error after : %s\n" , yytext);
 
}


int main()
{
yyparse();
return 1;
}


int mapping(char *name)
{
    int j=-1;
    for(j=0;j<idx+1;j++)
    {
   	   	 
   	 if(strcmp(name, st[j].idName)==0)
   	 {    
   		    		 
   		 return j;
   	 }
    }
return -1;
}


void PSymTable()
{
    int j=-1;
    printf("\nType\tName\tValue\tLine no.\tScope\n");
    for(j=0;j<=idx;j++)
    {    
	if(st[j].type==0)
			printf("int\t");
		else
			printf("bool\t");
   		 
		printf("%s\t%d\t%d\t\t%d\n",st[j].idName,st[j].value,st[j].line_no,st[j].scope);
		
    }
}


int func(int a, int b, int k )
{
//printf("%d %d \n" , a , b);
switch(k)
{
case 1: if (a<b)
    	return 1;
    	else
    	return 0;
    	break;

case 2: return (a>b);
     	break;
     	 
case 3: return (a<=b);
     	break;
     	 
case 4: return (a>=b);
     	break;
     	 
case 5: return (a==b);
     	break;
     	 
case 6: return (a!=b);
     	break;
}
}     	 
     	 














