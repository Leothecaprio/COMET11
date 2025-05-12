#include <stdio.h>
int countMax(int arr[], int n) {
    int max = arr[0], count = 0;
    for(int i = 1; i < n; i++) if(arr[i] > max) max = arr[i];
    for(int i = 0; i < n; i++) if(arr[i] == max) count++;
    return count;
}
int main() {
    int arr[] = {10, 14, 16, 10, 10, 16, 14, 14, 16, 16};
    printf("Max repeated %d times\n", countMax(arr, 10));
    return 0;
}
