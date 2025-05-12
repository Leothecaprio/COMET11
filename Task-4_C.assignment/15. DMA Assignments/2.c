// 2) Create a string dynamically, read and print its value.
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = (char *)malloc(100 * sizeof(char)); // assuming max 99 characters
    if (str == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter a string: ");
    scanf("%99s", str);
    printf("You entered: %s\n", str);
    free(str);
    return 0;
}
