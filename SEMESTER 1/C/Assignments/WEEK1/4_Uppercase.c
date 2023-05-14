//Code 4: C program to print lowercase of an uppercased Character
#include <stdio.h> // preprocessor command - header file

int main()
{
    char upcase_char, lowcase_char;            //Initialization
    printf("Enter the Uppercase Character: "); // Taking input from the user
    scanf("%c", &upcase_char);

    lowcase_char = upcase_char + 32; // Calculation

    printf("The lowercased Character of '%c' is '%c'.", upcase_char, lowcase_char); //output

    return 0;
}

// // Output 1
// Enter the Uppercase Character: B
// The lowercased Character of 'B' is 'b'.

// // Output 2
// Enter the Uppercase Character : J
// The lowercased Character of 'J' is 'j'.