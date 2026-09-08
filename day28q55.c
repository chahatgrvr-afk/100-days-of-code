//Q55 Write a program to print all the prime numbers from 1 to n.(Nested Loops without Arrays/Strings)

#include <stdio.h>
int main() {
    int n, isPrime;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);
    for (int i = 2; i <= n; i++) { // Loop through numbers from 2 to n
        isPrime = 1; // Assume the number is prime
        for (int j = 2; j * j <= i; j++) { // Check for factors up to the square root of i
            if (i % j == 0) {
                isPrime = 0; // Not a prime number
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i); // Print the prime number
        }
    }
    printf("\n");
    return 0;
}