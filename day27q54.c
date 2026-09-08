//Q54 Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   * (Nested Loops without Arrays/Strings)

#include <stdio.h>
int main() {
    int rows = 4;

    // Upper part of the pattern
    for (int i = 1; i <= rows; i++) { // Outer loop for rows
        for (int j = 1; j <= rows - i; j++) { // Inner loop for spaces
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) { // Inner loop for stars
            printf("*");
        }
        printf("\n"); // Move to the next line after each row
    }

    // Lower part of the pattern
    for (int i = rows - 1; i >= 1; i--) { // Outer loop for rows
        for (int j = 1; j <= rows - i; j++) { // Inner loop for spaces
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) { // Inner loop for stars
            printf("*");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}

