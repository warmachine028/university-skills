/* CODE 17:
WAP to convert Postfix to Prefix
*/

#include <stdio.h>
#include <string.h>
#include <malloc.h>

char stack[20];
int top = -1;

void push(char c)
{
	stack[++top] = c;
}

char pop()
{
	return stack[top--];
}

int isOperator(char x)
{
	return x == '+' || x == '-' || x == '/' || x == '*';
}

char *postfixToprfix(char *str)
{
	int i, j = 0;

	int n = strlen(str);

	for (int i = 0; i < n; i++)
		stack[i] = '#';

	char temp[n];
	for (int i = n - 1; i > -1; i--)
	{
		char chr = str[i];
		if (isOperator(chr))
		{
			push(chr);
			continue;
		}
		temp[j++] = chr;
		while (top != -1 && stack[top] == '#')
		{
			pop();
			temp[j++] = pop();
		}
		push('#');
	}
	temp[j] = '\0';

	i = 0;
	j = strlen(temp) - 1;

	char *d = malloc(sizeof(n));
	while (temp[i] != '\0')
		d[j--] = temp[i++];
	d[i] = '\0';
	return d;
}

void main()
{
	char postfix[] = "AB+CD-*\0";
	puts(postfixToprfix(postfix));
}