//Program to implement addition without using the addition operator

#include <stdio.h>

int add(int x, int y) {
    int carry;
    while (y != 0) {
        carry = x & y;
        x = x ^ y;
        y = carry << 1;
    }
    return x;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Sum of %d and %d is: %d\n", num1, num2, add(num1, num2));
    return 0;
}