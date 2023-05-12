%{
    int yylex(void), 
        yyerror(const char *),
        printf(const char *, ...),
        valid = 1;
%}

%token 'a' 'b'

%%
S : 'a' S 'b' 
  | ;
%%

int yyerror(const char *msg) {
    printf ("invalid string\n");
    valid = 0;
    return 0;
}

int main() {
    printf("Enter the string: ");
    yyparse();
    if (valid)
        printf("valid string\n");
}
