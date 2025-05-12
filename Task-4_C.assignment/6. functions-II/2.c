#include <stdio.h>
int power(int a, int n) {
    if (n < 0) return -1;
    int result = 1;
    for (int i = 0; i < n; i++)
        result *= a;
    return result;
}

int main() {
    int a = 2, n = 3;
    int res = power(a, n);
    if (res != -1)
        printf("%d^%d = %d\n", a, n, res);
    else
        printf("Invalid exponent.\n");
    return 0;
}  