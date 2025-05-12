#include <stdio.h>
float average(int marks[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) sum += marks[i];
    return (float)sum / n;
}
int main() {
    int marks[5];
    for(int i = 0; i < 5; i++) scanf("%d", &marks[i]);
    printf("Average: %.2f\n", average(marks, 5));
    return 0;
}