/* CODE 1:
Write the function definition of the following function declaration in C programming
language. Use this function to calculate the value of 𝑥^𝑛 where 𝑥 and 𝑛 is user given.
    
double pow(double x, int n);

*/

#include <stdio.h>

double power();

void main()
{
    double base;
    int exponent;
    printf("Enter the base and exponent: ");
    scanf("%lf %i", &base, &exponent);

    printf("%.2lf ^ %i = %.2lf", base, exponent, power(base, exponent));
}

double power(double x, int n)
{
    double flag = 1;
    for (int i = 1; i < n; i++)
        flag *= x;
    return flag;
}
________________________________________________

NOTE: I changed the <function name> from pow() to power() intentionally 
as it was throwing this warning in the console: 

conflicting types for built-in function 'pow' [-Wbuiltin-declaration-mismatch]
   double pow();
          ^~~