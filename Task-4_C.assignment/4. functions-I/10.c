#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    return 0;
}

int main() {
    int year = 2024;
    if (isLeapYear(year))
        printf("%d is a Leap Year\n", year);
    else
        printf("%d is NOT a Leap Year\n", year);
    return 0;
}
