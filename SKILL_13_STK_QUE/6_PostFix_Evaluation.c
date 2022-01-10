// CODE 6: Write a C Program to evaluate a Postfix expression.

#include "1_Stack.c"
#include <ctype.h>

int evaluate(char string[], int n, int multidigit)
{
    Stack *stack = createStack(n);
    for (int i = 0; string[i] != '\0'; i++)
    {
        char character = string[i];
        if (character == ' ') // when space is encountered
            continue;

        if (isdigit(character)) // when digit is encountered
        {
            int number = character - '0';
            if (multidigit)
            {
                number = 0;
                while (isdigit(string[i]))
                    number = (int)(string[i++] - '0') + 10 * number;
                i--;
            }
            push(number, stack);
        }
        else // when operator is encountered
        {
            int num1 = pop(stack);
            int num2 = pop(stack);
            switch (character)
            {
            case '+':
                push(num2 + num1, stack);
                break;
            case '-':
                push(num2 - num1, stack);
                break;
            case '*':
                push(num2 * num1, stack);
                break;
            case '/':
                push(num2 / num1, stack);
                break;
            case '%':
                push(num2 % num1, stack);
                break;
            case '^':
                push(num2 ^ num1, stack);
                break;
            default:
                break;
            }
        }
    }
    return pop(stack); // Return the result
}

void main()
{
    char postfix_expression[] = "231*+9-";
    printf("Result of Postfix Expression: %i", evaluate(postfix_expression, sizeof(postfix_expression) / sizeof(char), 0));
    char postfix_expression2[] = "100 200 + 2 / 5 * 7 +";
    printf("\nResult of Postfix Expression: %i", evaluate(postfix_expression2, sizeof(postfix_expression2) / sizeof(char), 1));
}