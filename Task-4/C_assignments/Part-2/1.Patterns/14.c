#include <stdio.h>
#include <math.h>

// Efficient prime check
int isPrime(int num) {
    if (num < 2) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;

    int limit = (int)sqrt(num);
    for (int i = 3; i <= limit; i += 2) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int start, end;

    // Take user input
    printf("Enter two positive integers (start and end): ");
    if (scanf("%d %d", &start, &end) != 2) {
        printf("Error: Invalid input. Please enter two integers.\n");
        return 1;
    }

    // Error handling
    if (start < 2 || end < 2) {
        printf("Error: Both numbers must be >= 2.\n");
        return 1;
    }

    if (start > end) {
        printf("Error: Start should be less than or equal to End.\n");
        return 1;
    }

    printf("Prime numbers between %d and %d are:\n", start, end);

    // Main loop: start from 2 or start, whichever is greater
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
