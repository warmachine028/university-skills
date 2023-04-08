 // CODE 8: Write a lex program to implement arithmetic calculator

/* user defined names for regular expressions */
integer -?[0-9]+

/* Rules and Action */
%option noyywrap

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
\n { return 0; }
%%

/* Coroutines and Main Method */
int main() {
    yylex();
    return 0;
}
