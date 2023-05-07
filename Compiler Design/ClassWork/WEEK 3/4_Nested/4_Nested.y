/* CODE 4: Write a YACC Program to recognise nested IF control statements and display the levels of nesting */
%{
    int counter,
        printf(const char *, ...),
        yylex(void),
        yyerror(const char *);
%}

%token IF START STOP

%%
S : I {printf("nesting = %i\n", counter);}
I : IF START I STOP {counter++;}
  | START STOP       {;}        ;
  | {;}
%%

int main(void) {
    yyparse();
}

int yyerror(const char *message){
    printf("%s\n", message);
    void exit(int);
    exit(1);
}
