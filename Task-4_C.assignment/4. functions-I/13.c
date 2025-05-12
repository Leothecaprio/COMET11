#include <stdio.h>

int compareDates(int d1, int m1, int y1, int d2, int m2, int y2) {
    if (y1 < y2) return 1;
    if (y2 < y1) return 2;
    if (m1 < m2) return 1;
    if (m2 < m1) return 2;
    if (d1 < d2) return 1;
    if (d2 < d1) return 2;
    return 0; // same date
}

int main() {
    int d1 = 5, m1 = 4, y1 = 2020;
    int d2 = 6, m2 = 4, y2 = 2020;
    int result = compareDates(d1, m1, y1, d2, m2, y2);
    if (result == 1)
        printf("First date is older\n");
    else if (result == 2)
        printf("Second date is older\n");
    else
        printf("Both dates are same\n");
    return 0;
}
