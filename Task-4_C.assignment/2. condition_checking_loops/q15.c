#include <stdio.h>
int main() {
    int start, end, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &start, &end);

    for (i = start; i <= end; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
