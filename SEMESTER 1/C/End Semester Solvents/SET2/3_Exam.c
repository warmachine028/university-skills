/* CODE 3: Write the function definition of the following function declaration in C programming language. 
           Use this function to calculate the value of 𝑥^𝑛 where 𝑥 and 𝑛 is user given.
                            double pow(double x, int n);
*/

#include <stdio.h>

double pow(double x, int n)
{
    double power = 1;
    for (int i = 1; i <= n; i++)
        power *= x;

    return power;
}

void main()
{
    double x;
    int n;
    printf("Enter the base(x) and exponent(n): ");
    scanf("%lf %i", &x, &n);

    printf("%.lf^%i = %.f", x, n, pow(x, n));
}
