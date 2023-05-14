/* CODE 1: Write the function definition of the following recursive function declaration in C programming language.
           Use this function to calculate the nth Fibonacci number where ‘n’ is user given.
                                		int fib(int n);

*/

#include <stdio.h>

int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}

void main()
{
	int n;
	printf("Enter which fibonacci term: ");
	scanf("%i", &n);
	printf("Fibonacci term %i is: %i", n, fib(n));
	return;
}

// fib(6) = fib(5) + fib(4)
//     fib(5) = fib(4) + fib(3)
//         fib(4) = fib(3) + fib(2)
//             fib(3) = fib(2) + fib(1)
//                 fib(2) = fib(1) + fib(0)
//                     stack.pop(1)    <- Base Case
//                 return 1
//             return 2
//         return 3
//     return 5
// return 8
