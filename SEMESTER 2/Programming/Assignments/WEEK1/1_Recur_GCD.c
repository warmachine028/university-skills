// CODE 1: Write a program in C to find the GCD of 2 numbers using recursion

#include <stdio.h>

int GCD(int a, int b)
{
    return b ? GCD(b, a % b) : a;
}

void main()
{
    int num1 = 1440;
    int num2 = 408;

    // Function only gives correct output if the a>b hence:
    int result = num1 > num2 ? GCD(num1, num2) : GCD(num2, num1);
    printf("The GCD of %i & %i is %i .", num1, num2, result);
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