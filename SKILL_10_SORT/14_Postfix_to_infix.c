/* CODE 14:
Write a C program to Convert a postfix expression into infix expression.
*/

#include <stdio.h>
#include <string.h>

#define MAX 20

char str[MAX], stack[MAX];
int top = -1;

char pop()
{
	return stack[top--];
}

void push(char ch)
{
	stack[++top] = ch;
}

int isOperator(char character)
{
	return character == '-' || character == '/' || character == '*' || character == '+';
}

void postfix_to_infix(char expression[])
{
	char element, operator;
	int length = strlen(expression);

	for (int count = 0; count < MAX; count++)
		stack[count] = 0;

	printf("%c", expression[0]);
	for (int count = 1; count < length; count++)
	{
		if (isOperator(expression[count]))
		{
			element = pop();
			operator= expression[count];
			printf(" %c %c", operator, element);
		}
		else
			push(expression[count]);
	}
	printf("%c", expression[top--]);
}

void main()
{
	char postfix[] = "ab*c+\0";
	postfix_to_infix(postfix);
}