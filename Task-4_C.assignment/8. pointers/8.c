#include <stdio.h>

int main() {
    int x, y, z, temp;
    int *ptrX, *ptrY, *ptrZ;

    printf("Enter three numbers (x, y, z): ");
    scanf("%d %d %d", &x, &y, &z);

    ptrX = &x;
    ptrY = &y;
    ptrZ = &z;

    temp = *ptrX;
    *ptrX = *ptrY;
    *ptrY = *ptrZ;
    *ptrZ = temp;

    printf("Rotated values:\n");
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    return 0;
}