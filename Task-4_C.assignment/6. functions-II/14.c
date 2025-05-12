#include <stdio.h>
int isLeapYear(int year);
int daysInMonth(int month, int year);
int isValidDate(int d, int m, int y) {
    if (y < 1 || m < 1 || m > 12 || d < 1 || d > daysInMonth(m, y))
        return 0;
    return 1;
}

int main() {
    int d = 29, m = 2, y = 2024;
    if (isValidDate(d, m, y))
        printf("Valid date.\n");
    else
        printf("Invalid date.\n");
    return 0;
}
