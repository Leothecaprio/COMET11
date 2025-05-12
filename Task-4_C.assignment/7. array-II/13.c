#include <stdio.h>
#include <stdbool.h>

bool areArraysEqual(int arr1[], int size1, int arr2[], int size2) {
    int i;

    if (size1 != size2) {
        return false; // Arrays of different sizes are not equal
    }

    for (i = 0; i < size1; i++) {
        if (arr1[i] != arr2[i]) {
            return false; // Found a mismatch
        }
    }
    return true; // All elements are equal
}

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {1, 2, 3, 4, 5};
    int array3[] = {5, 4, 3, 2, 1};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    int size3 = sizeof(array3) / sizeof(array3[0]);

    if (areArraysEqual(array1, size1, array2, size2)) {
        printf("array1 and array2 are equal\n");
    } else {
        printf("array1 and array2 are not equal\n");
    }

    if (areArraysEqual(array1, size1, array3, size3)) {
        printf("array1 and array3 are equal\n");
    } else {
        printf("array1 and array3 are not equal\n");
    }

    return 0;
}

