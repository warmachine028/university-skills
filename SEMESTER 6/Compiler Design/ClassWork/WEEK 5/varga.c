#define printf __builtin_printf
#define args __builtin_va_list
void exit(int);

int add(int size, ...)
{
    args numbers;
    int result = 0;
    __builtin_va_start(numbers, size);

    for (int i = 0; i < size; i++)
    {
        int item = __builtin_va_arg(numbers, int);
        printf("%i\n", item);
        result += item;
    }
    return result;
}

int main()
{
    char *arr;
    char a = 254;
    for (int i = 0; i < 100; i++)
        printf("%i, ", &arr[i]);
    exit(0);
}
