#include <stdio.h>

int main() {
    int start, end, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &start, &end);

    for (i = end; i >= start; i--) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
