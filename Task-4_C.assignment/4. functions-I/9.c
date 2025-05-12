#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int quotient(int a, int b) { return a / b; }
int remainder(int a, int b) { return a % b; }

int main() {
    int a = 10, b = 3;
    printf("Addition: %d\n", add(a, b));
    printf("Subtraction: %d\n", sub(a, b));
    printf("Multiplication: %d\n", mul(a, b));
    printf("Quotient: %d\n", quotient(a, b));
    printf("Remainder: %d\n", remainder(a, b));
    return 0;
}
