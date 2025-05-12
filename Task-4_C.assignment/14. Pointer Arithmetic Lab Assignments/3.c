// 3) char *strcpy(char d[], char s[]); // returns destination base address
#include <stdio.h>

char* my_strcpy(char d[], char s[]) {
    char *dp = d;
    while (*s) *dp++ = *s++;
    *dp = '\0';
    return d;
}

int main() {
    char src[] = "Hello";
    char dest[20];
    my_strcpy(dest, src);
    printf("Copied: %s\n", dest);
    return 0;
}
