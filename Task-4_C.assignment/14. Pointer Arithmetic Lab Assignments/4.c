// 4) int strcmp(char s1[], char s2[]);
#include <stdio.h>

int my_strcmp(char s1[], char s2[]) {
    while (*s1 && *s2) {
        if (*s1 != *s2)
            return *s1 - *s2;
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

int main() {
    char a[] = "Apple";
    char b[] = "Appla";
    printf("Compare result: %d\n", my_strcmp(a, b));
    return 0;
}
