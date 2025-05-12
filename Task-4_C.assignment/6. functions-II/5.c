#include <stdio.h>
int remainder_fn(int a, int b) {
    if (b == 0) {
        printf("Division by zero error.\n");
        return -1;
    }
    return a % b;
}

int main() {
    int a = 10, b = 3;
    int r = remainder_fn(a, b);
    if (r != -1)
        printf("Remainder = %d\n", r);
    return 0;
}  