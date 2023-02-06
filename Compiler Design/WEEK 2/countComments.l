/* CODE: To count the number of comments */
%{
    #include <stdio.h>
    int nc = 0;
%}

%%
"/*"[a-zA-Z0-9\n\t]*"*/" {nc++;}
"//"[a-zA-Z0-9\t]*"/n" {nc++;}
%%

int main(int argc, char * argv[]){
    if (argc==2)
        yyin = fopen(argv[1], "1");
    else{
        printf("Enter the input: ");
        yyin = stdin;
    }
    yyout = fopen("output.c", "w");
    yylex();
    printf("No. of comment lines = %i", nc);
    fclose(yyin);
    fclose(yyout);
}

/* Called by lex tool when input exhausted */
int yywrap(){
    return 1;
}