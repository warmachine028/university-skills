%{
    int printf(const char *, ...),
	    yyerror(char *),
	    yylex(void);
    void exit(int);
%}

%token ID NL

%%
stmt: ID { printf("Valid Identifier %s", $1); }
%% 

/* Sub Routines section */
void main() {
    yyparse();
}

int yyerror(char *msg) {
    printf("Invalid Expression\n");
    exit(0);
}


