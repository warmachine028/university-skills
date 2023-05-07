 // CODE 4: Write a YACC Program to implement arithmetic calculator.
%{
	#include "y.tab.h"
%}

DIGIT [0-9]

%%
{DIGIT}+ {
	int atoi(const char *);
	yylval = atoi(yytext);
	return NUM;
}
.	return *yytext;
\n	yyterminate();
%%
