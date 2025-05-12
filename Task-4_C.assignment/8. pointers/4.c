#include <stdio.h>

int main() {
    int var1 = 10, var2 = 20, var3 = 30;
    int *ptr;

    ptr = &var1;
    printf("Value of var1: %d\n", *ptr);

    ptr = &var2;
    printf("Value of var2: %d\n", *ptr);

    ptr = &var3;
    printf("Value of var3: %d\n", *ptr);

    return 0;
}
