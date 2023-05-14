/* CODE 0: Write a C program to read ‘n’ user given sentences and find the total number of words in all user given sentences. Assume that the maximum length of each sentence 100.

*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;
    printf("Enter how many sentences: ");
    scanf("%i", &n);
    getchar();

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int length = 100;
        char *string = malloc(length * sizeof(char));

        printf("Enter the sentence %i: ", i+1);
        gets(string);

        int word = 1;
        for (int j = 0; string[j] != '\0'; j++)
            if (string[j] == ' ' || string[j] == '\t')
                word++;
        sum += word;
    }
    printf("The total number of words in %i strings were %i. ", n, sum);
}
