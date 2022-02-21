/* CODE 11:
Write down a C program to implement multiple stack.
   i) Push
  ii) Pop
 iii) Display


*/

#include <stdio.h>
#define MAX 10

int stack[MAX], topA = -1, topB = MAX;

void pushA(int val)
{
	if (topA == topB - 1)
		return;
	stack[++topA] = val;
}

int popA()
{
	return topA == -1 ? -999 : stack[topA--];
}

void display_stackA()
{
	if (topA == -1)
		return;
	for (int i = topA; i >= 0; i--)
		printf("\t %d", stack[i]);
}

void pushB(int val)
{
	if (topB - 1 == topA)
		return;
	stack[--topB] = val;
}

int popB()
{
	return topB == MAX ? -999 : stack[topB++];
}

void display_stackB()
{
	if (topB == MAX)
		return;
	for (int i = topB; i < MAX; i++)
		printf("%i", stack[i]);
}

void main()
{
	int option, val;
	option = -1;
	while (option != 7)
	{
		scanf("%i", &option);
		switch (option)
		{
		case 1:
			scanf("%i", &val);
			pushA(val);
			break;
		case 2:
			scanf("%i", &val);
			pushB(val);
			break;
		case 3:
			if (val != -999)
				printf("%i", val);
			break;
		case 4:
			if (val != -999)
				printf("%i", val);
			break;
		case 5:
			display_stackA();
			break;
		case 6:
			display_stackB();
			break;
		default:
			break;
		}
	}
}