// CODE 10: Write down a C- program to implement the push () operation of the stack and return the top of it.
#include "1_Stack.c"

void main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int len = sizeof(array) / sizeof(int);
    Stack *stack = createStack(len);
    for (int i = 0; i < len; i++)
        push(array[i], stack);

    printf("%i\n", peek(stack)); // Return the top of the stack
    pop(stack);
    printf("%i\n", peek(stack));
    print(stack);
}