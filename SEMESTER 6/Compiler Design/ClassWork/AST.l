%{
    #include "y.tab.h"
%}

digit [0-9]
%%
{digit}+ { 
    int atoi(const char *); 
    return yylval = atoi(yytext), num; 
}
[ ]
.   return *yytext;
\n  yyterminate() ;
%%
