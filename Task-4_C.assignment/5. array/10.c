#include <stdio.h>
int main() {
    int a[5] = {1,2,3,4,5}, b[5] = {6,7,8,9,10}, temp;
    for(int i = 0; i < 5; i++) {
        temp = a[i];
        a[i] = b[4 - i];
        b[4 - i] = temp;
    }
    printf("array1: "); for(int i = 0; i < 5; i++) printf("%d ", a[i]);
    printf("\narray2: "); for(int i = 0; i < 5; i++) printf("%d ", b[i]);
    return 0;
}