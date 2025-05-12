#include <stdio.h>
#define NAMES 5
#define SIZE 20

int main() {
    char names[NAMES][SIZE];

    printf("Enter %d names:\n", NAMES);
    for (int i = 0; i < NAMES; i++) {
        printf("Name %d: ", i + 1);
        scanf("%s", names[i]);
    }

    printf("\nYou entered:\n");
    for (int i = 0; i < NAMES; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
