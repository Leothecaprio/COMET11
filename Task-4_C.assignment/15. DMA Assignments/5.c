// 5) Implement itoa function that converts int to string
#include <stdio.h>
#include <stdlib.h>

char* my_itoa(int num) {
    char *str = (char *)malloc(20); // enough for 32-bit int
    if (!str) return NULL;
    sprintf(str, "%d", num);
    return str;
}

int main() {
    int n = 12345;
    char *result = my_itoa(n);
    printf("Integer to string: %s\n", result);
    free(result);
    return 0;
}
