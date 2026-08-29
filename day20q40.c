//Q40: Write a program to find the 1’s complement of a binary number and print it.(Loops without Arrays/Strings)

#include <stdio.h>
int main() {
    long long binaryNum, tempNum, remainder, onesComplement = 0, placeValue = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binaryNum);

    tempNum = binaryNum; // Store the original binary number

    // Calculate the 1's complement
    while (tempNum != 0) {
        remainder = tempNum % 10; // Get the last digit
        if (remainder == 0) {
            onesComplement += 1 * placeValue; // Change 0 to 1
        } else {
            onesComplement += 0 * placeValue; // Change 1 to 0
        }
        tempNum /= 10; // Remove the last digit from the number
        placeValue *= 10; // Move to the next place value
    }

    printf("1's complement of %lld is: %lld\n", binaryNum, onesComplement);
    return 0;
}