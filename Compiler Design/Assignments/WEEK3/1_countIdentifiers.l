 // CODE 1: Write a LEX Program to recognize and count the number of \
  identifiers in a given input file.
%{
    int identifiers = 0,
        printf(const char *, ...);
%}

%option noyywrap
DIGIT [0-9]
LETTER [a-zA-Z_]

%%
{LETTER}({LETTER}|{DIGIT})* { identifiers++; }
. ;
\n ;
%%

int main() {
    yyin = fopen("sample.c", "r");
    yylex();
    fclose(yyin);
    printf("No. of Identifiers: %i", identifiers);
    return 0;
}