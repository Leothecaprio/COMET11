// 6) int stricmp(char s1[], char s2[]);
#include <stdio.h>
#include <ctype.h>

int my_stricmp(char s1[], char s2[]) {
    while (*s1 && *s2) {
        char c1 = tolower(*s1);
        char c2 = tolower(*s2);
        if (c1 != c2)
            return c1 - c2;
        s1++;
        s2++;
    }
    return tolower(*s1) - tolower(*s2);
}

int main() {
    char a[] = "Hello";
    char b[] = "HELLO";
    printf("Case-insensitive compare: %d\n", my_stricmp(a, b));
    return 0;
}
