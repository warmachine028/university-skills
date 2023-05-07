 // CODE 2: Write a YACC Program to test the validity of a simple expression \
    involving  operators: +, -, * and /

%{
    #include "y.tab.h"
    extern yylval;
%}

/* Rules and Actions */
%option noyywrap
%%
[0-9]+ { 
    yylval = atoi(yytext);
    return NUMBER;
}

[a-zA-Z]+ { return ID; }
[\t]+ ;
\n { return 0; }
. { return yytext[0]; }
%%
