%{
	#include <stdio.h>
	#include <stdlib.h>
	void exit(int);
	int printf(const char*, ...),
		yyerror(char *),
		yylex(void);
%}

%token NUMBER ID NL
%left '+' '-'
%left '*' '/'

%% stmt: exp NL {printf("valid expression\n"); exit(0);};
exp: exp '+' exp | exp '-' exp | exp '*' exp | exp '/' exp | '(' exp ')' | ID | NUMBER;
%%

int yyerror(char *message) {
	printf("Invalid Expression\n");
	exit(0);
}

void main(){
	printf("Enter the expression: ");
	yyparse();
}

/*
$> yacc -d syntax.y
$> lex syntax.l
$> cc y.tab.c lex.yy.c -lfl
$> ./a.out
*/
