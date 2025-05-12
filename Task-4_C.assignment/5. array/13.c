#include <stdio.h>
int arraysEqual(int a[], int b[], int size) {
    for(int i = 0; i < size; i++) if(a[i] != b[i]) return 0;
    return 1;
}
int main() {
    int a[3] = {1, 2, 3}, b[3] = {1, 2, 3};
    printf("%d\n", arraysEqual(a, b, 3));
    return 0;
}
