  // CODE 5: Write a YAAC Program to recognize a valid variable, which starts with a \
    letter, followed by any number of letters or digits

%{
    #include "y.tab.h"
    extern int yylval;
%}

%% 
[a-zA-Z_]* return yylval = atoi(yytext), ID; 
[^a-zA-Z_]* return ID;
%%
