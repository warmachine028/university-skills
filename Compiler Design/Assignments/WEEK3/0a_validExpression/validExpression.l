 // CODE 0a: Program to recognize a valid arithmetic expression that uses operator +, -, * and /.

%{
    #include "y.tab.h"
    extern int yylval;
%}

%option noyywrap
%%
-?[0-9]+   { yylval=atoi(yytext); return NUMBER; }
[a-zA-Z_]+ { return ID; }
[\t ]+     ;
\n         { return 0; }
.          { return 0; }
%%

/*
1. Compiling Yacc file:
    #> yacc -d validExpression.y -b y # <Windows🪟>
    $> yacc -d validExpression.y      # <Linus🐧>
        - y.tab.h, y.tab.c

2. Compiling Lex file:
    $> lex validExpression.l
        - lex.yy.c

3. Linking compiled files and generating Output file:
    $> cc y.tab.c lex.yy.c -lfl 
            OR
    %option noyywrap <- inside lex file to use default yywrap() function

4. Running the output file:
    #> ./a.exe
    $> ./a.out
*/