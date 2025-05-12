// Generic function to print different types of arrays
#include <stdio.h>

void printArray(void *arr, int size, size_t elementSize, const char *formatSpecifier) {
    int i;
    printf("Array elements: ");
    for (i = 0; i < size; i++) {
        // Use a pointer to access the element at index i
        void *elementPtr = (char *)arr + i * elementSize;
        // Print the element using the provided format specifier
        printf(formatSpecifier, *( (typeof(int)*)elementPtr)); //added a typecast
        printf(" ");
    }
    printf("\n");
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    float floatArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);
    int floatSize = sizeof(floatArray) / sizeof(floatArray[0]);
    int charSize = sizeof(charArray) / sizeof(charArray[0]);

    printArray(intArray, intSize, sizeof(int), "%d");
    printArray(floatArray, floatSize, sizeof(float), "%f");
    printArray(charArray, charSize, sizeof(char), "%c");

    return 0;
}