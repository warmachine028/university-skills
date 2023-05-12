 // CODE 1: Write a Program to convert the BNF rules into YACC

%{
    #include"y.tab.h"
    char *strcpy(char*, char*);
    int LineNo=1;
%}

%option noyywrap

identifier [a-zA-Z][_a-zA-Z0-9]*
number [0-9]+|([0-9]*\.[0-9]+)

%%
main\(\)        return MAIN;
if              return IF;
else            return ELSE;
while           return WHILE;
int     |
long    |
char    |
float           return TYPE;
{identifier}    return strcpy(yylval.var,yytext), VAR;
{number}        return strcpy(yylval.var,yytext), NUM;
\<      |
\>      |
\>=     |
\<=     |
==              return strcpy(yylval.var,yytext), RELOP;
[ \t]   ;
\n LineNo++;
.               return yytext[0];
%%



