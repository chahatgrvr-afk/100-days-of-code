//Q7: Write a program to swap two numbers without using a third variable.

#include <stdio.h>
int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    a = a + b; // Step 1: Add both numbers and store in 'a'
    b = a - b; // Step 2: Subtract 'b' from the new 'a' to get original 'a'
    a = a - b; // Step 3: Subtract new 'b' from the new 'a' to get original 'b'

    printf("After swap: %d %d", a, b);

    return 0;
}