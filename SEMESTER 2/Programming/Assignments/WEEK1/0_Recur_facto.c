// CODE 0: Write a program in C to find the Factorial of a number using recursion

#include <stdio.h>

int fact(int n)
{
    return n == 1 ? n : n * fact(n - 1);
}

void main()
{
    int n = 6;
    printf("The factorial of %i is %i.", n, fact(n));
}

_________________________________________________
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
