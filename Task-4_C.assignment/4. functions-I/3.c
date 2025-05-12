#include <stdio.h>

int multiply(int a, int b) {
    int result = 0;
    for (int i = 0; i < b; i++) {
        result += a;
    }
    return result;
}

int main() {
    int a = 5, b = 4;
    printf("Product = %d\n", multiply(a, b));
    return 0;
}
