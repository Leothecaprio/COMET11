#include <stdio.h>

// Call by Value
void swapCallByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapCallByValue: a = %d, b = %d\n", a, b);
}

// Call by Reference
void swapCallByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swapCallByReference: a = %d, b = %d\n", *a, *b);
}

int main() {
    int num1 = 5, num2 = 10;

    printf("Original values: num1 = %d, num2 = %d\n", num1, num2);

    swapCallByValue(num1, num2);
    printf("After Call by Value: num1 = %d, num2 = %d\n", num1, num2);

    swapCallByReference(&num1, &num2);
    printf("After Call by Reference: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}