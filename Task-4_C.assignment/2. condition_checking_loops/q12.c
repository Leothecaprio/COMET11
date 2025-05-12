#include <stdio.h>
int main() {
    int n, num, smallest, i;

    printf("Enter n number: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("Enter number: ");
        scanf("%d", &smallest);

        for (i = 1; i < n; i++) {
            printf("Enter number: ");
            scanf("%d", &num);

            if (num < smallest) {
                smallest = num;
            }
        }
    }
    printf("The smallest number is %d\n", smallest);

    return 0;
}
