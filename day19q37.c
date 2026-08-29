//Q37: Write a program to find the LCM of two numbers.(Loops without Arrays/Strings)

#include <stdio.h>
int main() {
    int num1, num2, lcm, max;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Find the maximum of the two numbers
    max = (num1 > num2) ? num1 : num2;

    // Loop to find the LCM
    while(1) {
        if(max % num1 == 0 && max % num2 == 0) {
            lcm = max; // Found the LCM
            break;
        }
        ++max; // Increment max to check the next number
    }

    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
    return 0;
}

