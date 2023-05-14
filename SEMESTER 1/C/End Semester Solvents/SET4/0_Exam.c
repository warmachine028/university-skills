// CODE 0: Write a C program to count the number of vowels in a user given sentence. The maximum length of the sentence is given by user. Also assume that the sentence may contain both uppercase and lowercase letters.


#include <stdio.h>
#include <malloc.h>

void main()
{
    int n;
    printf("Enter the maximum length: ");
    scanf("%i", &n);
    getchar();

    char *string = malloc(n * sizeof(char));
    printf("Enter the sentence: ");
    gets(string);

    int vowel = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        char letter = string[i];
        if (letter == 'A' || letter == 'a' 
         || letter == 'E' || letter == 'e' 
         || letter == 'I' || letter == 'i' 
         || letter == 'O' || letter == 'o' 
         || letter == 'U' || letter == 'u')
            vowel++;
    }
    printf("Total number of vowels in the above string is: %i ", vowel);
}
