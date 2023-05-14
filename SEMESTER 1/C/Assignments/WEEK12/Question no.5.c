// Question no.5.c
int str_len(char *s)
{
    int i = 0;
    while (s[i] != '\0')
        i++;

    return i;
}