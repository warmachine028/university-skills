 // CODE 7: Write a YAAC Program to recognize the grammar (a^nb, n>=10)
%{
    #include "y.tab.h"
%}

%option noyywrap

%%
. return yytext[0];
\n return 0;
%%
 