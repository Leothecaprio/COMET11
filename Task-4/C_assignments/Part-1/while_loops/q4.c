
  // Example: 
  // Enter n number: 3
  // 1 - 1/2 + 1/3
  // Generic formula:  1 - 1/2 + 1/3 - 1/4 .... + 1/n etc

#include <stdio.h>
int main() {
    int n, i;
    double sum = 0.0;
    printf("Enter n number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            sum += 1.0 / i;
        } else {
            sum -= 1.0 / i;
        }
    }
    printf("Series sum: %lf\n", sum);
    return 0;
}
