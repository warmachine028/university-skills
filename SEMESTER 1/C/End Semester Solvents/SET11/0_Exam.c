/* CODE 0: Write a C program to read ‘n’ numbers from user into an array (𝑥) where ‘n’ is user given. Find the average (𝑎) of the numbers. Use the average value to find the variance of the numbers using the following formula:

                                     1  𝑛
                            𝑉𝑎𝑟𝑖𝑎𝑛𝑐𝑒 =-- ∑(𝑥𝑖 − 𝑎)^2
                                     𝑛 𝑖=1
*/

#include <stdio.h>
#include <malloc.h>

void main()
{
    int n;
    printf("Enter the no. of integers: ");
    scanf("%i", &n);

    int sum = 0;
    int *x = malloc(sizeof(char) * n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter %i integer: ", i);
        scanf("%i", &x[i]);
        sum += x[i];
    }

    float a = sum / n;

    float summation = 0;
    for (int i = 0; i < n; i++)
        summation += (x[i] - a) * (x[i] - a);

    float varience = summation / n;     // n instead of n-1 because it is biased estimator of population varience
    printf("Hence the varience of %i data(s) is %.3f. ", n, varience);
}
