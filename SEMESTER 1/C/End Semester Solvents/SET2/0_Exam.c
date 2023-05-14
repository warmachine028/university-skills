// CODE 0: An English word is said to be perfect if the sum of the ASCII values of the characters is a prime number. Write a C program to check if a user given word is perfect or not. Print “Perfect” for perfect words and “Not Perfect” for other words. Assume that the maximum possible word length is 10. Do not use “ctype.h”.


#include <stdio.h>
#include <math.h>

void main()
{
    int length = 10;
    char word[length];

    printf("Enter a word: ");
    scanf("%s", word);

    int sum = 0;
    for (int i = 0; word[i] != '\0'; i++)
        sum += word[i];

    int flag = 1;
    for (int i = 2; i <= sqrt(sum); i++)
        if (sum % i == 0)
        {
            flag--;
            break;
        }
    flag ? printf("Perfect") : printf("Not Perfect");
}
