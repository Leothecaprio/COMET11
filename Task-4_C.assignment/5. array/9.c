#include <stdio.h>
int main() {
    int num, bin[32], i = 0;
    scanf("%d", &num);
    while(num > 0) {
        bin[i++] = num % 2;
        num /= 2;
    }
    for(int j = i - 1; j >= 0; j--) printf("%d", bin[j]);
    return 0;
}
