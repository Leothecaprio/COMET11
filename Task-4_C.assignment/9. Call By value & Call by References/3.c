#include <stdio.h>

void rotate(int *x, int *y, int *z) {
    int temp = *x;
    *x = *y;
    *y = *z;
    *z = temp;
}

int main() {
    int a = 1, b = 2, c = 3;

    printf("Original values: a = %d, b = %d, c = %d\n", a, b, c);
    rotate(&a, &b, &c);
    printf("Rotated values: a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}