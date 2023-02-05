#include "isValidIdentifier.c"

int isValidComment(char str[])
{
    char *newString = trim(str);
    int result = 0,
        length = strlen(newString);
    if (strlen(newString) < 2) // Can't be shorter than 2
        return result;
    if (newString[0] != '/') //  Should start with '/'
        return result;
    if (newString[1] != '/' && newString[1] != '*') // '//' and '/*'
        return result;
    if (newString[1] == '*')
        if (newString[length - 2] != '*')
            return result;
        else if (newString[length - 1] != '/')
            return result;

    return result = 1;
}
