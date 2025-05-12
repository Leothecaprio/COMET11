//3. Program to print if a character is alphanumeric or a special character using macro conditions

#include <stdio.h>

#define IS_ALPHANUMERIC(ch) (((ch) >= 'a' && (ch) <= 'z') || ((ch) >= 'A' && (ch) <= 'Z') || ((ch) >= '0' && (ch) <= '9'))

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (IS_ALPHANUMERIC(ch)) {
        printf("%c is an alphanumeric character.\n", ch);
    } else {
        printf("%c is a special character.\n", ch);
    }
    return 0;
}