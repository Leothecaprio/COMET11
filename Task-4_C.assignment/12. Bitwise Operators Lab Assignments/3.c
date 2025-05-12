//Function to print the binary representation of a number

#include <stdio.h>

void printBinary(int num, int size) {
    for (int i = (size * 8) - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main() {
    char x = 5;
    int y = 1024;

    printf("Binary representation of x (char): ");
    printBinary(x, sizeof(x));  // Output: 00000101
    printf("Binary representation of y (int): ");
    printBinary(y, sizeof(y));
    return 0;
}
