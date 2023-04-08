%{
    #include "y.tab.h"
    extern int yylval;
%}

%option noyywrap
%%
\n         { return 0; }
[a-zA-Z]*  { return ID; }
.          { yyerror("Invalid Identifier"); }
%%