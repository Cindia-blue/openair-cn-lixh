/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_RTBUSY_CONF_HOME_LIXH_V0_1_0_OPENAIR_CN_BUILD_GIT_SUBMODULES_FREEDIAMETER_BUILD_EXTENSIONS_RT_BUSYPEERS_RTBUSY_CONF_TAB_H_INCLUDED
# define YY_RTBUSY_CONF_HOME_LIXH_V0_1_0_OPENAIR_CN_BUILD_GIT_SUBMODULES_FREEDIAMETER_BUILD_EXTENSIONS_RT_BUSYPEERS_RTBUSY_CONF_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int rtbusy_confdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    LEX_ERROR = 258,
    INTEGER = 259,
    SKIPTOOBUSYERRORS = 260,
    RETRYDISTANTPEERS = 261,
    RETRYMAXPEERS = 262,
    RELAYTIMEOUT = 263
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 107 "/home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/extensions/rt_busypeers/rtbusy_conf.y" /* yacc.c:1909  */

	int		integer;

#line 67 "/home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build/extensions/rt_busypeers/rtbusy_conf.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int rtbusy_confparse (char * conffile);

#endif /* !YY_RTBUSY_CONF_HOME_LIXH_V0_1_0_OPENAIR_CN_BUILD_GIT_SUBMODULES_FREEDIAMETER_BUILD_EXTENSIONS_RT_BUSYPEERS_RTBUSY_CONF_TAB_H_INCLUDED  */
