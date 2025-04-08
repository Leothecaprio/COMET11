#include <stdio.h>
int main() {
    int n, i;
    char ch;
    printf("Enter n characters: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter a character: ");
        scanf(" %c", &ch);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("The given character '%c' is a vowel.\n", ch);
        } else {
            printf("The given character '%c' is not a vowel.\n", ch);
        }
    }
    return 0;
}
