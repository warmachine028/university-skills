 // CODE 4: Write a YACC Program to implement arithmetic calculator.
%{
	#include "y.tab.h"
	int atoi(const char *);
%}

DIGIT [0-9]

%%
{DIGIT}+ return yylval = atoi(yytext), NUM;
[ ]
.	return *yytext;
\n	yyterminate();
%%
