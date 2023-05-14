/* CODE 2:
Write the function definition of the following recursive function declaration in C
programming language. Use this function to calculate GCD of two user given number(a, b).
    
int GCD(int a, int b);

*/

#include <stdio.h>

int GCD();

void main()
{
    int num1, num2;
    printf("Enter 2 numbers for GCD calculation: ");
    scanf("%i %i", &num1, &num2);

    // Function only gives correct output if the a>b hence: 
    int result = num1 > num2 ? GCD(num1, num2) : GCD(num2, num1);

    printf("The GCD of %i & %i is %i .", num1, num2, result);
}

int GCD(int a, int b)
{
    return b ? GCD(b, a % b) : a;
}
________________________________________________

GCD(1440, 408)
    GCD(408, 216)
        GCD(216, 192)
            GCD(192, 24)
                GCD(24, 0)
                    stack.pop(24)   <- Base Case
                return 24
            return 24
        return 24
    return 24
return 24