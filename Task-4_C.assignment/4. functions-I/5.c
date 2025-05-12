#include <stdio.h>

int getRemainder(int a, int b) {
    return a % b;
}

int main() {
    int a = 10, b = 3;
    printf("Remainder = %d\n", getRemainder(a, b));
    return 0;
}
