#include <stdio.h>

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {6, 7, 8, 9, 10};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    int temp, i;

    // Print original arrays
    printf("Original array1: ");
    for (i = 0; i < size1; i++) {
        printf("%d ", array1[i]);
    }
    printf("\n");
    printf("Original array2: ");
    for (i = 0; i < size2; i++) {
        printf("%d ", array2[i]);
    }
    printf("\n");

    // Swap arrays in reverse order
    if (size1 == size2) {
        for (i = 0; i < size1; i++) {
            temp = array1[i];
            array1[i] = array2[size1 - 1 - i];
            array2[size1 - 1- i] = temp;
        }
    }

    // Print swapped arrays
    printf("Swapped array1: ");
    for (i = 0; i < size1; i++) {
        printf("%d ", array1[i]);
    }
    printf("\n");
    printf("Swapped array2: ");
    for (i = 0; i < size2; i++) {
        printf("%d ", array2[i]);
    }
    printf("\n");

    return 0;
}

