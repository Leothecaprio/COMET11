// 9) char *strchr(char s[], char c); // returns address of first occurrence
#include <stdio.h>

char* my_strchr(char s[], char c) {
    while (*s) {
        if (*s == c)
            return s;
        s++;
    }
    return NULL;
}

int main() {
    char str[] = "Engineering";
    char *pos = my_strchr(str, 'g');
    if (pos)
        printf("Character found at position: %ld\n", pos - str);
    else
        printf("Character not found.\n");
    return 0;
}
