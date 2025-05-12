#include <stdio.h>

void printBinary(int num) {
    int binary[32]; // Assuming 32-bit integer
    int i = 0;
    int j;

    if (num == 0)
    {
        printf("0");
        return;
    }

    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    for (j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Binary representation: ");
    printBinary(num);

    return 0;
}

