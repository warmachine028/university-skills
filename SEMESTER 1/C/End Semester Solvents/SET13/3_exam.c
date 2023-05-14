// CODE 3: Write a C program to find the minimum of squares of ‘n’ user given numbers. The user may give negative inputs as well.


#include <stdio.h>

void main()
{
    int n;
    printf("Enter number of integers: ");
    scanf("%i", &n);

    int num, minimum;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %i integer: ", i + 1);
        scanf("%i", &num);

        num *= num;
        if (i == 0)
            minimum = num;
        minimum = num < minimum ? num : minimum;
    }
    printf("The minimum of squares of %i user given numbers is %i.", n, minimum);
}
