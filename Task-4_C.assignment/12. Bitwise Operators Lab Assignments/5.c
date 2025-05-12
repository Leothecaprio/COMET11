//Program to check if a number is a power of 2

#include <stdio.h>
#include <stdbool.h>

bool isPowerOf2(int n) {
    if (n <= 0)
        return false;
    return (n & (n - 1)) == 0;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPowerOf2(num)) {
        printf("%d is a power of 2.\n", num);
    } else {
        printf("%d is not a power of 2.\n", num);
    }
    return 0;
}