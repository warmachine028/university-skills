%{
    int printf(const char *, ...),
	yyerror(char *),
        yylex(void);
    void exit(int);
%}

%token NUMBER ID NL
%left '+' '-'
%left '*' '/'

%%
stmt: exp NL { printf("Value = %d\n", $1); exit(0); };
exp: exp '+' exp { $$=$1+$3; }
| exp '-' exp { $$=$1-$3; }
| exp '*' exp { $$=$1*$3; }
| exp '/' exp { if($3==0){ printf("Can't divide by 0"); exit(0);} else $$=$1/$3; }
| '(' exp ')' { $$=$2; }
| ID { $$=$1; }
| NUMBER { $$=$1; };
%%

/* Sub Routines section */
int yyerror(char *msg) {
    printf("Invalid Expression\n");
    exit(0);
}

void main(){
    printf("Enter the Expression: ");
    yyparse();
}



/*
**Executing the entire code: 
1. Compiling the Yacc File:
   $> yacc -d eval.y

2. Compiling the Lex file:
   $> lex eval.l

3. Linking the compiled Files and generate output file:
   $> cc y.tab.c lex.yy.c -lfl  <- lfl - link Flex Library

4. Running the output file:
   $> ./a.out

*/


