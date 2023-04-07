/* CODE 1: Count the number of vowels and consonants in a given string */
/* Definition Declaration */
%{
    // GLOBALS
    int vowels = 0, consonants = 0;
%}

/* Rules & Action */
%%
\n { return 0; }
[aeiouAEIOU]  { vowels++; }
[a-zA-Z] { consonants++; }
. ;
%%

int yywrap(){};

/* Main Function */
int main() {
    printf("Enter the string: ");
    yylex();
    printf("Number of vowels: %i\n", vowels);
    printf("Number of consonants: %i\n", consonants);
    // int printf(const char*, ...);
    return 0;
}
