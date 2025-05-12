#include <stdio.h>
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int year = 2024;
    printf("%d is %sa leap year.\n", year, isLeapYear(year) ? "" : "not ");
    return 0;
}  
