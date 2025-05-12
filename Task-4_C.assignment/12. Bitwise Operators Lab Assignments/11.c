//Program to multiply a number by 9 using bit shift

#include <stdio.h>

int multiplyBy9(int num) {
    return (num << 3) + num; // (num * 8) + num = num * 9
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d multiplied by 9 is: %d\n", num, multiplyBy9(num));
    return 0;
}
