 // CODE 2: Write a lex program to count the total number of \
                1. Characters \
                2. Words \
                3. Spaces \
                4. End of Lines \
    from a given input file.

/* Declarations Definitions */
%{
    int strlen(const char*),
        characters = 0,
        words = 0,
        spaces = 0,
        lines = 0;
%}

/* Rules and actions */
%option noyywrap
%%
[a-zA-Z0-9]+ { words++; characters += strlen(yytext); }
\n           { lines++; characters++;}
[ ]          { spaces++; characters++;}
.            { characters++; }
%%

/* Sub Routine Section */
int main(int argc, char* argv[]) {
    if (argc > 1)
        yyin = fopen(argv[1], "r");
    else {
        printf("Enter the input: ");
        yyin = stdin;
    }
    yylex();
    printf("No. of characters: %i\n", characters);
    printf("No. of words: %i\n", words);
    printf("No. of spaces: %i\n", spaces);
    printf("No. of lines: %i\n", lines);
    fclose(yyin);
    return 0;
}

