#include <stdio.h>
int main() {
    int n, i, num1, num2;
    char op;

    printf("Enter n number: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter two numbers:\n");
        scanf("%d %d", &num1, &num2);
        printf("Enter a character (+,-,*,/,%%): ");
        scanf(" %c", &op);

        switch (op) {
            case '+':
                printf("Result of %d + %d is %d\n", num1, num2, num1 + num2);
                break;
            case '-':
                printf("Result of %d - %d is %d\n", num1, num2, num1 - num2);
                break;
            case '*':
                printf("Result of %d * %d is %d\n", num1, num2, num1 * num2);
                break;
            case '/':
                if (num2 != 0) {
                    printf("Result of %d / %d is %d\n", num1, num2, num1 / num2);
                } else {
                    printf("Division by zero error.\n");
                }
                break;
            case '%':
                if (num2 != 0) {
                    printf("Result of %d %d %d %d is %d\n", num1, num2, num1 % num2);
                } else {
                    printf("Modulo by zero error.\n");
                }
                break;
            default:
                printf("Invalid operator.\n");
                break;
        }
    }

    return 0;
}
