/* CODE 11: Count the number of identifiers in given file  */
/* Definition declaration */
%{
	#include <stdio.h>
	int id = 0;	
%}

/* Rules & Actions */
%%

[a-zA-Z_][a-zA-Z0-9_]* {id++; printf("%i ", id);  ECHO; printf("\n");}
.+ {;}
\n {;}

%%

/* Subroutine Section */
int main(){
	yyin = fopen("test.txt", "r");
	printf("Valid Identifiers are:\n");
	yylex();
	printf("\nTotal no. of Identifiers are = %i\n", id);
	return 0; 
}


int yywrap(){
	return 1;
}
