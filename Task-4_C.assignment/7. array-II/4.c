#include <stdio.h>

int main() {
    int arr1[5] = {}; // Initializes all elements to 0
    int arr2[10] = {2, 4, 5, 6, 7}; // Initializes first 5, rest are 0.  C converts floats to ints.
    //int arr3[3] = {1, 2, 3, 4, 5}; // Error: Too many initializers.
    //int arr4[0] = {}; //error in some compilers
    //int arr5[0] = {1, 2, 3, 4, 5}; // Error: Invalid array size, and too many initializers.
    //int arr6[] = {}; // Error: Empty initializer is not allowed.
    int arr7['a'];  // Size is the ASCII value of 'a' (97), valid.

    int i;

    // Experiment with arr1
    printf("arr1: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nSize of arr1: %zu\n", sizeof(arr1));

     // Experiment with arr2
    printf("arr2: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\nSize of arr2: %zu\n", sizeof(arr2));
/*
    // arr3 will cause a compilation error.
    printf("arr3: ");
    for (i = 0; i < 3; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\nSize of arr3: %zu\n", sizeof(arr3));
*/
/* arr4 may give error.
    printf("arr4: ");
    for (i = 0; i < 0; i++) {
        printf("%d ", arr4[i]);
    }
    printf("\nSize of arr4: %zu\n", sizeof(arr4));
*/
/* arr5 will give error
    printf("arr5: ");
    for (i = 0; i < 0; i++) {
        printf("%d ", arr5[i]);
    }
    printf("\nSize of arr5: %zu\n", sizeof(arr5));
*/
    // arr6 will cause a compilation error.
/*
    printf("arr6: ");
    for (i = 0; i < 0; i++) {
        printf("%d ", arr6[i]);
    }
    printf("\nSize of arr6: %zu\n", sizeof(arr6));
*/
    // Experiment with arr7
    printf("arr7: ");
    for (i = 0; i < 'a'; i++) {
        arr7[i] = i * 2; // Initialize the array.
        printf("%d ", arr7[i]);
    }
    printf("\nSize of arr7: %zu\n", sizeof(arr7));

    return 0;
}
