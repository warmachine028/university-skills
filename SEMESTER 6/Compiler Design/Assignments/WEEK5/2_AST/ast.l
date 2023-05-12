 // CODE 2: Write a code to generate Abstract syntax Tree
%{
    #include "y.tab.h"
    int atoi(const char *); 
%}

%option noyywrap
digit [0-9]

%%
{digit}+    return yylval = atoi(yytext), num;
[ ]
.           return *yytext;
\n          yyterminate();
%%
