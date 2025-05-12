#include <stdio.h>
#define SALESMEN 3
#define ITEMS 4

int main() {
    int sales[SALESMEN][ITEMS];
    int i, j, total = 0;

    // Input sales
    printf("Enter sales data:\n");
    for (i = 0; i < SALESMEN; i++) {
        for (j = 0; j < ITEMS; j++) {
            printf("Salesman %d, Item %d: ", i + 1, j + 1);
            scanf("%d", &sales[i][j]);
        }
    }

    // Print Matrix
    printf("\nSales Matrix:\n");
    for (i = 0; i < SALESMEN; i++) {
        for (j = 0; j < ITEMS; j++) {
            printf("%4d", sales[i][j]);
        }
        printf("\n");
    }

    // Total sales by each salesman
    printf("\nTotal Sales by Each Salesman:\n");
    for (i = 0; i < SALESMEN; i++) {
        int sum = 0;
        for (j = 0; j < ITEMS; j++)
            sum += sales[i][j];
        printf("Salesman %d: %d\n", i + 1, sum);
    }

    // Total sales for each item
    printf("\nTotal Sales for Each Item:\n");
    for (j = 0; j < ITEMS; j++) {
        int sum = 0;
        for (i = 0; i < SALESMEN; i++)
            sum += sales[i][j];
        printf("Item %d: %d\n", j + 1, sum);
    }

    // Grand total sales
    for (i = 0; i < SALESMEN; i++)
        for (j = 0; j < ITEMS; j++)
            total += sales[i][j];
    printf("\nTotal Sales: %d\n", total);

    return 0;
}
