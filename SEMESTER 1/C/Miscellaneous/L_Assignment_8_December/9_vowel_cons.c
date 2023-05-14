/* CODE 9:
Write a C program to input any alphabet and check whether it is vowel or
consonant. 
*/
#include <stdio.h>

void main()
{
    char alph;
    printf("Enter an alphabet: ");
    scanf("%c", &alph);

    if (alph == 'a' || alph == 'A' ||
        alph == 'e' || alph == 'E' ||
        alph == 'i' || alph == 'I' ||
        alph == 'o' || alph == 'O' ||
        alph == 'u' || alph == 'U')
        printf("%c is a vowel.", alph);

    else if (alph > 65 && alph < 90 || alph > 97 && alph < 122)
        printf("%c is a consonant.", alph);
        
    else
        printf("Invalid character.");
}

// OUTPUTS :
// Enter an alphabet: a
// a is a vowel.

// Enter an alphabet: y
// y is a consonant.

// Enter an alphabet: ;
// Invalid character.