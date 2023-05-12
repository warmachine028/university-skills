%{
    int printf(const char *, ...),
        yyerror(char *),
        yylex();
    void exit(int);
%}

%token NUMBER ID
%left '+' '-'
%left '*' '/'

%%
expr: expr '+' expr
    | expr '-' expr
    | expr '*' expr
    | expr '/' expr
    | '/' NUMBER
    | '-' ID
    | NUMBER
    | ID
    ;
%%

/* SYSTEM DEFINED F(x): Bison Package -> To Handle Errors */
int yyerror(char *s){
    printf("\nExpression is invalid");
    exit(0);
}

int main() {
    printf("Enter the expression: ");
    yyparse();
    printf("\nExpression is valid\n");
    exit(0);
    return 0;
}
