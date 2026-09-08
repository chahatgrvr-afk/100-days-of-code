//Q59 Count even and odd numbers in an array.(Arrays (1D))

#include <stdio.h>
int main() {
    int n, evenCount = 0, oddCount = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Read elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            evenCount++; // Increment even count
        } else {
            oddCount++; // Increment odd count
        }
    }

    // Print the counts of even and odd numbers
    printf("The number of even elements in the array is: %d\n", evenCount);
    printf("The number of odd elements in the array is: %d\n", oddCount);

    return 0;
}