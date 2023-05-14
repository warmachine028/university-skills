/* CODE 3: Write the function definition of the following recursive function declaration in C programming language. Use this function to calculate GCD of two user given number (a, b).
                    int GCD(int a, int b);
*/

#include <stdio.h>

int GCD(int a, int b)
{
    return b ? GCD(b, a % b) : a;
}

void main()
{
    int i, j;
    printf("Enter 2 numbers for GCD calculation: ");
    scanf("%i %i", &i, &j);

    // Function only gives correct output if the a>b hence:
    int result = i > j ? GCD(i, j) : GCD(j, i);

    printf("The GCD of %i & %i is %i .", i, j, result);
}