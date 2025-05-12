#include <stdio.h>
void multiplication_table(int n) {
    for (int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n * i);
}

int main() {
    multiplication_table(5);
    return 0;
}  
