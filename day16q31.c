//Q31: Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
int main() {
    int num, binary[32], i = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    while(num > 0) {
        binary[i] = num % 2; // Store the remainder (0 or 1)
        num /= 2; // Divide the number by 2
        i++;
    }

    printf("Binary representation: ");
    for(int j = i - 1; j >= 0; j--) { // Print the binary digits in reverse order
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}