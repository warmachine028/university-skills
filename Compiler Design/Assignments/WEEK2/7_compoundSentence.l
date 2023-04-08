 // CODE 7: Write a LEX Program to determine whether a sentence is simple or compound

/* Definition Declaration */
%{
    int compound = 0;
%}

/* Rules and Action */
%option noyywrap

%%
nevertheless |
because |
then | 
and | 
but |
if | 
or | { compound = 1; }
. ;
\n { return 0; }
%%

/* Coroutines and Main function */
int main() {
    printf("Enter a sentence: ");
    yylex();
    if (compound)
        printf("Sentence is simple");
    else 
        printf("Sentence is compound");
    return 0;
}