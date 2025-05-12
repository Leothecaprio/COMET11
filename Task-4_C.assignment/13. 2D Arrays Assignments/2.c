#include <stdio.h>
#define ROWS 3
#define COLS 2

int main() {
    int matrix[ROWS][COLS] = {{1, 3}, {4, 5}, {7, 8}};
    int transpose[COLS][ROWS];
    int i, j;

    for (i = 0; i < ROWS; i++)
        for (j = 0; j < COLS; j++)
            transpose[j][i] = matrix[i][j];

    printf("Transpose Matrix:\n");
    for (i = 0; i < COLS; i++) {
        for (j = 0; j < ROWS; j++)
            printf("%3d", transpose[i][j]);
        printf("\n");
    }

    return 0;
}
