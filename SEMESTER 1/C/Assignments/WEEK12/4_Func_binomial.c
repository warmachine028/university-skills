/* CODE 4:
Write the function definition of the following function declaration in C programming language.
Use this function to calculate the Binomial Coefficients
       𝑛           𝑛!
        C =    ---------   For any user given value of 𝑛 and r .
         𝑟      𝑟!(𝑛−𝑟)!
Use the previously defined function “fact()” (Question no.4) in this program.
    
int ncr(int n, int r);


*/

#include <stdio.h>
#include "Question no.4.c"

int ncr(int n, int r);

void main()
{
    int n, r;
    printf("Enter the value of (n) and (r): ");
    scanf("%i %i", &n, &r);

    printf("%i          %i!", n, n);
    printf("\n C =  ------------ = %i", ncr(n, r));
    printf("\n  %i     %i!(%i-%i)!", r, r, n, r);
}

int ncr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
____________________________________________

4          4!
 C =  ------------ = 4
  3     3!(4-3)!

12         12!
 C =  ------------- = 220
  3     3!(12-3)!