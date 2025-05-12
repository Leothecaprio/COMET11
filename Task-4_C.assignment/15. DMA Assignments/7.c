// 7) Replace every occurrence of substr1 with substr2 in main string
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* str_replace(const char *main, const char *old, const char *neww) {
    int count = 0;
    const char *p = main;
    while ((p = strstr(p, old))) {
        count++;
        p += strlen(old);
    }

    char *result = (char *)malloc(strlen(main) + count * (strlen(neww) - strlen(old)) + 1);
    char *res_ptr = result;

    while (*main) {
        if (strstr(main, old) == main) {
            strcpy(res_ptr, neww);
            res_ptr += strlen(neww);
            main += strlen(old);
        } else {
            *res_ptr++ = *main++;
        }
    }
    *res_ptr = '\0';
    return result;
}

int main() {
    char mainStr[] = "kernel e e e";
    char *result = str_replace(mainStr, "e", "xxx");
    printf("Replaced string: %s\n", result);
    free(result);
    return 0;
}

