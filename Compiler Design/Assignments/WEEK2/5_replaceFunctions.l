 // CODE 5: Write a Lex Program to count the no. of `scanf` and `printf` statements in a C program \
                Replace: \
                    1. scanf -> readf \
                    2. printf -> writef \
            statements accordingly  

/* Definition Declarations */
%{
    int scanfStmt = 0,
        printfStmt = 0;
%}

/* Rules and Options */
%option noyywrap
%%
"scanf"  { fprintf(yyout, "readf"); scanfStmt++;}
"printf" { fprintf(yyout, "writef"); printfStmt++;}
%%

/* Coroutines and Main Function */
int main() {
    yyin = fopen("functions.c", "r");
    yyout = fopen("output.c", "w");
    yylex();
    printf("no. of scanf Statements: %i\n", scanfStmt);
    printf("no. of printf Statements: %i\n", printfStmt);
    fclose(yyin);
    fclose(yyout);
}
