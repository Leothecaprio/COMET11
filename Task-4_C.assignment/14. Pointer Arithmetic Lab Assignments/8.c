// 8) char *strlwr(char s[]); // returns s base address
#include <stdio.h>
#include <ctype.h>

char* my_strlwr(char s[]) {
    char *p = s;
    while (*p) {
        *p = tolower(*p);
        p++;
    }
    return s;
}

int main() {
    char str[] = "HeLLo";
    printf("Lowercase: %s\n", my_strlwr(str));
    return 0;
}
