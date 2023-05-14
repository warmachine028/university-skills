//Code 4: Write a C program to find the roots of Quadratic equation. Consider that roots are real. For the following equation ax^2 + bx + c ,as input from the user.
#include <stdio.h>
#include <math.h>

void main()
{
    int a, b, c;
    printf("Enter the values of a b c in (ax^2 + bx +c): ");
    scanf("%i %i %i", &a, &b, &c);

    int discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0)
    {
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two Distinct Real Roots Exists:\nroot1 = %di \nroot2 = %di", root1, root2);
    }
    else if (discriminant == 0)
    {
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = root1;
        printf("Two Equal Real Roots Exists:\nroot1 = %.0f \nroot2 = %.0f", root1, root2);
    }
    else if (discriminant < 0)
    {
        float root1, root2;
        root1 = -b / (2 * a);
        root2 = root1;
        float i = sqrt(-discriminant) / (2 * a);
        printf("Two Distinct Complex Roots Exists:\nroot1 = %.2f+%.2f \nroot2 = %.2f-%.2f", root1, i, root2, i);
    }
}