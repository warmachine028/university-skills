#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


void main() {
    int i = 0, x = 0;
    void *p, *add[5];
    char ch, b[15], d[15], c;

    printf("Expression terminated by $: ");
    for(i = 0; (c=getchar()) != '$'; i++)
        b[i] = c;

    int n = i - 1;
    printf("Given Expression: ");
    for (i = 0; i <= n; i++)
        printf("%c", b[i]);

    printf("\n                Symbol Table\n");
    printf("Sl No.  Symbol \t\t addr \t\t   type\n");
    for (i = 0; i <= n; i++) {
        c = b[i];
        if (isalnum(toascii(c))) {
            p = malloc(c);
            add[x] = p;
            d[x] = c;
            printf("%i \t   %c    \t%p\t operand\n", i + 1, c, p);
            x++;
        }
        else {
            ch = c;
            if (ch == '+' || ch == '-' || ch == '*' || ch == '=' || ch == '/') {
                p = malloc(ch);
                add[x] = p;
                d[x] = ch;
                printf("%i \t   %c    \t%p\t operator\n", i + 1, ch, p);
                x++;
            }
        }
    }
}
