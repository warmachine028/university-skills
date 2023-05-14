/* Code 2:
Consider the quadratic equation a + bx + c and a > 0. 
The discriminant (d) is defined as b2 − 4ac.

a. If d > 0 then both roots of the equation are real.
b. If d = 0 then both roots are equal to one real root.
c. If d < 0 then both roots are imaginary.

Write a C program to find the roots of a Quadratic equation. Your program should consider all cases of
different values of discriminant as mentioned above. Take the coefficients of the equation as input.
Test Data:
Insert Coefficients: 1 -4 13
Roots: 2+3i, 2-3i
*/
#include <stdio.h>
#include <math.h>

void main()
{
    int a, b, c;
    float root1, root2;
    printf("Enter the values of a b c in (ax^2 + bx +c): ");
    scanf("%i %i %i", &a, &b, &c);

    int discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two Distinct Real Roots Exists:\nroot1 = %.f \nroot2 = %.f", root1, root2);
    }
    else if (discriminant == 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = root1;
        printf("Two Equal Real Roots Exists:\nroot1 = %.f \nroot2 = %.f", root1, root2);
    }
    else if (discriminant < 0)
    {
        root1 = -b / (2 * a);
        root2 = root1;
        float i = sqrt(-discriminant) / (2 * a);
        printf("Two Distinct Complex Roots Exists:\nroot1 = %.f+%.fi \nroot2 = %.f-%.fi", root1, i, root2, i);
    }
}

// Output 1
// Enter the values of a b c in (ax^2 + bx +c): 1 -4 13
// Two Distinct Complex Roots Exists:
// root1 = 2+3i
// root2 = 2-3i
