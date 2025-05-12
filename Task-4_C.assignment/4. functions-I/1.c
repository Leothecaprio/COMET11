#include <stdio.h>

float simpleInterest(float p, float r, float t) {
    return (p * r * t) / 100;
}

int main() {
    float principal = 1000, rate = 5, time = 2;
    float interest = simpleInterest(principal, rate, time);
    float totalAmount = principal + interest;
    printf("Total amount after tenure: %.2f\n", totalAmount);
    return 0;
}
