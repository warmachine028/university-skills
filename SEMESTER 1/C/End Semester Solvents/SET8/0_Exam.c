/* CODE 0: Write a C program to print the following pattern up to ‘n’ lines where ‘n’ is user given:
                                    1       1
                                    1 2   2 1
                                    1 2 3 2 1
*/

#include <stdio.h>

void main()
{
    int n;
    printf("Enter how many lines: ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("%i ", j);

        for (int j = 0; j < 2 * (2 * (n - i) - 1); j++)
            printf(" ");

        for (int j = (i == n ? i - 1 : i); j >= 1; j--)
            printf("%i ", j);

        printf("\n");
    }
}
// int j= i==n?i--:i
// j>(i==n?1:0)

// n=9
// 2*(n-i)+2*(n-i-1)
// 2*(n-i+n-i-1)
// ij0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6               2*(2*(n-i)-1)
// 0 1                               1  <- space: 30 = 2*(2*8-1)
// 1 1 2                           2 1  <- space: 26 = 2*(2*7-1)
// 2 1 2 3                       3 2 1  <- space: 22 = 2*(2*6-1)
// 3 1 2 3 4                   4 3 2 1  <- space: 18 = 2*(2*5-1)
// 4 1 2 3 4 5               5 4 3 2 1  <- space: 14 = 2*(2*4-1)
// 5 1 2 3 4 5 6           6 5 4 3 2 1  <- space: 10 = 2*(2*3-1)
// 6 1 2 3 4 5 6 7       7 6 5 4 3 2 1  <- space: 6  = 2*(2*2-1)
// 7 1 2 3 4 5 6 7 8   8 7 6 5 4 3 2 1  <- space: 2  = 2*(2*1-1)
// 8 1 2 3 4 5 6 7 8 9 8 7 6 5 4 3 2 1  <- space: 0  = 2*(2*0-1)

// n=5

//   0 1 2 3 4 5 6 7 8
// 0 1               1  <- space: 14 = 2^4-2
// 1 1 2           2 1  <- space: 10 = 2^3+2
// 2 1 2 3       3 2 1  <- space: 6  = 2^2+2
// 3 1 2 3 4   4 3 2 1  <- space: 2  = 2^1+0
// 4 1 2 3 4 5 4 3 2 1  <- space: 0  = 2^0+0

// n=4

//   0 1 2 3 4 5 6
// 0 1           1  <- space: 10
// 1 1 2       2 1  <- space: 6
// 2 1 2 3   3 2 1  <- space: 2
// 3 1 2 3 4 3 2 1  <- space: 0

// n=3

//   0 1 2 3 4
// 0 1       1  <- space: 6, n:3, i:1
// 1 1 2   2 1  <- space: 2, n:3, i:2
// 2 1 2 3 2 1  <- space: 0, n:3, i:3

// n=2

//   0 1 2
// 0 1   1  <- space: 2
// 1 1 2 1  <- space: 0

// n   spa  2  n-i 2*(n-i-1)
// 2 -> 2   2 * 1 + 0
// 3 -> 6   2 * 2 + 2
// 4 -> 10  2 * 3 + 4
// 5 -> 14  2 * 4 + 6
// 6 -> 18  2 * 5 + 8
// :    :
// :    :
// .    .
// 9 -> 30  2 * 8 +

// 2 * i + 2 * (i - 1)
// 2*(2 * i-1)