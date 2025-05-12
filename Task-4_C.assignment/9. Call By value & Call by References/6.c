#include <stdio.h>

// Declare the swap function
void swap(int *a, int *b);

int main() {
    int arr[2] = {5, 10};

    printf("Original values: arr[0] = %d, arr[1] = %d\n", arr[0], arr[1]);
    swap(&arr[0], &arr[1]);
    printf("Swapped values: arr[0] = %d, arr[1] = %d\n", arr[0], arr[1]);

    return 0;
}
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}