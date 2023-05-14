/* CODE 3:
Write the function definition of the following recursive function declaration in C programming 
language.Use this function to calculate the factorial of a user given number ‘n’.
    
int fact(int n);

*/

#include <stdio.h>

int fact();

void main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%i", &n);

    printf("%i! = %i", n, fact(n));
}

int fact(int n)
{
    return n == 1 ? 1 : n * fact(n - 1);
}
________________________________________________

fact(6)
    6 * fact(5)
        5 * fact(4)
            4 * fact(3)
                3 * fact(2)
                    2 * fact(1)
                        stack.pop(1)    <- Base Case
                    return 1
                return 2
            return 6
        return 24
    return 120
return 720

