//2) Write a program to read a number n, and print sum of all the numbers from 1 
//to n.
#include <stdio.h>
int main() {
 int n, sum = 0, i;
 printf("Enter n number: ");
 scanf("%d", &n);
 for (i = 1; i <= n; i++) {
 sum += i;
 }
 printf("Sum of all numbers from 1 to %d is %d\n", n, sum);
 return 0;
}
