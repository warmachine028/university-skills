#include <string.h>
#include <malloc.h>

// remove comments from code
char *removeComments(char data[])
{
    int length = strlen(data);
    char *newData = malloc(length);
    int i = 0, j = 0;
    while (i < length)
    {
        if (data[i] == '\'') // Skip Characters
        {
            if (data[i + 1] == '\\') // Skip Escape Sequences
                newData[j++] = data[i++],
                newData[j++] = data[i++];
            do
            {
                newData[j++] = data[i++];
            } while (data[i] != '\'');
        }
        if (data[i] == '"') // Skip Strings
        {
            do
            {
                newData[j++] = data[i++];
            } while (data[i] != '"');
        }
        if (data[i] == '/')
        {
            if (data[i + 1] == '/') // Single line Comments
            {
                do
                {
                    i++;
                } while (data[i] != '\n');
                continue;
            }
            if (data[i + 1] == '*') // Multi Line Comments
            {
                i++;
                do
                {
                    i++;
                } while (data[i] != '*' || data[i + 1] != '/');
                i += 2;
                continue;
            }
            newData[j++] = data[i];
        }
        else
            newData[j++] = data[i];
        i++;
    }
    return newData;
}