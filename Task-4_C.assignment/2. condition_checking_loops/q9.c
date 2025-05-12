#include <stdio.h>
int main() {
    int n, i;
    char ch;

    printf("Enter n characters: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter a character: ");
        scanf(" %c", &ch);

        if (ch >= 'a' && ch <= 'z') {
            printf("The given character '%c' is a small alphabet.\n", ch);
        } else if (ch >= 'A' && ch <= 'Z') {
            printf("The given character '%c' is a capital alphabet.\n", ch);
        } else if (ch >= '0' && ch <= '9') {
            printf("The given character '%c' is a numeric character.\n", ch);
        } else {
            printf("The given character '%c' is a special character.\n", ch);
        }
    }
    return 0;
}
