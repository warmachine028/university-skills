/* CODE 1:  Write the function definition of the following function declaration in C programming language. Use this function to calculate the Binomial Coefficients 
     𝑛         𝑛!
      C = --------- . For any user given value of 𝑛 and 𝑟.
       𝑟    𝑟!(𝑛-𝑟)!
                int ncr(int n, int r);

*/

#include <stdio.h>

int fact(int n)
{
    return n == 1 ? 1 : n * fact(n - 1);
}

int ncr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

void main()
{
    int n, r;
    printf("Enter values of 'n' & 'r': ");
    scanf("%i %i", &n, &r);

    printf("%i          %i!", n, n);
    printf("\n C =  ------------ = %i", ncr(n, r));
    printf("\n  %i     %i!(%i-%i)!", r, r, n, r);
}
