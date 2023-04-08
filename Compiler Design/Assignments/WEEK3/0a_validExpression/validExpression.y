%{
    int printf(const char *, ...);
    void exit(int status);    
%}

%token NUMBER ID
%left '+''-'
%left '*''/'

%%
expr: expr '+' expr
    | expr '-' expr
    | expr '*' expr
    | expr '/' expr
    | '/'NUMBER
    | '-'ID
    | NUMBER
    | ID
    ;
%%

/* SYSTEM DEFINED F(x): Bison Package -> To Handle Errors */
int yyerror(char *s){
    printf("\nExpression is invalid");
    exit(0);
}

void main() {
    printf("Enter the expression: ");
    yyparse();
    printf("\nExpression is valid\n");
    exit(0);
}
