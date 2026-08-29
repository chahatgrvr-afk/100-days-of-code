//Q38: Write a program to find the sum of digits of a number.(Loops without Arrays/Strings)

#include <stdio.h>
int main() {
    int num, sum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculate the sum of digits
    while (num != 0) {
        remainder = num % 10; // Get the last digit
        sum += remainder; // Add it to the sum
        num /= 10; // Remove the last digit from the number
    }

    printf("Sum of digits is: %d\n", sum);
    return 0;
}