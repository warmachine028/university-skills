/* CODE 0: In XYZ social media platform a user given password for a social media account is said to be valid if it contains the following:
  I. At least one lowercase letter
 II. At least one uppercase letter
III. At least one digit

Write a C program to read a password from user and check if the password is valid or not. The maximum length of password can be 32.
*/

#include <stdio.h>

int valid(char *pass)
{
    int lcase = 0;
    int upcase = 0;
    int digit = 0;
    for (int i = 0; pass[i] != '\0'; i++)
    {
        if (pass[i] >= 65 && pass[i] <= 90)
            upcase++;
        else if (pass[i]>=97 && pass[i]<=122)
            lcase++;
        else if (pass[i]>=48 && pass[i]<=57)
            digit++;
    }
    if (lcase && upcase && digit)
        return 1;
}

void main()
{
    int length = 32;
    char password[32];
    printf("Password: ");
    gets(password);

    if (valid(password))
        printf("The password is valid.");
    else
        printf("The password is invalid.");
}
