#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int *ptr = arr; // ptr points to the first element of arr
    int i;

    printf("Addresses and values of array elements:\n");
    for (i = 0; i < 10; i++) {
        printf("Address of arr[%d]: %p, Value: %d\n", i, (void*)(ptr + i), *(ptr + i));
    }
    return 0;
}