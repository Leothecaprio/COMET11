//Macro to find the biggest of two numbers and implement array sorting

#include <stdio.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))

void bubbleSort(int arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int num1 = 10, num2 = 20;
    int sortedArray[] = {5, 1, 4, 2, 8};
    int size = sizeof(sortedArray) / sizeof(sortedArray[0]);
    int i;

    printf("Biggest of %d and %d is %d\n", num1, num2, MAX(num1, num2));

    printf("Unsorted array: ");
    for(i=0; i<size; i++){
        printf("%d ", sortedArray[i]);
    }
    printf("\n");
    
    bubbleSort(sortedArray, size);
    
    printf("Sorted array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", sortedArray[i]);
    }
    printf("\n");


    return 0;
}