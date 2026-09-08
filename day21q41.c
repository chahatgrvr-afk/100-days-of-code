//Q41 Write a program to swap the first and last digit of a number.(Loops without Arrays/Strings)

#include <stdio.h>
int main() {
    long long num, firstDigit, lastDigit, tempNum, placeValue = 1, swappedNum = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    tempNum = num; // Store the original number

    // Find the last digit
    lastDigit = tempNum % 10;

    // Find the first digit and the place value of the first digit
    while (tempNum >= 10) {
        tempNum /= 10;
        placeValue *= 10;
    }
    firstDigit = tempNum;

    // Swap the first and last digits
    swappedNum = (lastDigit * placeValue) + (num % placeValue / 10) * 10 + firstDigit;

    printf("Number after swapping first and last digit: %lld\n", swappedNum);
    return 0;
}
