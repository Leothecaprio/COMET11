// 1) int strlen(char s[]);
#include <stdio.h>

int my_strlen(char s[]) {
    char *p = s;
    while (*p) p++;
    return p - s;
}

int main() {
    char str[] = "Hello World";
    printf("Length: %d\n", my_strlen(str));
    return 0;
}
