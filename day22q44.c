//Q44 Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.(Loops without Arrays/Strings)

#include <stdio.h>
int main() {
    int n;
    float sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int numerator = 2 * i - 1; // Odd numbers: 1, 3, 5, ...
        int denominator = 2 * i;   // Even numbers: 2, 4, 6, ...
        sum += (float)numerator / denominator;
    }

    printf("Sum of the series up to %d terms is: %.2f\n", n, sum);
    return 0;
}
