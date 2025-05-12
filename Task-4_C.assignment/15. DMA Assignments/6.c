// 6) Concatenate first n of str1 and first m of str2 into new string
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concat_n_m(char *str1, char *str2, int n, int m) {
    char *result = (char *)malloc(n + m + 1);
    strncpy(result, str1, n);
    strncpy(result + n, str2, m);
    result[n + m] = '\0';
    return result;
}

int main() {
    char str1[] = "kernel masters";
    char str2[] = "raayan systems";
    int n = 3, m = 5;

    char *output = concat_n_m(str1, str2, n, m);
    printf("Concatenated string: %s\n", output);
    free(output);
    return 0;
}
