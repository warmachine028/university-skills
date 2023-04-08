%{
int printf(cost char *, ...),
	yyerror(const char *),
	yylex();
%}

%token NUM

/*
for left-associativity operators,
LHS non-terminal is present as the left operand on RHS

for right-associativity operators,
LHS non-terminal

*/
