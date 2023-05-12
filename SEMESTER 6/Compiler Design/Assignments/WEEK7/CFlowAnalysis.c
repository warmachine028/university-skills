// CODE: Write a C program to implement control flow analysis and Data flow Analysis.

#include <string.h>
#include <stdio.h>

struct expr
{
    char op[2], op1[5], op2[5], res[5];
    int flag;
} arr[10];

int n, 
    atoi(char *),
    isdigit(int);

void change(int p, int q, char *res) {
    for (int i = q + 1; i < n; i++)
        if (strcmp(arr[q].res, arr[i].op1) == 0)
            if (res == NULL)
                strcpy(arr[i].op1, arr[p].res);
            else
                strcpy(arr[i].op1, res);
        else if (strcmp(arr[q].res, arr[i].op2) == 0)
            if (res == NULL)
                strcpy(arr[i].op2, arr[p].res);
            else
                strcpy(arr[i].op2, res);
}

void input() {
    printf("Enter the maximum number of expressions: ");
    scanf("%d", &n);
    printf("Enter the input: ");
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i].op);
        scanf("%s", arr[i].op1);
        scanf("%s", arr[i].op2);
        scanf("%s", arr[i].res);
        arr[i].flag = 0;
    }
}
void constant() {
    char res1[5];
    for (int i = 0; i < n; i++)
        if (isdigit(arr[i].op1[0]) && isdigit(arr[i].op2[0])) {
            int op1 = atoi(arr[i].op1),
                op2 = atoi(arr[i].op2),
                op = arr[i].op[0], res;
            switch (op) {
                case '+':
                    res = op1 + op2;
                    break;
                case '-':
                    res = op1 - op2;
                    break;
                case '*':
                    res = op1 * op2;
                    break;
                case '/':
                    res = op1 / op2;
            }
            sprintf(res1, "%d", res);
            arr[i].flag = 1;
            change(i, i, res1);
        }
}
void expression() {
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (strcmp(arr[i].op, arr[j].op) == 0)
                if (strcmp(arr[i].op, "+") == 0 || strcmp(arr[i].op, "*") == 0)
                    if (strcmp(arr[i].op1, arr[j].op1) == 0 && strcmp(arr[i].op2, arr[j].op2) == 0 || strcmp(arr[i].op1, arr[j].op2) == 0 && strcmp(arr[i].op2, arr[j].op1) == 0)
                        arr[j].flag = 1,
                        change(i, j, NULL);
                else
                    if (strcmp(arr[i].op1, arr[j].op1) == 0 && strcmp(arr[i].op2, arr[j].op2) == 0)
                        arr[j].flag = 1,
                        change(i, j, NULL);
        
}
void output(){
    printf("\nOptimized code is : ");
    for (int i = 0; i < n; i++) 
        if (!arr[i].flag)
            printf("\n%s %s %s %s\n", arr[i].op, arr[i].op1, arr[i].op2, arr[i].res);
}

int main() {
    int ch = 0;
    input();
    constant();
    expression();
    output();
}