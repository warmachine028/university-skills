/* CODE 11:
Write a Program to reverse a string without using Library function.

Sample Input 0
Kolkata

Sample Output 0
ataklok

*/

#include <stdio.h>

int len(char *str)
{
    int count = 0;
    for (count; str[count] != '\0'; count++);
    return count;
}

void main()
{
    char string[] = "Kolkata";
    int n = len(string);
    for (int i = 0; i < n / 2; i++)
        string[i] ^= string[n - i - 1],
        string[n - i - 1] ^= string[i],
        string[i] ^= string[n - i - 1];
    
    string[n] = '\0';
    puts(string);
}