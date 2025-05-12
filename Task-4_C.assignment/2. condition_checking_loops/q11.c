#include <stdio.h>
int main() {
    int n, num, prev, count = 1, i;

    printf("Enter n number: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("Enter number: ");
        scanf("%d", &prev);

        for (i = 1; i < n; i++) {
            printf("Enter number: ");
            scanf("%d", &num);

            if (num > prev) {
                count++;
                prev = num;
            } else {
                i--;
            }
        }
    }
    printf("The count is %d\n", count);
    return 0;
}
