// CODE 2: Write a program to validate a comment in C

#include "isValidComment.c"

void main()
{
    char comment[100];
    printf("Enter a comment: ");
    gets(comment);

    if (isValidComment(comment))
        printf("\nValid comment");
    else
        printf("\nInvalid comment");
}
