//Q48 Write a program to print the following pattern:
1
12
123
1234
12345 (Nested Loops without Arrays/Strings)

#include <stdio.h>
int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) { // Outer loop for rows
        for (int j = 1; j <= i; j++) { // Inner loop for columns
            printf("%d", j);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
