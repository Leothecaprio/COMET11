#include <stdio.h>

int main() {
    int arr[100];
    int i;

    // Assign numbers 1-100 to the array
    for (i = 0; i < 100; i++) {
        arr[i] = i + 1;
    }

    // Print all the numbers
    printf("All numbers: ");
    for (i = 0; i < 100; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Print all even elements
    printf("Even numbers: ");
    for (i = 0; i < 100; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    // Print all odd elements
    printf("Odd numbers: ");
    for (i = 0; i < 100; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    // Add 5 to each element and print
    printf("Numbers after adding 5: ");
    for (i = 0; i < 100; i++) {
        arr[i] = arr[i] + 5;
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}