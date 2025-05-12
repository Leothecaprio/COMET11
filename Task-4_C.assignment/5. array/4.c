#include <stdio.h>
int main() {
    int arr1[5] = {};                         // Some compilers support
    int arr2[10] = {2.4, 5.6, 7.3};           // Truncated to int
    // int arr3[3] = {1,2,3,4,5};             // Too many initializers - error
    // int arr4[0] = {};                      // Invalid
    // int arr5[0] = {1,2,3,4,5};             // Invalid
    // int arr6[] = {};                       // Empty initializer - error
    // int arr7['a'];                         // Invalid size - error
    printf("arr1[0]=%d, arr2[0]=%d\n", arr1[0], arr2[0]);
    return 0;
}