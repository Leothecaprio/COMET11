#include <stdio.h>
#include <ctype.h>

// 1. Simple Interest
float simple_interest(float p, float r, float t) {
    return (p * r * t) / 100.0;
}

// 2. Power
int power(int a, int n) {
    int result = 1;
    for (int i = 0; i < n; i++)
        result *= a;
    return result;
}

// 3. Multiply without *
int multiply(int a, int b) {
    int result = 0;
    for (int i = 0; i < b; i++)
        result += a;
    return result;
}

// 4. Division - Quotient
int divide_quotient(int a, int b) {
    if (b == 0) return -1;
    return a / b;
}

// 5. Division - Remainder
int divide_remainder(int a, int b) {
    if (b == 0) return -1;
    return a % b;
}

// 6. Multiplication Table
void print_table(int n) {
    for (int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n * i);
}

// 7. Prime check
int IsPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

// 8. Alphanumeric check
int fun_alpha_num(char c) {
    return isalnum(c) ? 1 : 0;
}

// 9. Calculator Functions
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int quotient(int a, int b) { return b ? a / b : 0; }
int remainder_fn(int a, int b) { return b ? a % b : 0; }

// 10. Leap Year
int is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// 11. Days in Month
int days_in_month(int month, int year) {
    switch(month) {
        case 2: return is_leap_year(year) ? 29 : 28;
        case 4: case 6: case 9: case 11: return 30;
        default: return 31;
    }
}

// 12. Swap
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Swapped: a = %d, b = %d\n", a, b);
}

// 13. Compare Dates
int compare_dates(int d1, int m1, int y1, int d2, int m2, int y2) {
    if (y1 < y2 || (y1 == y2 && m1 < m2) || (y1 == y2 && m1 == m2 && d1 < d2))
        return 1; // First is older
    else
        return 2; // Second is older
}

// 14. Date Validity
int is_valid_date(int d, int m, int y) {
    if (m < 1 || m > 12 || d < 1 || d > 31) return 0;
    int dim = days_in_month(m, y);
    return (d <= dim);
}

int main() {
    // Example usage for some functions:
    float si = simple_interest(1000, 5, 2);
    printf("Simple Interest: %.2f\n", si);

    int pow = power(2, 3);
    printf("2^3 = %d\n", pow);

    printf("Product (4 x 5) = %d\n", multiply(4, 5));

    print_table(5);

    int prime = IsPrime(7);
    printf("7 is %s\n", prime ? "Prime" : "Not Prime");

    char c = 'A';
    printf("%c is %salphanumeric\n", c, fun_alpha_num(c) ? "" : "not ");

    printf("Days in Feb 2024: %d\n", days_in_month(2, 2024));

    printf("Date 1 is %s\n", is_valid_date(29, 2, 2023) ? "Valid" : "Invalid");

    return 0;
}
