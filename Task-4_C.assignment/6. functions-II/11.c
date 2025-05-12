#include <stdio.h>
int isLeapYear(int year);
int daysInMonth(int month, int year) {
    if (month < 1 || month > 12) return -1;
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year))
        return 29;
    return days[month - 1];
}

int main() {
    int month = 2, year = 2024;
    int days = daysInMonth(month, year);
    if (days != -1)
        printf("Days: %d\n", days);
    else
        printf("Invalid month.\n");
    return 0;
}  
