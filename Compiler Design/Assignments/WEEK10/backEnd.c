// CODE: C program to implement the back end of the compiler which takes the three address code and produces the 8086 \
    assembly language instructions that can be assembled and run using a 8086 assembler.The target assembly \
    instructions can be simple move, add, sub, jump. Also simple addressing modes are used.

#include <stdio.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>


void main() {
    char icode[10][30], str[20], opr[10];
    int i = 0;
    system("cls");
    printf("\n Enter the set of intermediate code (terminated by exit):\n");
    do {
        scanf("%s", icode[i]);
    } while (strcmp(icode[i++], "exit"));

    printf("\n target code generation");
    printf("\n************************");
    i = 0;
    do
    {
        strcpy(str, icode[i]);
        switch (str[3])
        {
            case '+':
                strcpy(opr, "ADD ");
                break;
            case '-':
                strcpy(opr, "SUB ");
                break;
            case '*':
                strcpy(opr, "MUL ");
                break;
            case '/':
                strcpy(opr, "DIV ");
        }
        printf("\n\tMov %c,R%d", str[2], i);
        printf("\n\t%s%c,R%d", opr, str[4], i);
        printf("\n\tMov R%d,%c", i, str[0]);
    } while (strcmp(icode[++i], "exit"));
    getch();
}