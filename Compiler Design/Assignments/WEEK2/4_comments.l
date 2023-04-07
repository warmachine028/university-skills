 // CODE 4: Write a lex program to count the number of comments in a given C Program \
    Also eliminate them and copy that program into separate file.

/* Definition Declarations */
%{
    int comments = 0;
%}

%option noyywrap
/* Rules and Actions */
%%
\n                { fprintf(yyout, "\n"); } // Print newLines
[.]*"//".*        { comments++;}
[.]*"/*".*"*/"    { comments++; }
.                 { fprintf(yyout, "%c", yytext[0]); } // Print other characters
%%

/* Coroutines and Main function */
int main(int argc, char *argv[]) {
    if (argc > 1)
        yyin = fopen(argv[1], "r");
    else {
        char filePath[30];
        printf("Enter file Path: ");
        gets(filePath);
        yyin = fopen(filePath, "r");
    }
    yyout = fopen("output.c", "w");
    yylex();
    printf("\nNo. of comments: %i", comments);
    fclose(yyin);
    fclose(yyout);
    
}