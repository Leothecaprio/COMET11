#include <stdio.h>
int main() {
    int arr[10], max, min, maxIdx = 0, minIdx = 0;
    for(int i = 0; i < 10; i++) scanf("%d", &arr[i]);
    max = min = arr[0];
    for(int i = 1; i < 10; i++) {
        if(arr[i] > max) { max = arr[i]; maxIdx = i; }
        if(arr[i] < min) { min = arr[i]; minIdx = i; }
    }
    printf("Max: %d at index %d\n", max, maxIdx);
    printf("Min: %d at index %d\n", min, minIdx);
    return 0;
}
