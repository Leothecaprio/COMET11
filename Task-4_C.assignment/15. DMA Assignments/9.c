// 9) Program to show malloc fails and prints after how many bytes
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    size_t size = 1024 * 1024 * 10; // 10MB chunks
    int count = 0;

    while ((ptr = (int *)malloc(size)) != NULL) {
        count++;
        printf("Allocated %d MB\n", count * 10);
    }

    printf("Malloc failed after %d MB\n", count * 10);
    return 0;
}
