//CODE1: You're given n 2D matrices to multiply. Find out the minimum no of multiplications you need to perform.

#include<stdio.h>
#define min(a, b) a < b ? a : b

int MCM(int p[], int n) {
    int m[n][n];
 
	// number of multiplications are 0(zero) 
	// when there is only one matrix
	for (int i = 1; i < n; i++)
		m[i][i] = 0;

	for (int L = 2; L < n; L++)
        for (int i = 1; i < n - L + 1; i++) {
            int j = i + L - 1;
				
			//assigning to maximum value
            m[i][j] = __INT_MAX__;

            for (int k = i; k <= j - 1; k++) {
                int q = (
							m[i][k] + 
							m[k + 1][j] + 
							p[i - 1] * p[k] * p[j]
					);
				// if number of multiplications
				// found less that number
				// will be updated.
				m[i][j] = min(m[i][j], q);
				
            }
        }
    return m[1][n-1];
}
 
int main() {
    int n;
    scanf("%d",&n);
	
    int arr[++n];
	scanf("%i %i", &arr[0], &arr[1]);

	for (int i = 2; i < n; i++) {
		int x;
		scanf("%i %i", &x, &arr[i]);
	}
	int result = MCM(arr, n);
	printf("%i\n", result);
}


/*  INPUT:
4
10 100
100 20
20 5
5 80

	OUTPUT:
19,000
*/

