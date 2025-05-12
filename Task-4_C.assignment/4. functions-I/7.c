#include <stdio.h>

int IsPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int num = 7;
    if (IsPrime(num))
        printf("%d is a Prime Number\n", num);
    else
        printf("%d is NOT a Prime Number\n", num);
    return 0;
}
