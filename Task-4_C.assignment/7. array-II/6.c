#include <stdio.h>

int searchElement(int arr[], int size, int element) {
    int i;

    for (i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element;
    int index;

    printf("Enter the element to search: ");
    scanf("%d", &element);

    index = searchElement(arr, size, element);

    if (index != -1) {
        printf("Element %d found at index %d\n", element, index);
    } else {
        printf("Element %d not found in the array\n", element);
    }

    return 0;
}
