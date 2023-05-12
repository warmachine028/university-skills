/* CODE: Write a YACC Program to implement arithmetic calculator. */
%{
#include "y.tab.h"
%}
digit [0-9]

%%
{digit}+ {
	int atoi(const char *);
	yylval = atoi(yytext);
	return NUM;
}
.	return *yytext;
\n	yyterminate();
%%
