#include <stdio.h>

int main() {
    int var = 10;
    int *ptr;

    ptr = &var; // Assign the address of var to ptr

    printf("Address of var: %p\n", (void*)&var);
    printf("Value of var: %d\n", var);
    printf("Size of var: %zu bytes\n", sizeof(var));

    printf("Address stored in ptr: %p\n", (void*)ptr);
    printf("Size of ptr: %zu bytes\n", sizeof(ptr));
    printf("Value pointed to by ptr: %d\n", *ptr);

    return 0;
}