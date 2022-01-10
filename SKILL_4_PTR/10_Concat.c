/* CODE 10:
Write a program to concatenate two strings without using Library function

Sample Input 0
String 1 : Hello
String 2 : World

Sample Output 0
Hello World
*/

#include <stdio.h>

void *concatenate(char *str1, char *str2)
{
    char *str3 = str1;
    int j = 0;
    
    for (int i = 0; str1[i] != '\0';)
        str3[j++] = str1[i++];
    str3[j++] = ' ';

    for (int i = 0; str2[i] != '\0';)
        str3[j++] = str2[i++];
    str3[j++] = '\0';

    return str3;
}

void main()
{
    char string1[] = "Hello";
    char string2[] = "World";

    puts(concatenate(string1, string2));
}