#include <stdio.h>
int quotient(int a, int b) {
    if (b == 0) {
        printf("Division by zero error.\n");
        return -1;
    }
    return a / b;
}

int main() {
    int a = 10, b = 2;
    int q = quotient(a, b);
    if (q != -1)
        printf("Quotient = %d\n", q);
    return 0;
}  