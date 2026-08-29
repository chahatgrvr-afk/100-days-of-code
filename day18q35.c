//Q35: Write a program to print all factors of a given number.(Loops without Arrays/Strings)

#include <stdio.h>
int main() {
    int num, i;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; ++i) { // Check for factors from 1 to num
        if (num % i == 0) {
            printf("%d ", i); // Print the factor
        }
    }
    printf("\n");

    return 0;
}