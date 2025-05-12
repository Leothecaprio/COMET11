#include <stdio.h>

int main() {
    char name[] = "John Doe"; // Or your name
    int i;

    // Print your name using a for loop
    printf("My name is: ");
    for (i = 0; name[i] != '\0'; i++) {
        printf("%c", name[i]);
    }
    printf("\n");

    return 0;
}
