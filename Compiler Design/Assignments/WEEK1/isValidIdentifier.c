#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// checking first character
int checkFchar(char fchar)
{
    int result = 0;
    if (
        !(
            ('a' <= fchar && fchar <= 'z') || // Can start with small caps
            ('A' <= fchar && fchar <= 'Z') || // Can start with large caps
            fchar == '_'                      // Can start with underscores
            ))
        return result;
    return result = 1;
}

// checking all characters for invalid tokens
int checkChars(char str[])
{
    int result = 1;
    for (int i = 0; i < strlen(str); i++)
    {
        char ch = str[i];
        if (
            !(
                ('a' <= ch && ch <= 'z') || // Can have small caps
                ('A' <= ch && ch <= 'Z') || // Can have large caps
                ('0' <= ch && ch <= '9') || // Can have numbers
                ch == '_'                   // Can have underscores
                ))
            return result = 0;
    }
    return result;
}

// Trimming characters 
char *trim(char str[])
{
    int length = strlen(str),
        start = 0, end = length - 1;

    while (start < length) // Trimming initial spaces
        if (str[start] == ' ')
            start++;
        else
            break;

    while (end > 0) // Trimming final spaces
        if (str[end] == ' ')
            end--;
        else
            break;

    int i = start, j = 0; // Copying to new String

    char *newStr = malloc(length);
    for (i; i <= end; i++)
        newStr[j++] = str[i];
    newStr[j++] = '\0';
    return newStr;
}

int isValidIdentifier(char str[])
{
    int result = 0,
        length = strlen(str),
        start = 0,
        end = length - 1;

    if (length < 1) // can't have 0 length
        return result;

    char *newStr = trim(str);

    if (!checkFchar(newStr[0]))
        return result;
    if (!checkChars(newStr))
        return result;

    return result = 1;
}

void main()
{
    char identifier[] = "AnIdentifier_12qj__ ";
    if (isValidIdentifier(identifier))
        printf("Valid identifier");
    else
        printf("Not a valid identifier");
}