//Program to convert a little-endian integer to a big-endian integer

#include <stdio.h>

unsigned int littleEndianToBigEndian(unsigned int num) {
    unsigned int b0, b1, b2, b3;
    b0 = (num & 0x000000ff) << 24u;
    b1 = (num & 0x0000ff00) << 8u;
    b2 = (num & 0x00ff0000) >> 8u;
    b3 = (num & 0xff000000) >> 24u;
    return b0 | b1 | b2 | b3;
}

int main() {
    unsigned int num;
    printf("Enter an unsigned integer in little-endian format: ");
    scanf("%u", &num);
    unsigned int bigEndianNum = littleEndianToBigEndian(num);
    printf("Big-endian representation: %u\n", bigEndianNum);
    return 0;
}
