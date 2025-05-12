#include <stdio.h>
int main() {
    int i, j;
    for(i = 1; i <= 3; i++) {
        // Print 10 spaces
        for(j = 1; j <= 10; j++) {
            printf(" ");
        }

        // Print stars (1, 3, 5 stars in each row)
        int stars = 2 * i - 1;
        for(j = 1; j <= stars; j++) {
            printf(" *");
        }
        printf("\n");
    }

    for(i = 1; i <= 3; i++) {
        if(i == 1 || i == 3) {
            printf("  ");  
            for(j = 1; j <= 7; j++) {
                printf("* ");
            }
        } else if(i == 2) {
            
            for(j = 1; j <= 9; j++) {
                printf("* ");
            }
        }
        printf("\n");
    }

    for(i = 3; i >= 1; i--) {
        // Print 10 spaces
        for(j = 1; j <= 10; j++) {
            printf(" ");
        }

        // Print stars (1, 3, 5 stars in each row)
        int stars = 2 * i - 1;
        for(j = 1; j <= stars; j++) {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}
