#include <stdio.h>

int isLeapYear(int year);

int daysInMonth(int month, int year) {
    if (month < 1 || month > 12) return 0;
    if (month == 2)
        return isLeapYear(year) ? 29 : 28;
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else
        return 31;
}

int isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

int main() {
    int month = 2, year = 2024;
    printf("Days in month: %d\n", daysInMonth(month, year));
    return 0;
}
