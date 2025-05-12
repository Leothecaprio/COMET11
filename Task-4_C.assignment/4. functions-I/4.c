#include <stdio.h>

int getQuotient(int a, int b) {
    return a / b;
}

int main() {
    int a = 10, b = 3;
    printf("Quotient = %d\n", getQuotient(a, b));
    return 0;
}
