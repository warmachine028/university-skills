%{
    int printf(const char *, ...),
        yyerror(char *);
    void exit(int);
%}

%token ID

%%
stmt: ID { printf("Valid Identifier"); }
%%

void main() {
    printf("Enter an Identifier: ");
    yyparse();
}

/* System defined function from Bison Library */
int yyerror(char *msg) {
    printf("%s", msg);
    exit(0);
}