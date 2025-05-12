#include <stdio.h>

int main() {
    int *intPtr;
    char *charPtr;
    float *floatPtr;
    double *doublePtr;
    void *voidPtr;

    printf("Size of intPtr: %zu bytes\n", sizeof(intPtr));
    printf("Size of charPtr: %zu bytes\n", sizeof(charPtr));
    printf("Size of floatPtr: %zu bytes\n", sizeof(floatPtr));
    printf("Size of doublePtr: %zu bytes\n", sizeof(doublePtr));
    printf("Size of voidPtr: %zu bytes\n", sizeof(voidPtr));

    printf("\nAll pointers have the same size because a pointer variable stores the memory address,");
    printf(" and the size of a memory address is determined by the system's architecture");
    printf(" (e.g., 32-bit or 64-bit), not the data type it points to.\n");

    return 0;
}
