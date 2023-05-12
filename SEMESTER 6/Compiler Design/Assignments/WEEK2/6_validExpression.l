 /* CODE 6: Write a LEX program to recognise a valid arithmetic Expression
        Identify the identifiers and Operators present. Print them seperately
 */

/* Definition Declarations */
%{
    int valid = 0;
%}

/* Rules and Actions */
%option noyywrap
INTEGER -?[0-9]+
FRACTION {INTEGER}[.][0-9]+
ID -?[a-zA-Z_]+
OPERATOR [+\-*=/]
OPERAND {INTEGER}|{FRACTION}|{ID}
EXPRESSION {OPERAND}{OPERATOR}{OPERAND}

%%
{EXPRESSION}({OPERATOR}({EXPRESSION}|{OPERAND}))? { 
        printf("Valid Expression\n"); 
        valid = 1;
        return;
    }
.   { 
        printf("Invalid Expression\n"); 
        valid = 0; 
        return;
    }
\n { return; }
%%

/* Coroutines and Main function */
int main() {
    printf("Enter arithmetic Expression: ");
    yylex();
    if (!valid)
        return 0;
    char operators[40], operands[40];
    int oplen = 0, opdlen = 0, 
        i = 0, strchr(const char*, int);
    for (i = 0; i < yyleng; i++) {
        char item = yytext[i];
        if (strchr("+-*=/", item))
            operators[oplen++] = item;
        else 
            operands[opdlen++] = item;
    }
    printf("OPERATORS:\n");
    for (i = 0; i < oplen; i++)
        printf("%c\n", operators[i]);
    printf("\nOPERANDS:\n");
    for (i = 0; i < opdlen; i++)
        printf("%c\n", operands[i]);
    return 0;
}