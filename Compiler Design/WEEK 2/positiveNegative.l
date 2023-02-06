/*Definition Section */
%{
    #include <stdio.h>
    int posint = 0,
        negint = 0,
        posfraction = 0,
        negfraction = 0;
        // GLOBAL VARIABLES
%}

/* Rules Section */
%% 
[+]?[0-9]+ {posint++;}
[-][0-9]+ {negint++;}
[+]?[0-9]*\.[0-9]+ {posfraction++;}
[-][0-9]*\.[0-9]+ {posfraction++;}
%%

/* Main Function */

int main(){
    yylex();
    printf("No of +ve integers: %i\n", posint);
    printf("No of -ve integers: %i\n", negint);
    printf("No of +ve fractions: %i\n", posfraction);
    printf("No of -ve fractions: %i\n", negfraction);
}

int yywrap() /* Returns 1 if reading from input stream is complete else 0 */
{
    return 1;
}