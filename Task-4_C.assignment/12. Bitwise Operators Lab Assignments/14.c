//Program to swap two numbers using bitwise operators

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swap: a = %d, b = %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swap: a = %d, b = %d\n", a, b);
    printf("Swapping works because of the following properties of XOR: \n");
    printf("1. a ^ a = 0\n");
    printf("2. a ^ 0 = a\n");
    printf("3. a ^ b = b ^ a (Commutative)\n");
    printf("4. (a ^ b) ^ c = a ^ (b ^ c) (Associative)\n");
    return 0;
}
