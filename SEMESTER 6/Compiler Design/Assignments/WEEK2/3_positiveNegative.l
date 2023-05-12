 // CODE 3: Write a Lex Program to count: \
        1. Positive Integers \
        2. Negative Integers \
        3. Positive Fractions \
        4. Negative Fractions

/* Definition Declarations */
%{
    int posInt = 0,
        negInt = 0,
        posFrac = 0,
        negFrac = 0;
%}

/* Rules and Actions */
%option noyywrap
%%
[+]?[0-9]+          posInt++;
-[0-9]+             negInt++;
[+]?[0-9]*[.][0-9]+ posFrac++;
-[0-9]*[.][0-9]+    negFrac++;
%%

/* Coroutines and main function */
int main() {
    printf("Enter the numbers: ");
    yylex();
    printf("No. of positive integers %i\n", posInt);
    printf("No. of negative integers %i\n", negInt);
    printf("No. of positive fractions %i\n", posFrac);
    printf("No. of negative fractions %i\n", negFrac);
    return 0;
}