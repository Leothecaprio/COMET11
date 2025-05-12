#include <stdio.h>

void calculate(int a, int b, int *add, int *sub, int *mul, int *quo, int *rem) {
    *add = a + b;
    *sub = a - b;
    *mul = a * b;
    *quo = a / b;
    *rem = a % b;
}

int main() {
    int num1, num2, addition, subtraction, product, quotient, remainder;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    calculate(num1, num2, &addition, &subtraction, &product, &quotient, &remainder);

    printf("Addition: %d\n", addition);
    printf("Subtraction: %d\n", subtraction);
    printf("Multiplication: %d\n", product);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}