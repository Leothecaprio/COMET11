#include <stdio.h>

void convertToPositive(int arr[], int size) {
    int i;

    for (i = 0; i < size; i++) {
        if (arr[i] < 0) {
            arr[i] = -arr[i]; // Make it positive
        }
    }
}

int main() {
    int arr[] = {10, -20, 30, -40, 50, -60};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;

     printf("Original array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    convertToPositive(arr, size);

    printf("Modified array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}