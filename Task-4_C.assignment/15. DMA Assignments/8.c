// 8) Merge two sorted arrays without duplicates
#include <stdio.h>
#include <stdlib.h>

void merge_unique(int a[], int n, int b[], int m) {
    int *res = (int *)malloc((n + m) * sizeof(int));
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (a[i] < b[j]) res[k++] = a[i++];
        else if (a[i] > b[j]) res[k++] = b[j++];
        else {
            res[k++] = a[i];
            i++; j++;
        }
    }
    while (i < n) res[k++] = a[i++];
    while (j < m) res[k++] = b[j++];

    printf("Merged array: ");
    for (int x = 0; x < k; x++) printf("%d ", res[x]);
    printf("\n");

    free(res);
}

int main() {
    int a[] = {10,12,13,14,15,16};
    int b[] = {9,12,15,19,20};
    merge_unique(a, 6, b, 5);
    return 0;
}
