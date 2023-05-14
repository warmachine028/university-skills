/* CODE 3: Write a C program to print the following pattern up to ‘n’ lines where the first character in first line is also an input. If input is ‘A’ then the pattern is as follows;
A
A B
A B C
…………
If input is ‘E’ then the pattern is:
E
E F
E F G
…………

*/

#include <stdio.h>

void main()
{
    int n;
    printf("Enter how many lines: ");
    scanf("%i", &n);
    getchar();

    char char_;
    printf("Enter the first character: ");
    scanf("%c", &char_);

    while (char_ < 65 || char_ > 90)
    {
        printf("INVALID CHARACTER\n");
        printf("Please try again: ");
        scanf("%c", &char_);
    }

    for (int i = 1; i <= n; i++)
    {
        int flag = char_;
        for (int j = 0; j < i; j++)
        {
            flag = flag > 90 ? 65 : flag;
            printf("%c ", flag);
            flag++;
        }
        printf("\n");
    }
}
