/* CODE 1: Write a C program to convert a given integer (in 
seconds) to hours, minutes and seconds.

Test Data :
Input seconds: 25300
Expected Output: H:M:S - 7:1:40
*/

#include <stdio.h>

int main()
{
    int input = 25300;
    int rem = input % 60;


    int hours = input / 3600;
    int minuites = (input - 3600 * hours) / 60;
    int seconds = rem % 60;

    printf("H:M:S - %i:%i:%i", hours, minuites, seconds);

    return 0;
}
