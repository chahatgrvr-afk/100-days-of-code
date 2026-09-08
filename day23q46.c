//Q46 Write a program to print the following pattern:
*****
*****
*****
*****
***** (Nested Loops without Arrays/Strings)

#include <stdio.h>
int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) { // Outer loop for rows
        for (int j = 0; j < rows; j++) { // Inner loop for columns
            printf("*");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}   
