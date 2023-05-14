
#include <stdio.h>
#include <math.h>

void main()
{
    int n;
    printf("Enter how many terms (n): ");
    scanf("%i, ", &n);

    int counter = 0, flag = 1;
    for (int i = 0; i < n;)
    {
        counter >= 2 ? flag++, counter = 0 : flag;

        int primeflag = 1;
        for (int j = 2; j <= sqrt(flag); j++)
            if (!(flag % j))
            {
                primeflag = 0;
                break;
            }

        if (primeflag)
        {
            if (!(flag % 2))
            {
                flag++, i++;
                continue;
            }
            counter++, i++;
            continue;
        }
        flag++;
    }
    printf("The Series: 1, 1, 2, 3, 3, 5, 5, 7, ...\n");
    printf("The no. %i term of the above series is %i. ", n, flag);
}
