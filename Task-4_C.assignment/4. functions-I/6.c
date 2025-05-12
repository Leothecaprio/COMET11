#include <stdio.h>

void multiplicationTable(int n) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main() {
    int num = 5;
    multiplicationTable(num);
    return 0;
}
