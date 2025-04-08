#include <stdio.h>
int main() {
 int num1, num2, result = 0, i;
 printf("Enter two numbers:\n");
 scanf("%d%d", &num1, &num2);
 for (i = 0; i < num2; i++) {
 result += num1;
 }
 printf("Result is %d\n", result);
 return 0;
}
