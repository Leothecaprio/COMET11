#include <stdio.h>

int main() {
    char char1, char2;
    char *ptr1, *ptr2;

    ptr1 = &char1;
    ptr2 = &char2;

    printf("Enter two characters: ");
    scanf(" %c %c", ptr1, ptr2); // Note the space before %c to consume any leftover newline.

    if (*ptr1 > *ptr2) {
        printf("%c has a higher ASCII value.\n", *ptr1);
    } else if (*ptr2 > *ptr1) {
        printf("%c has a higher ASCII value.\n", *ptr2);
    } else {
        printf("Both characters have the same ASCII value.\n");
    }

    return 0;
}