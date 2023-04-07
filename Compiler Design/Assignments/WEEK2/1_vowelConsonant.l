/* CODE 1: Count the number of vowels and consonants in a given string */
/* Definition Declaration */
%{
    // GLOBALS
    int vowels = 0, consonants = 0;
%}

/* Rules & Action */
%option noyywrap
%%
[aeiouAEIOU]  { vowels++; }
[a-zA-Z] { consonants++; }
. ;
%%

/* Main Function */
int main() {
    printf("Enter string: ");
    yylex();
    printf("Number of vowels: %i\n", vowels);
    printf("Number of consonants: %i\n", consonants);
    return 0;
}
