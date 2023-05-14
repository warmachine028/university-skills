/* CODE 0: Write a C program to print the following pattern up to ‘n’ lines where ‘n’ is user given:
      A
    A B A
  A B C B A
A B C D C B A
*/

#include <stdio.h>

void main()
{
    int n;
    printf("Enter how many lines: ");
    scanf("%i", &n);

    for (int i = 0; i < n; i++)
    {
        // For printing spaces
        for (int space = 0; space < 2 * (n - i - 1); space++)
            printf(" ");

        // For printing 1st set of letters
        int ascii = 65;
        for (int charac = 0; charac < i + 1; ascii++, charac++)
            if (ascii > 90)
                ascii = 64, charac--;
            else
                printf("%c ", ascii);

        // For printing 2nd set of letters
        ascii-=2;
        for (int charac = 0; charac < i ; ascii--, charac++)
            if (ascii < 65)
                ascii = 91, charac--;
        else printf("%c ", ascii);
        // Throwing newline character
        printf("\n");
    }
}

// for n=5 lines: (i=1) 8 space(s) 1 character(s) space: 2*4 2(n-i); character:                                                                 ascii(65)
//             -> (i=2) 6 space(s) 3 character(s) space: 2*3 2(n-i); character:                                                 ascii(65), " ", ascii(66), " ", ascii(65)
//             -> (i=3) 4 space(s) 5 character(s) space: 2*2 2(n-i); character:                                 ascii(65), " ", ascii(66), " ", ascii(67), " ", ascii(66), " ", ascii(65)
//             -> (i=4) 2 space(s) 7 character(s) space: 2*1 2(n-i); character:                 ascii(65), " ", ascii(66), " ", ascii(67), " ", ascii(68), " ", ascii(67), " ", ascii(66), " ", ascii(65)
//             -> (i=5) 0 space(s) 9 character(s) space: 2*0 2(n-i); character: ascii(65), " ", ascii(66), " ", ascii(67), " ", ascii(68), " ", ascii(69), " ", ascii(68), " ", ascii(67), " ", ascii(66), " ", ascii(65)

// for n=4 lines: (i=1) 6 space(s) 1 character(s) space: 2*3 2(n-i); character:                                                 ascii(65)
//             -> (i=2) 4 space(s) 3 character(s) space: 2*2 2(n-i); character:                                 ascii(65), " ", ascii(66), " ", ascii(65)
//             -> (i=3) 2 space(s) 5 character(s) space: 2*1 2(n-i); character:                 ascii(65), " ", ascii(66), " ", ascii(67), " ", ascii(66), " ", ascii(65)
//             -> (i=4) 0 space(s) 7 character(s) space: 2*0 2(n-i); character: ascii(65), " ", ascii(66), " ", ascii(67), " ", ascii(68), " ", ascii(67), " ", ascii(66), " ", ascii(65)

// for n=3 lines: (i=1) 4 space(s) 1 character(s) space: 2*2 2(n-i);
//             -> (i=2) 2 space(s) 1 character(s) space: 2*1 2(n-i);
//             -> (i=3) 0 space(s) 1 character(s) space: 2*0 2(n-i);

// // for 2 lines: 2 space(s) 1 character
// // for 1 line :(i=1) 0 space(s) 1 character

//         A
//       A B A
//     A B C B A
//   A B C D C B A
// A B C D E D C B A

// //     A
// //   A B A
// // A B C B A

// //   A
// // A B A

// // A

// 1 -> 0 2x0
// 2 -> 2 2x1
// 3 -> 4 2x2
// 4 -> 6 2x3
// 5 -> 8 2x4
