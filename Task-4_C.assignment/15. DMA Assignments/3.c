// 3) Copy "Kernel" to one dynamic string, then copy that to another.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str1 = (char *)malloc(10);
    char *str2 = (char *)malloc(10);

    if (!str1 || !str2) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    strcpy(str1, "Kernel");
    strcpy(str2, str1);

    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    free(str1);
    free(str2);
    return 0;
}
