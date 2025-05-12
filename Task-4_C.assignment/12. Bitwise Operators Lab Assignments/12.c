//Program to check if the 20th bit of a 32-bit integer is on or off

#include <stdio.h>

int main() {
    unsigned int num;
    printf("Enter a 32-bit unsigned integer: ");
    scanf("%u", &num);

    if ((num >> 19) & 1) { // Check if the 20th bit is 1 (on)
        printf("The 20th bit is ON\n");
    } else {
        printf("The 20th bit is OFF\n");
    }
    return 0;
}