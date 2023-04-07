/* CODE: Lex Program to count the number of 
			1. characters
			2. words	
			3. spaces
			4. EOLs
*/
/* Description / Definition SECTION */
%{
	#include <stdio.h>
	int lc = 0, // Count Lines
		sc = 0, // Count Spaces
		tc = 0, // Count Tabs
		ch = 0, // Count Characters
		wc = 0; // Count Words
		// GLOBAL VARIABLES
%}

/* RULE SECTION */
%%
[\n]     {lc++; ch+=yyleng;}
[ \t]    {sc++; ch+=yyleng;}
[^\t]    {tc++; ch+=yyleng;}
[^\f\n]+ {wc++; ch+=yyleng;}
%%
/* Lex Predefined Variable: length of matched string */

/* Main Function */
int main() {
	// yyin = fopen("sample.txt", "r");
	printf("Enter the sentence: ");
	yylex(); // int yylex(void): call to invoke lexer, returns token
	printf("Number of Lines: %d\n", lc);
	printf("Number of Spaces: %d\n", sc);
	printf("Number of Tabs: %d\n", tc);
	printf("Number of Words: %d\n", wc);
	printf("Number of Characters: %d\n", ch);
	return 0;
}

int yywrap(void) /* Returns 1 if reading from input stream is complete else 0 */
{
    return 1;
}