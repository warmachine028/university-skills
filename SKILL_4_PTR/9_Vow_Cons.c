/* CODE 9:
Write a program to count the number of vowels and consonants in a string

Sample Input 0
University

Sample Output 0
No. of Vowels : 4
No. of Consonants: 6
*/

#include <stdio.h>
#include <malloc.h>

int *convows(char *string)
{
    int *counts = calloc(sizeof 2, 2);
    char vows[] = "aeiouAEIOU";
    char cons[] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";

    for (int i = 0; string[i] != '\0'; i++)
    {
        int vowflag = 1;
        for (int j = 0; vows[j] != '\0'; j++) // Comparing vowels
            if (vows[j] == string[i])
            {
                counts[0]++;
                vowflag--;
                break;
            }

        if (vowflag)
            for (int j = 0; cons[j] != '\0'; j++) // Comparing consonants
                if (cons[j] == string[i])
                {
                    counts[1]++;
                    break;
                }
    }
    return counts;
}

void main()
{
    char string[] = "University";
    int *res = convows(string);
    printf("No. of Vowels : %i\n", *res);
    printf("No. of Consonants : %i", *++res);
}
