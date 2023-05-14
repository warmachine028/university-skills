// CODE 3: Write a C program to read a date of birth from user in the form “dd-mm-yyyy”. Calculate the age of that person as on 01.01.2021 in the same format. Consider that 30 days a month and 365 days a year.


#include <stdio.h>

void main()
{
    int dd, mm, yyyy;
    printf("Enter your birth date (dd-mm-yyyy): ");
    scanf("%i-%i-%i", &dd, &mm, &yyyy);

    int cd = 01, cm = 01, cyyy = 2021;
    if (cd < dd)
    {
        cd += 30;
        cm--;
    }
    if (cm < mm)
    {
        cm += 12;
        cyyy--;
    }
    
    int fd = cd - dd;
    int fm = cm - mm;
    int fy = cyyy - yyyy;

    printf("Present Age: %i years %i months %i days.", fy, fm, fd);
}
