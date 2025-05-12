#include <stdio.h>

float calculateAverage(int marks[], int size) {
    int i;
    float sum = 0;

    for (i = 0; i < size; i++) {
        sum += marks[i];
    }
    return sum / size;
}

int main() {
    int marks[] = {85, 90, 78, 92, 88};
    int size = sizeof(marks) / sizeof(marks[0]);
    float average;

    average = calculateAverage(marks, size);
    printf("Average marks: %.2f\n", average);

    return 0;
}