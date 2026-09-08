//Q51 Write a program to print the following pattern:
    5
   45
  345
 2345
12345 (Nested Loops without Arrays/Strings)

#include <stdio.h>
int main() {
    int rows = 5;

    for (int i = rows; i >= 1; i--) { // Outer loop for rows
        for (int j = 1; j < i; j++) { // Inner loop for spaces
            printf(" ");
        }
        for (int k = i; k <= rows; k++) { // Inner loop for numbers
            printf("%d", k);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
