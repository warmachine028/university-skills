/* CODE 1: Identify if an entered sentence is a compound or a simple sentence*/
/* Definition Declaration */
%{
	#include <stdio.h>
	int flag = 0;
%}

/* Rules & Action */
%%

and |
or |
but |
because |
if |
then |
nevertheless {flag = 1;}
. ;
\n {return 0;}

%%

/* Subroutine */
int main() {
	printf("Enter the sentence: ");
	yylex();
	if (flag == 0)
		printf("Sentence is simple\n");
	else
		printf("Sentence is compound\n");
	return 0;
}

int yywrap(){
	return 1;
}
