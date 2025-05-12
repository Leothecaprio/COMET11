#include <stdio.h>
float calculate_simple_interest(float principal, float rate, int time) {
    if (principal < 0 || rate < 0 || time < 0) {
        printf("Invalid input values.\n");
        return -1;
    }
    return (principal * rate * time) / 100;
}

int main() {
    float p = 1000, r = 5;
    int t = 2;
    float si = calculate_simple_interest(p, r, t);
    if (si != -1)
        printf("Total amount = %.2f\n", p + si);
    return 0;
}  