#include <stdio.h>
#define ROWS 3
#define COLS 3

void search(int arr[ROWS][COLS], int key, int *row, int *col) {
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            if (arr[i][j] == key) {
                *row = i;
                *col = j;
                return;
            }
    *row = *col = -1;
}

int main() {
    int matrix[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int key, r, c;
    printf("Enter element to search: ");
    scanf("%d", &key);

    search(matrix, key, &r, &c);

    if (r != -1)
        printf("Found at row %d, column %d\n", r, c);
    else
        printf("Element not found.\n");

    return 0;
}
