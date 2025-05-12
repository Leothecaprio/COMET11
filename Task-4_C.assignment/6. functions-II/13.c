#include <stdio.h>
typedef struct {
    int day, month, year;
} Date;

int compareDates(Date d1, Date d2) {
    if (d1.year < d2.year || (d1.year == d2.year && d1.month < d2.month) || (d1.year == d2.year && d1.month == d2.month && d1.day < d2.day))
        return 1;
    else
        return 2;
}

int main() {
    Date d1 = {1, 1, 2020}, d2 = {1, 1, 2021};
    printf("Date %d is older.\n", compareDates(d1, d2));
    return 0;
}  