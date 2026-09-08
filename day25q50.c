//Q50 Write a program to print the following pattern:
*****
 ****
  ***
   **
    * (Nested Loops without Arrays/Strings)

#include <stdio.h>
int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) { // Outer loop for rows
        for (int j = 0; j < i; j++) { // Inner loop for spaces
            printf(" ");
        }
        for (int k = 0; k < rows - i; k++) { // Inner loop for stars
            printf("*");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
