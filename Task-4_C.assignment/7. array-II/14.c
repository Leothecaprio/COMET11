#include <stdio.h>

int countBiggest(int arr[], int size) {
    int i;
    int biggest = arr[0]; // Assume the first element is the biggest
    int count = 1;       // Initialize count to 1 (for the first biggest)

    // Find the biggest number
    for (i = 1; i < size; i++) {
        if (arr[i] > biggest) {
            biggest = arr[i];
            count = 1; // Reset count if a new biggest is found
        }
        else if (arr[i] == biggest){
            count++;
        }
    }

    // Count occurrences of the biggest number
    /*for (i = 0; i < size; i++) {
        if (arr[i] == biggest) {
            count++;
        }
    }*/

    return count;
}

int main() {
    int array[] = {10, 14, 16, 10, 10, 16, 14, 14, 16, 16};
    int size = sizeof(array) / sizeof(array[0]);
    int result;

    result = countBiggest(array, size);
    printf("Biggest number is repeated %d times\n", result);

    return 0;
}