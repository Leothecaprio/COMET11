#include <stdio.h>

int main() {
    int num1, num2, num3, biggest;
    int *ptr1, *ptr2, *ptr3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &num3;

    biggest = *ptr1;
    if (*ptr2 > biggest) {
        biggest = *ptr2;
    }
    if (*ptr3 > biggest) {
        biggest = *ptr3;
    }

    printf("Biggest number: %d\n", biggest);
    return 0;
}