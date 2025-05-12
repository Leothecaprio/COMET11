#include <stdio.h>
#define SIZE 3

int main() {
    int A[SIZE][SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[SIZE][SIZE] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int product[SIZE][SIZE] = {0};

    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            for (int k = 0; k < SIZE; k++)
                product[i][j] += A[i][k] * B[k][j];

    printf("Product:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++)
            printf("%4d", product[i][j]);
        printf("\n");
    }

    return 0;
}
