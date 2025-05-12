//Program to implement subtraction without using the subtraction operator

#include <stdio.h>

int subtract(int x, int y) {
    // Using two's complement
    y = ~y + 1;
    return x + y;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Subtraction of %d and %d is: %d\n", num1, num2, subtract(num1, num2));
    return 0;
}