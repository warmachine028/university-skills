// CODE 0: Write a C program to read ‘n’ user given sentences and find the total number of words in all user given sentences. Assume that the maximum length of each sentence 100.

#include <stdio.h>

void main()
{
    int n;
    printf("Enter how many sentences: ");
    scanf("%i", &n);
    getchar();

    int words = n;
    char sentence[100];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the sentence %i: ", i + 1);
        gets(sentence);

        for (int j = 0; sentence[j] != '\0'; j++)
            if (sentence[j] == ' ' && sentence[j + 1] != ' ')
                words++;
    }
    printf("The %i sentences had %i words in total.", n, words);
}
