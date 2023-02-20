/* CODE: Write a YACC Program to test the validity of a simple expression involving operators +, -, * and / */


%{
    #include "y.tab.h"
    // int atoi(const char *nptr);
    extern int yylval;
%}

%%
[0-9]+ {yylval=atoi(yytext); return NUMBER;}
[a-zA-Z]+ {return ID;}
[\t]+;
\n {return 0;}
. {return 0;}
%%

