/*CODE 2:
Assume that there are two points in with coordinates (x1, y1) and 
(x2, y2). Write a C program to calculate the distance (use
Euclidean distance) between the two points. The values of
coordinates will be user given.

Test Data:
Input x1: 25
Input y1: 15
Input x2: 35
Input y2: 10
Expected Output:
Distance between the said points: 11.1803
*/

#include <stdio.h>
#include <math.h>
int main()
{
    int x1 = 25;
    int y1 = 15;

    int x2 = 35;
    int y2 = 10;
    float distance = pow(pow(x2 - x1, 2) + pow(y2 - y1, 2), 0.5);

    printf("%.4f", distance);
    return 0;
}