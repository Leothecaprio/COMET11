#include <stdio.h>
int search(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) if(arr[i] == key) return i;
    return -1;
}
int main() {
    int arr[10], key;
    for(int i = 0; i < 10; i++) scanf("%d", &arr[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    int index = search(arr, 10, key);
    if(index == -1) printf("Not found\n");
    else printf("Found at index %d\n", index);
    return 0;
}