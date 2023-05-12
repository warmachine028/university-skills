%{
    #include "y.tab.h"
    extern int yylval;
%}


%% 
[a-zA-Z_]* {yylval = atoi(yytext); return ID;}
[^a-zA-Z_]* {return ID;}
%%
