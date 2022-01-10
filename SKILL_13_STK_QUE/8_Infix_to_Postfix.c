// CODE 8: Write down a C program to implement the infix to postfix evaluation.
#include <stdio.h>
#include <malloc.h>
#include <ctype.h>
#include <string.h>

typedef struct
{
    int top;
    int *arr;
    int size;
} stack;

stack *createStack(int size)
{
    stack *new = malloc(sizeof(stack));
    new->size = size;
    new->top = -1;
    new->arr = malloc(sizeof(char) * size);
    return new;
}

void push(stack *stk, char item)
{
    stk->arr[++stk->top] = item;
}

char pop(stack *stk)
{
    return stk->arr[stk->top--];
}

int is_operator(char symbol)
{
    return symbol == '^' ||
           symbol == '*' ||
           symbol == '/' ||
           symbol == '+' ||
           symbol == '-';
}

int precedence(char symbol)
{
    return symbol == '^' ? 3 
         : symbol == '*' || symbol == '/' ? 2
         : symbol == '+' || symbol == '-' ? 1
         : 0;
}

char *infixToPostfix(char *infix)
{
    int n = strlen(infix), j = 0;
    char *postfix = malloc(sizeof(char) * n);

    stack *Stack = createStack(n);
    push(Stack, '('); /* push '(' onto stack */

    strcat(infix, ")"); /* add ')' to infix expression */

    for (int i = 0; infix[i] != '\0'; i++)
    {
        char item = infix[i];
        if (item == ' ' || item == '?')
            continue;

        if (item == '(')
            push(Stack, item);

        else if (isdigit(item))
        {
            int num = 0;
            // extracting full number
            while (isdigit(infix[i]))
                num = infix[i++] - '0' + num * 10;

            char buffer[5];
            itoa(num, buffer, 10);
            for (int i = 0; i < strlen(buffer);)
                postfix[j++] = buffer[i++];

            postfix[j++] = ' ';
        }

        else if (is_operator(item))
        {
            char operator= pop(Stack);
            while (is_operator(operator) && precedence(operator) >= precedence(item))
            {
                postfix[j++] = operator; /* Pop all higher precendence operator and add them to postfix expresion */
                postfix[j++] = ' ';
                operator= pop(Stack);
            }
            push(Stack, operator);
            push(Stack, item); // push current oprerator symbol onto stack */
        }

        else if (item == ')') // if current symbol is ')' then
        {
            char x = pop(Stack); // pop and keep popping until '(' is encountered
            while (x != '(')
            {
                postfix[j++] = x;
                postfix[j++] = ' ';
                x = pop(Stack);
            }
        }
    }
    postfix[j] = '\0';
    return postfix;
}

void main()
{
    char infix[] = "( ( 32 + 34 * 12 ) * ( 1 + 2 ) / ( 1 + 1 ) ) * ( 23 - 21 )?";
    printf("Postfix Expression: %s", infixToPostfix(infix));
}
// 32 34 12 * + 1 2 + * 1 1 + / 23 21 - *