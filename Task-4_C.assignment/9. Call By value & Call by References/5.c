#include <stdio.h>

int *processNumber() {
    static int num;
    if (num != 0) {
        printf("Square of %d is %d\n", num, num * num);
    }
    return &num;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int *ptr;
    int i;

    for (i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
        ptr = processNumber();
        *ptr = numbers[i];
    }
    return 0;
}