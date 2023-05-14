/* CODE 2: Write the function definition of the following function declaration in C programming language. Use this function to reverse a user given string. Here, ‘s’ is formal arguments to accept the address of the string passed to it. Do not use “string.h”. you may declare any other function if required.
                char* strrev(char* s);
*/
#include <stdio.h>
#include <stdlib.h>

int len(char *s)
{
    int n = 0;
    while (s[n] != '\0')
        n++;
    return n;
}

char *strrev(char *s)
{
    int length = len(s);
    for (int i = 0; i < length / 2; i++)
    {
        s[i] += s[length - 1 - i];
        s[length - 1 - i] = s[i] - s[length - 1 - i];
        s[i] += -s[length - 1 - i];
    }
}

void main()
{
    int n;
    printf("Enter the maximum length: ");
    scanf("%i", &n);
    getchar();

    char *str = malloc(sizeof(char) * n);
    printf("Enter the string: ");
    gets(str);
    strrev(str);
    printf("Reversed String: %s",str);
}

// a += b
// b = a - b
// a += -b