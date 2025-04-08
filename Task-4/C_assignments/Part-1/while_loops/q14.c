#include <stdio.h>
int main() {
    int n, i, j, marks[6], topperStudent = 1;
    float percentage, maxPercentage = 0.0;

    printf("Enter n students: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter %d student 6 subjects marks:\n", i);
        percentage = 0.0;
        for (j = 0; j < 6; j++) {
            scanf("%d", &marks[j]);
            percentage += marks[j];
        }
        percentage /= 6.0;
        printf("Student %d percentage is: %.2f%%\n", i, percentage);

        if (percentage > maxPercentage) {
            maxPercentage = percentage;
            topperStudent = i;
        }
    }
    printf("Topper student ID is %d\n", topperStudent);

    return 0;
}
