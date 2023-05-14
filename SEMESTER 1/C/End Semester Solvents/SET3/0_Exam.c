// CODE 0: Write a C program to read a sentence from user and count the number of occurrences of a user given word. Assume that the maximum length of the sentence is 100 and the user given word is 10.


#include <stdio.h>
#include <malloc.h>

int len(char *line)
{
    int length = 0;
    for (length; line[length] != '\0'; length++)
        ;
    return length;
}

void main()
{
    char *sentence = malloc(sizeof(char) * 100);
    char *word = malloc(sizeof(char) * 10);

    printf("Enter the sentence: ");
    gets(sentence);
    printf("Enter the search element: ");
    gets(word);

    int count = 0;
    for (int i = 0; i < len(sentence) - len(word); i++)
    {
        int found = 1;
        for (int j = 0; j < len(word); j++)
            if (sentence[i + j] != word[j])
            {
                found--;
                break;
            }
        if (found)
            count++;
    }

    printf("'%s' occured %i times in above sentence. ", word, count);
}
