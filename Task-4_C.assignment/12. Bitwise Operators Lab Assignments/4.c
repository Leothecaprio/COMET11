//Program to count the number of set bits in an integer

#include <stdio.h>

int countSetBits(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int countSetBitsBrianKernighan(int n)
{
  int count = 0;
  while (n) {
    n &= (n - 1); // Clear the least significant bit.
    count++;
  }
  return count;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Number of set bits (Method 1): %d\n", countSetBits(num));
    printf("Number of set bits (Method 2 - Brian Kernighan): %d\n", countSetBitsBrianKernighan(num));
    return 0;
}