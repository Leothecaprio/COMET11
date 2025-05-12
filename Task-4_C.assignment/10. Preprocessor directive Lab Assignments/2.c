//Macro to find the biggest of four numbers using the biggest of two macro

#include <stdio.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MAX4(a, b, c, d) MAX(MAX(a, b), MAX(c, d))

int main() {
    int a = 10, b = 20, c = 30, d = 40;
    printf("Biggest of %d, %d, %d, and %d is %d\n", a, b, c, d, MAX4(a, b, c, d));
    return 0;
}