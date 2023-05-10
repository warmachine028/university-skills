 // CODE 2: Write a YACC Program to test the validity of a simple expression \
    involving  operators: +, -, * and /

%{
    #include "y.tab.h"
    extern int yylval;
%}

/* Rules and Actions */
digit [0-9]+
%option noyywrap
%%
{digit}     return yylval = atoi(yytext), NUMBER;
[a-zA-Z]+   return ID;
[ ]
[\t]+
\n          return 0;
.           return yytext[0];
%%
