/*CODE 3: One IT company has hired employees with salary Rs 1000 per day. 
The company has a no work no pay policy 
(i.e. if you go to work for 10 days you get 10 x 1000 = Rs 10,000)
Company gives allowances for overtime at a rate of Rs. 200 per hour.

Write a C program to take an employee’s Total no of working days and
total overtime (in hour) and calculate his/her salary.

Test Data
Working Day: 20
Overtime: 10
Salary: Rs. 22,000
*/

#include <stdio.h>

int main()
{
    int working_day = 20;
    int Overtime = 10;

    int salary = 1000 * working_day + 200 * Overtime;
    printf("Salary: Rs.%i", salary);
    return 0;
}