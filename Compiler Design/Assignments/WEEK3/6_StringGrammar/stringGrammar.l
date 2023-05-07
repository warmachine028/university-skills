 // CODE 6: Write a YAAC Program to recognize strings ‘aaab’, ‘abbb’, ‘ab’ and ‘a’ using \
    grammar (a^n b^n , n>=0)
%{
    #include "y.tab.h"
%}

%option noyywrap

%%
. return yytext[0];
\n return 0;
%%
 