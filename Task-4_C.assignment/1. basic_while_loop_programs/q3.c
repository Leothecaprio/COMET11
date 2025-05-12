//3) Write a program to read a number n and print the factorial of n.
#include <stdio.h>
int main() {
 int n, factorial = 1, i;
 printf("Enter n number: ");
 scanf("%d", &n);
 for (i = 1; i <= n; i++) {
 factorial *= i;
 }
 printf("Factorial of %d is %d\n", n, factorial);
 return 0;
}
