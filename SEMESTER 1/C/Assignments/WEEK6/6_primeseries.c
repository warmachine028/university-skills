/* CODE 6:
Write a C program to print all prime numbers up to ‘n’ where ‘n’ is user given.

Test Data:
Enter Limit: 10
Output: 1 2 3 5 7

*/

#include <stdio.h>
#include <math.h>

void main()
{
    int n;
    printf("Enter limit: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        int primeflag = 0;
        int upperlimit = sqrt(i);

        for (int j = 2; j <= upperlimit; j++)
            if (i % j == 0)
            {
                primeflag = 1;
                break;
            }
        if (primeflag == 0)
            printf("%i ", i);
    }
}