//Q42 Write a program to check if a number is a perfect number.(Loops without Arrays/Strings)

#include <stdio.h>
int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the sum of divisors
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the number is a perfect number
    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
