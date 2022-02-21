// CODE 3: Write a C program to input two Stacks and compare their contents.
#include "2_TwoStack.c"

void main()
{
    int n;
    printf("Enter size per stack: "), scanf("%i", &n);

    TwoStack *twoStack = create2Stack(n * 2);
    int counter = 0;
    printf("Enter Contents of First Stack: ");
    for (counter; counter < n; counter++)
    {
        int data; scanf("%i", &data);
        push(twoStack, data, 1);
    }

    printf("Enter Contents of Second Stack: ");
    for (counter; counter < n*2; counter++)
    {
        int data; scanf("%i", &data);
        push(twoStack, data, 2);
    }

    printf("Now comparing the contents subseqently: \n");
    for (int i = 0; i < n; i++)
    {
        int data1 = pop(twoStack, 1), data2 = pop(twoStack, 2);
        printf("%i %c %i\n", data1, data1> data2 ? '>': data1 < data2? '<' : '=', data2);
    }
}