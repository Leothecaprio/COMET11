
//Macro to print the elements of an array
#define PRINT_ARRAY(arr, size) \
    do { \
        int i; \
        printf("Array elements: "); \
        for (i = 0; i < (size); i++) { \
            printf("%d ", (arr)[i]); \
        } \
        printf("\n"); \
    } while (0)

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    float floatArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);
    int floatSize = sizeof(floatArray) / sizeof(floatArray[0]);
    int charSize = sizeof(charArray) / sizeof(charArray[0]);

    PRINT_ARRAY(intArray, intSize);
    PRINT_ARRAY(floatArray, floatSize);  // Note:  Will print as integers.
    PRINT_ARRAY(charArray, charSize);    // Note:  Will print as integers.

    return 0;
}