/* CODE 1:
Given (or input from the user) marks in 3 subjects and we have to calculate
percentage and print the division. 
Formula to get percentage: 
(Total obtained marks * 100)/Grand total (total of maximum marks) 
Division Based on the percentage, we will print the division, 
    if Percentage is: 
    Greater than or equal to 60, division will be "First",
    Greater than or equal to range(46 to 59) division will be "Second",
    Greater than or equal to range(40 to 45), division will be "Third", 
    Less than it (we will not check any condition, it will be written in else), 
    the result will be fail. 

*/

#include <stdio.h>

void main()
{
    int mar1, mar2, mar3;
    printf("Enter the marks obrained in 3 subjects: ");
    scanf("%i %i %i", &mar1, &mar2, &mar3);

    int tot1, tot2, tot3;
    printf("Enter the maximum marks of the subjects: ");
    scanf("%i %i %i", &tot1, &tot2, &tot3);

    float percentage = (mar1 + mar2 + mar3) * 100 / (tot1 + tot2 + tot3);

    if (percentage >= 60) // [60, total]
        printf("First Division !");
    else if (percentage <= 59 && percentage >= 46) // [46, 59]
        printf("Seconf Division");
    else if (percentage <= 45 && percentage >= 40) // [45, 40]
        printf("Third Division");
    else // [0, 40]
        printf("Failed");
}

// OUTPUTS:
// Enter the marks obrained in 3 subjects: 30 30 30
// Enter the maximum marks of the subjects: 100 100 100
// Failed

// Enter the marks obrained in 3 subjects: 56 45 30
// Enter the maximum marks of the subjects: 100 100 100
// Third Division