// CODE: Write a C program to implement type checking.

int printf(const char *, ...),
    scanf(const char *, ...),
    getchar();

void main() {
    int n, i, k, flag = 0;
    char vari[1500], typ[1500], b[1500], c;

    printf("Enter the number of variables: ");
    scanf(" %d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter the variable[%d]: ", i);
        scanf(" %c", &vari[i]);
        printf("Enter the variable-type[%d](float-f,int-i): ", i);
        scanf(" %c", &typ[i]);
        if (typ[i] == 'f')
            flag = 1;
    }
    i = 0;
    printf("Enter the Expression(end with $):");
    getchar();
    for (i = 0; (c = getchar()) != '$'; i++)
        b[i] = c;
    k = i;
    for (i = 0; i < k; i++)
        if (b[i] == '/') {
            flag = 1;
            break;
        }
    
    for (i = 0; i < n; i++)
        if (b[0] == vari[i])
            if (flag == 1)
                if (typ[i] == 'f') {
                    printf("\nthe datatype is correctly defined..!\n");
                    break;
                }
                else {
                    printf("Identifier %c must be a float type..!\n", vari[i]);
                    break;
                }
            else {
                printf("\nthe datatype is correctly defined..!\n");
                break;
            }
}
