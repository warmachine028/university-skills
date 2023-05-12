#include <stdio.h>
#include <malloc.h>
#include <string.h>

int isOperator(char ch)
{
    char chars[] = {'*', '+', '-', '%', '/', '(', ')', '^'};
    for (int i = 0; i < strlen(chars); i++)
        if (ch == chars[i])
            return 1;
    return 0;
}

//  Of Division Multiplication Addition Subtraction
int preceedence(char ch)
{
    if (ch == '(') // Brackets
        return 3;
    if (ch == '^') // Exponents
        return 2;
    if (ch == '/' || ch == '%' || ch == '*')
        return 1;
    if (ch == '+' || ch == '-')
        return 0;
}

void print(char st[], int s)
{
    for (int i = 0; i < s; i++)
        printf("%c", st[i]);
    printf("\n");
}
char *convert(char infix[])
{
    char *postfix = malloc(strlen(infix));
    char *stack = malloc(strlen(infix));
    int len = 0, // length of postfix expression
        top = 0; // length of stack
    for (int i = 0; i < strlen(infix); i++)
    {
        char character = infix[i];
        if (!isOperator(character)) // operand
            postfix[len++] = character;
        else if (character == ')') // closing parenthesis
        {
            while (stack[top] != '(')
                postfix[len++] = stack[top--];
            top--;
        }
        // Empty stack or character with lower preceedence than top
        else if (top == 0 || preceedence(character) < preceedence(stack[top - 1]))
            stack[top++] = character;

        // Move topmost character to postfix expr and move character to stack top
        else
            postfix[len++] = stack[top - 1],
            stack[top] = character;
    }
    postfix[len++] = '\0'; // Adding EOL
    return postfix;
}

void main()
{

    // char expression[100];
    // printf("Enter an Infix expression: ");
    // gets(expression);
    char expression[] = "A*(B*C+D*E)+F";
    char *postfix = convert(expression);
    printf("Infix Expression for %s is %s", expression, postfix);
}