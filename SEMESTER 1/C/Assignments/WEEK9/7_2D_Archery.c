/* CODE n:
Guru Dronacharya has decided to take an archery test of two of his best students Arjuna and Karna. He has
decided to take the test in five levels of difficulty. In each level, they have to hit three different targets. One level is said to be won by an archer if he hits a greater number of targets than his opponent in that level. At the end of the test, whoever secures maximum number of wins will be declared as the best archer. Write a C program to keep
track of the scores and find out who is the best archer among them. The input and output of your program is as
follows:

Input: Two integer arrays ‘A’ and ‘K’ for Arjuna and Karna respectively. Each of size 5. The numbers of each array
keep track of the number of successful hits of that level. Suppose, Arjuna hits 2 targets in first level then A[0] = 2.
Both the arrays are user given.

Output: Name of the best archer

**  Example:
    Input:
    A = {1, 2, 2, 3, 2}
    K = {2, 2, 1, 2, 1}
    Output:
    Arjuna
    Explanation: 1st, 4th and 5th level own by Arjuna. 2nd level is Tie and 3rd level is own by Karna. Hence, Arjuna is declared best.

*/
#include <stdio.h>

void main()
{
    int i = 5, sum = 0, sum1 = 0;
    int A[i], K[i];

    // storing the scores per round
    for (int j = 1; j <= i; j++)
    {
        // storing the scores of Arjuna
        printf("Enter number of hits by Arjuna in round %i: ", j);
        scanf("%i", &A[j]);
        sum += A[j];

        // storing the scores of Karna
        printf("Enter number of hits by Karna in round %i: ", j);
        scanf("%i", &K[j]);
        sum1 += K[j];
    }

    sum == sum1 ? printf("Tie") : (sum > sum1 ? printf("Arjuna") : printf("Karna"));
}