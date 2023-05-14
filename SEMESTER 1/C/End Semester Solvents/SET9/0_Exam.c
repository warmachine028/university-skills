// CODE 0: Write a C program to read ‘n’ number of strings from user and print the length of the highest length palindrome. Assume that the maximum length of any string is 10. Do not use 2D array.


#include <stdio.h>
#include <malloc.h>

int len(char *s)
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}

int palindrome(char *s)
{
    int length = len(s);
    int flag = 1;
    for (int i = 0; i < length / 2; i++)
        if (s[i] != s[length - i - 1])
        {
            flag--;
            break;
        }

    return flag ? 1 : 0;
    // return flag ? flag : flag;
}

void main()
{
    int n;
    printf("Enter how many strings: ");
    scanf("%i", &n);
    getchar();

    int maxlen = 10;
    char *string = malloc(sizeof(char) * maxlen);

    int palength = 0;
    for (int i = 1; i <= n; i++)
    {
        printf("Enter the string %i: ", i);
        gets(string);

        if (palindrome(string))
        {
            int length = len(string);
            if (length > palength || i == 1)
                palength = length;
        }
    }
    printf("The highest palindrome among the strings had length: %i\n", palength);
}
