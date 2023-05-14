// CODE 0: Write a C program to find the nth term of the following sequence of numbers where ‘n’ is user given: 1, 3, 3, 5, 6, 7, 9, 9….

#include <stdio.h>
#include <math.h>

#define sequence1(n) n == 1 ? n : 3 * (n - 1)
#define sequence2(n) n == 1 ? 3 : n + 2

void main()
{
    int n;
    printf("Enter how many terms: ");
    scanf("%i", &n);

    int a1 = 1, a2 = 1, an;
    for (int counter = 0; counter < n;)
    {
        an = sequence1(a1);
        a1++, counter++;

        an = a2 = sequence2(a2);
        counter++;
    }
    printf("The %ith term of the following sequence is: %i", n, an);
}
// 1, 3,3, 5,6, 7,9, 9
// 1,3,6,9,12
//     +
// 3,5,7,9,11

//         1
//       1 1 1
//    1 1 1 1 1 1
// 1 1 1 1 1 1 1 1 1
