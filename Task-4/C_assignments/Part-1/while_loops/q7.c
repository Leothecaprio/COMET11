#include <stdio.h>
int main() {
    int n, x, i;
    printf("Enter n number: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Enter x value: ");
        scanf("%d", &x);
        if (x % 2 == 0) {
            printf("The given number %d is EVEN.\n", x);
        } else {
            printf("The given number %d is ODD.\n", x);
        }
    }
    return 0;
}
