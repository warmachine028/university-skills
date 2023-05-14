// CODE 1: C program to Reverse the characters of a string using stack

#include <stdio.h>
#include <malloc.h>
#include <string.h>

#define pop stack[top--]

int top = -1;
int MAX;

void reverse(char *str)
{
    int n = strlen(str);
    char *stack = malloc(sizeof(char) * n);

    for (int i = 0; i < n; i++)
        stack[++top] = str[i];

    for (int i = 0; i < n; i++)
        str[i] = pop;

    free(stack);
}

void main()
{
    char string[] = "PRITAM";
    reverse(string);
    printf("Reversed string: %s", string);
}