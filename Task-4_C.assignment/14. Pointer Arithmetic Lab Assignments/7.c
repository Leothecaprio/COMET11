// 7) char *strcat(char d[], char s[]); // returns destination base address
#include <stdio.h>

char* my_strcat(char d[], char s[]) {
    char *dp = d;
    while (*dp) dp++;
    while (*s) *dp++ = *s++;
    *dp = '\0';
    return d;
}

int main() {
    char a[50] = "Good ";
    char b[] = "Morning";
    printf("Concatenated: %s\n", my_strcat(a, b));
    return 0;
}
