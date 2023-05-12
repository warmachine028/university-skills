%{
    int counter,
        printf(const char *, ...),
        yylex(void),
        yyerror(const char *);
    void exit(int);
    
%}

%token IF START STOP NL

%%
S : I { printf("nesting = %d\n",counter); }
I : IF A {counter++;}
  | C
  | ;
A : START I STOP B;
B : IF A | A | ;
C : START I STOP I;
%%

int main(void) {
    yyparse();
}

int yyerror(const char *message){
    printf("%s\n", message);
    exit(1);
}
