#include <stdio.h>
#include <stdlib.h> // For malloc() and free()

int main() {
    int size;
    int i;
    float *array; // Use a pointer

    // Take the value of 'size' from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare an array of float using malloc
    array = (float*)malloc(size * sizeof(float));
    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit with an error code
    }

    // Initialize the array (optional, you can take user input instead)
     for (i = 0; i < size; i++) {
        array[i] = 1.0 + i * 0.5; // Example initialization
    }

    // Take user input using scanf
    printf("Enter %d numbers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%f", &array[i]);
    }


    // Print the elements of the array
    printf("The array elements are: ");
    for (i = 0; i < size; i++) {
        printf("%f ", array[i]);
    }
    printf("\n");

    free(array); // Free the allocated memory
    return 0;
}

