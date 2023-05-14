/* CODE 1: Write the function definition of the following recursive function declaration in C programming language. Use this function to calculate the factorial of a user given number ‘n’.
                            int fact(int n);
*/

#include <stdio.h>

int fact(int n)
{
    return n * (n == 1 ? 1 : fact(n - 1));
}

void main()
{
    int x;
    printf("Enter an integer: ");
    scanf("%i", &x);
    printf("%i! = %i", x, fact(x));
}
