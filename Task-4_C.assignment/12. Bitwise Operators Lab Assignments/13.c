//Function to set n bits of x with the rightmost n bits of y

#include <stdio.h>

void printBinary(int num, int size) {
    for (int i = (size * 8) - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int setbits(int x, int p, int n, int y) {
    int mask_y = (1 << n) - 1;       // Get rightmost n bits of y
    int right_y = y & mask_y;

    int mask_x = ~(((1 << n) - 1) << (p - n + 1));  // Create a mask for the bits to be replaced in x
    int left_x = x & mask_x;

    int new_bits = right_y << (p - n + 1);
    return left_x | new_bits;
}

int main() {
    int x = 170; // 10101010
    int y = 167; // 10100111
    int n = 3;
    int p = 6;
    int result;

    printf("x = ");
    printBinary(x, sizeof(x));
    printf("y = ");
    printBinary(y, sizeof(y));

    result = setbits(x, p, n, y);
    printf("setbits n = %d, p = %d gives x = ", n, p);
    printBinary(result, sizeof(result));

    return 0;
}
