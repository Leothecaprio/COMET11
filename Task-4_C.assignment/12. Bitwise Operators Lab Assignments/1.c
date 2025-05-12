 //Program to set, clear, and toggle a particular bit

#include <stdio.h>

void printBinary(int num, int size) {
    for (int i = (size * 8) - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main() {
    int num = 10; // 1010 in binary
    int bitPosition = 2; // Let's work with the 3rd bit (from the right, 0-indexed)

    printf("Original number: %d (binary: ", num);
    printBinary(num, sizeof(num));
    printf(")\n");

    // Set the bit
    int setMask = 1 << bitPosition;
    int numSet = num | setMask;
    printf("Number with bit %d set: %d (binary: ", bitPosition, numSet);
    printBinary(numSet, sizeof(numSet));
    printf(")\n");

    // Clear the bit
    int clearMask = ~(1 << bitPosition);
    int numCleared = num & clearMask;
    printf("Number with bit %d cleared: %d (binary: ", bitPosition, numCleared);
    printBinary(numCleared, sizeof(numCleared));
    printf(")\n");

    // Toggle the bit
    int toggleMask = 1 << bitPosition;
    int numToggled = num ^ toggleMask;
    printf("Number with bit %d toggled: %d (binary: ", bitPosition, numToggled);
    printBinary(numToggled, sizeof(numToggled));
    printf(")\n");

    return 0;
}