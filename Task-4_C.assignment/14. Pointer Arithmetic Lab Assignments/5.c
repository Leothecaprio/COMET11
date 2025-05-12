// 5) int strncmp(char s1[], char s2[], int n);
#include <stdio.h>

int my_strncmp(char s1[], char s2[], int n) {
    while (n-- && *s1 && *s2) {
        if (*s1 != *s2)
            return *s1 - *s2;
        s1++;
        s2++;
    }
    return 0;
}

int main() {
    char a[] = "Banana";
    char b[] = "Band";
    printf("Compare first 3 chars: %d\n", my_strncmp(a, b, 3));
    return 0;
}
