#include <stdio.h>

int isLeapYear(int year);
int daysInMonth(int month, int year);

int isValidDate(int d, int m, int y) {
    if (y < 1 || m < 1 || m > 12 || d < 1)
        return 0;
    int maxDay = daysInMonth(m, y);
    if (d > maxDay) return 0;
    return 1;
}

int daysInMonth(int month, int year) {
    if (month == 2) return isLeapYear(year) ? 29 : 28;
    if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    return 31;
}

int isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

int main() {
    int d = 29, m = 2, y = 2024;
    if (isValidDate(d, m, y))
        printf("Valid Date\n");
    else
        printf("Invalid Date\n");
    return 0;
}
