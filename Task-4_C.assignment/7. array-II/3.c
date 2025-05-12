#include <stdio.h>
#include <limits.h> // For INT_MAX and INT_MIN

int main() {
    int arr[10];
    int i;
    int biggest, smallest;
    int biggestIndex, smallestIndex;

    // Enter 10 elements and save them in the array
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the array
    printf("The array is: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Find out the biggest and smallest numbers and their indexes
    biggest = INT_MIN;
    smallest = INT_MAX;
    biggestIndex = -1;
    smallestIndex = -1;

    for (i = 0; i < 10; i++) {
        if (arr[i] > biggest) {
            biggest = arr[i];
            biggestIndex = i;
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
            smallestIndex = i;
        }
    }

    printf("Biggest number is %d at index %d\n", biggest, biggestIndex);
    printf("Smallest number is %d at index %d\n", smallest, smallestIndex);

    return 0;
}
