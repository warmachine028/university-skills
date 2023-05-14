/* CODE 0: Consider the following series to calculate the values of 
              𝑥^2     x^3
𝑒^x = 1 + x + ----- + ----- ....
               2!      3!
Write a C function that calculates the sum of the series up to ‘n’ terms where ‘n’ is user given i.e.
               𝑥^2     x^3            x^n
𝑒^x = 1 + x + ----- + ----- + .... + ----- .
               2!      3!             n!
Use the function to calculate the value of 𝑒^2 and find the error in calculation by finding out the difference with the approximate value of 𝑒^2 = 7.389056.


*/

#include <stdio.h>
#include <math.h>

int fact(int n)
{
    int factorial = 1;

    for (int i = 1; i <= n; i++)
        factorial *= i;
    return factorial;
}

void main()
{
    int n, x = 2;
    printf("Enter the value of n: ");
    scanf("%i", &n);

    float ex = 1;
    for (int i = 1; i <= n; i++)
        ex += pow(x, i) / fact(i);
    printf("e^%i = %f", x, ex);
}
