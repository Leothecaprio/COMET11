#include <stdio.h>
int multiply(int a, int b) {
    int result = 0;
    for (int i = 0; i < b; i++)
        result += a;
    return result;
}

int main() {
    int a = 4, b = 5;
    printf("Product = %d\n", multiply(a, b));
    return 0;
}  
