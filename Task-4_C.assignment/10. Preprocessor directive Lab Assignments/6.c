//Macro to generate swapping functions for different data types
#include <stdio.h>

#define SWAP(type, a, b) \
    do { \
        type temp = (a); \
        (a) = (b); \
        (b) = temp; \
    } while (0)

int main() {
    int int1 = 10, int2 = 20;
    float float1 = 1.1, float2 = 2.2;
    double double1 = 10.10, double2 = 20.20;
    char char1 = 'a', char2 = 'b';

    printf("Before swapping:\n");
    printf("int1 = %d, int2 = %d\n", int1, int2);
    printf("float1 = %f, float2 = %f\n", float1, float2);
    printf("double1 = %lf, double2 = %lf\n", double1, double2);
    printf("char1 = %c, char2 = %c\n", char1, char2);

    SWAP(int, int1, int2);
    SWAP(float, float1, float2);
    SWAP(double, double1, double2);
    SWAP(char, char1, char2);

    printf("\nAfter swapping:\n");
    printf("int1 = %d, int2 = %d\n", int1, int2);
    printf("float1 = %f, float2 = %f\n", float1, float2);
    printf("double1 = %lf, double2 = %lf\n", double1, double2);
    printf("char1 = %c, char2 = %c\n", char1, char2);

    return 0;
}
