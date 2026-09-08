//Q43 Write a program to check if a number is a strong number.(Loops without Arrays/Strings)

#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}