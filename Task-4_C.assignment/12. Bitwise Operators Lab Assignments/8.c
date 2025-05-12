//Program to implement XOR functionality without using the XOR operator

#include <stdio.h>

int myXOR(int x, int y) {
    return (x | y) & (~x | ~y);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("XOR of %d and %d is: %d\n", num1, num2, myXOR(num1, num2));
    return 0;
}