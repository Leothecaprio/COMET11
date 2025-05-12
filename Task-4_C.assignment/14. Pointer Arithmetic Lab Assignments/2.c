// 2) char *strrev(char s[]); // returns string base address
#include <stdio.h>

char* my_strrev(char s[]) {
    char *start = s;
    char *end = s;
    while (*end) end++;
    end--;
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
    return s;
}

int main() {
    char str[] = "pointer";
    printf("Reversed: %s\n", my_strrev(str));
    return 0;
}
