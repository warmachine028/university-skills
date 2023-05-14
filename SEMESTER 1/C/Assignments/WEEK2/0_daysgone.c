/* CODE 0: Write a C program to convert a given integer(in days) 
to years, months and days, assumes that all 
months have 30 days and all years have 365 days.

Test Data :
Input no. of days: 2535
Expected Output: 6 Years 11 Months 15 Days*/

#include <stdio.h>

int main()
{
    // initialization
    int input = 2535;
    int rem = input % 365;

    int years = input / 365;
    int months = rem / 30;
    int days = rem % 30;
    printf("%i Years %i Months %i Days", years, months, days);

    return 0;
}

                //                 ILLUSTRATION
                // input (in_Days) = 2535
                // Years = input / (365 Days) 
                // Remaining Days = input % (365 Days) 

                // Months = Remaining Days / (30 Days)
                // Days = Remaining Days % (30 Days)