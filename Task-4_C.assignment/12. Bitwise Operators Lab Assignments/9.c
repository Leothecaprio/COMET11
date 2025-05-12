//Program to implement the sizeof operation using bitwise operators

#include <stdio.h>

#define MY_SIZEOF(T) (size_t)((char*)(&(T)+1) - (char*)(&T))

int main() {
    int a;
    float b;
    double c;
    char d;
    printf("Size of int: %zu bytes\n", MY_SIZEOF(a));
    printf("Size of float: %zu bytes\n", MY_SIZEOF(b));
    printf("Size of double: %zu bytes\n", MY_SIZEOF(c));
    printf("Size of char: %zu bytes\n", MY_SIZEOF(d));
    return 0;
}