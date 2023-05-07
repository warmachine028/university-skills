#include <stdio.h>
#include <stdlib.h>


void main() {
    int n, i, k, flag = 0;
    char var[15], typ[15], b[15], c;
    printf("Enter the number of variables: ");
    scanf("%i", &n);
    for(int i = 0; i < n; i++) {
        printf("Enter the variable[%i]: ", i);
        scanf("%c", &var[i]);
        printf("Enter the variable type[%i] (float: f, int: i): ");
        scanf("%c", &typ[i]);
        if (typ[i] == 'f')
            flag = 1;

        printf("Enter the expression (end with $): ");
        i = 0;
        getchar();
        while((c = getchar()) != '$') {
            b[i] = c;
            i++;
        }
        k = i;
        for (i = 0; i < k; i++) {
            if (b[i] == '/') {
                flag = 1;
                break;
            }
        }
        for (i = 0; i < n; i++) {
            if (b[0] == var[i]) {
                if (flag == 1) {
                    if (typ[i] == 'f') {
                    }
                }
            }
        }
