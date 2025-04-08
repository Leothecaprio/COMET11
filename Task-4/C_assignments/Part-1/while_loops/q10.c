#include <stdio.h>
int main() {
    int n, num, prev, i;

    printf("Enter n number: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("Enter number: ");
        scanf("%d", &prev);

        for (i = 1; i < n; i++) {
            printf("Enter number: ");
            scanf("%d", &num);

            if (num > prev) {
                printf("The given number is bigger than the previous number.\n");
            } else if (num < prev) {
                printf("The given number is smaller than the previous number.\n");
            }
            prev = num;
        }
    }
    return 0;
}
