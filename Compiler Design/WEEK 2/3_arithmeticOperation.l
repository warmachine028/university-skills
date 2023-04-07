/* CODE 3: Implement an arithmetic calculator in lex*/

/* Declaration Section */
{%
	int printf(const char *, ...);
	long strtol(const char *nptr, char **endptr, int base);
	void eval(const char *, char op);
%}

integer -?[0-9]+

/* Rules & Action */
%%
{integer}+{integer} eval(yytext, '+');
{integer}-{integer} eval(yytext, '-');
{integer}*{integer}	eval(yytext, '*');
{integer}/{integer} eval(yytext, '/');
%%
/* {integer}[+-*\/]{integer} eval(yytext); */

/* Subroutine */
void eval(const char *, char op) {
	char *endp;
	long int op1 = strtol(input, &endp, 10),
			 op2 = strtol(endp + 1, NULL, 10);
	switch(op) {
		case '+':
		case '-':
		case '*':
		case '/':
	}
}

int yywap() {
	return 1;
}

