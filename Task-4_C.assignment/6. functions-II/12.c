#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Swapped values: a = %d, b = %d\n", *a, *b);
}

int main() {
    int x = 10, y = 20;
    swap(&x, &y);
    return 0;
}  