/* CODE 5:
Write a C program to print the following pattern up to ‘n’ lines.

      1        
    1 2 1       
  1 2 3 2 1     
1 2 3 4 3 2 1 

*/
#include <stdio.h>

void main()
{
    int n;
    printf("Enter how many lines of pattern: ");
    scanf("%d", &n);

    int nos = (n - 1) * 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < nos  ; j++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("%d ", j);
        for (int j = i - 1; j >= 1; j--)
            printf("%d ", j);
        printf("\n");
        nos -= 2;
    }
}