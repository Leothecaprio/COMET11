#include <stdio.h>
void makePositive(int arr[], int n) {
    for(int i = 0; i < n; i++) if(arr[i] < 0) arr[i] = -arr[i];
}
int main() {
    int arr[5] = {-1, 2, -3, 4, -5};
    makePositive(arr, 5);
    for(int i = 0; i < 5; i++) printf("%d ", arr[i]);
    return 0;
}