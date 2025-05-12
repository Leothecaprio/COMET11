// 10) char *strstr(char str[], char sub[]); // returns address of match start
#include <stdio.h>

char* my_strstr(char str[], char sub[]) {
    char *s, *p1, *p2;

    for (s = str; *s; s++) {
        p1 = s;
        p2 = sub;
        while (*p1 && *p2 && (*p1 == *p2)) {
            p1++;
            p2++;
        }
        if (*p2 == '\0')
            return s;
    }
    return NULL;
}

int main() {
    char str[] = "Microcontroller Programming";
    char sub[] = "controller";
    char *res = my_strstr(str, sub);
    if (res)
        printf("Substring found at position: %ld\n", res - str);
    else
        printf("Substring not found.\n");
    return 0;
}
