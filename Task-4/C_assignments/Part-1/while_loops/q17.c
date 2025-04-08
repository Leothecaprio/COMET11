#include <stdio.h>
int main() {
    int start, end, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &start, &end);

    printf("even numbers: ");
    for (i = start; i <= end; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\nodd numbers: ");
    for (i = start; i <= end; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
