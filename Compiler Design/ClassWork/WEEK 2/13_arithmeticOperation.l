/* CODE 13: Implement an arithmetic calculator in lex */

/* Declaration Section */
%{	    
%}

/* user defined names for regular expressions */
integer -?[0-9]+

/* Rules or Action */
%%
{integer}[-*+/]{integer} {
	char *operator;
	long int strtol(const char *, char **, int),
		operand1 = strtol(yytext, &operator, 10),
		operand2 = strtol(operator + 1, NULL, 10),
		result;
	switch (*operator) {
		case '+':
			result = operand1 + operand2;
			break;
		case '-':
			result = operand1 - operand2;
			break;
		case '*':
			result = operand1 * operand2;
			break;
		case '/':
			result = operand1 / operand2;
			break;
	}
	int printf(const char *format, ...);
	printf("result is %ld\n", result);
}

log[(]{integer}[)] {
	double atof(const char *),
		   log(double),
		   result = log(atof(yytext + sizeof "log(" - sizeof ""));
	printf("result is %f\n", result / log(10));

}
%%

/* Subroutine */
int main(void) {
	yylex();
}


/*
{%
	int printf(const char *format, ...);
	long strtol(const char *nptr, char **endptr, int base);
	void eval(const char *, char op);
%}

%%
{integer}+{integer} eval(yytext, '+');
{integer}-{integer} eval(yytext, '-');
{integer}*{integer}	eval(yytext, '*');
{integer}/{integer} eval(yytext, '/');
%%

void eval(const char *, char op) {
	char *endp;
	long int op1 = strtol(input, &endp, 10),
			 op2 = strtol(endp + 1, NULL, 10),
			 result;
	switch(op) {
		case '+':
			result = op1 + op2;
			break;
		case '-':
			result = op1 - op2;
			break;
		case '*':
			result = op1 * op2;
			break;
		case '/':
			result = op1 / op2;
			break;
	}

}

int main() {
	yylex();
}
int yywap() {
	return 1;
}
$> lex <filename.l>
$> cc lex.yy.c -lfl -lm
$> ./a.out
*/
