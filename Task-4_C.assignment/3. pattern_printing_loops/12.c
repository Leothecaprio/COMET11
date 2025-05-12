#include <stdio.h>

int main() {
    int i = 1, j = 1;

    while(i <= 5) {
        if(j <= i) {
            printf("*");
            j++;
        } else {
            printf("\n");
            i++;
            j = 1;
        }
    }

    return 0;
}
