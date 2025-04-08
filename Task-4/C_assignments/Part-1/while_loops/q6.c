#include <stdio.h>
int main() {
 int base, exponent, result = 1, i;
 printf("Enter base and exponent: ");
 scanf("%d%d", &base, &exponent);
 for (i = 0; i < exponent; i++) {
 result *= base;
 }
 printf("%d to the power of %d -> %d\n", base, exponent, result);
 return 0;
}
