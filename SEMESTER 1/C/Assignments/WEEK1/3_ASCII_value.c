//Code 3: C program to print ASCII value of a character
#include <stdio.h>

int main()
{
    char character; // Initialization
    int ASCII;

    printf("Enter the character: "); // Taking input from user
    scanf("%c", &character);

    ASCII = (int)character; // Calculation

    printf("The ASCII Value of '%c' is %i.", character, ASCII); // output

    return 0;
}

// // // Output 1
// Enter the Uppercase Character: B
// The lowercased Character of 'B' is 'b'.

// Output 2
// Enter the Uppercase Character: J
// The lowercased Character of 'J' is 'j'.