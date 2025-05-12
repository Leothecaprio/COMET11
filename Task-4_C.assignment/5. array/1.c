#include <stdio.h>
int main() {
    int arr[100];
    for(int i = 0; i < 100; i++) arr[i] = i + 1;
    printf("All numbers:\n");
    for(int i = 0; i < 100; i++) printf("%d ", arr[i]);
    printf("\nEven numbers:\n");
    for(int i = 0; i < 100; i++) if(arr[i] % 2 == 0) printf("%d ", arr[i]);
    printf("\nOdd numbers:\n");
    for(int i = 0; i < 100; i++) if(arr[i] % 2 != 0) printf("%d ", arr[i]);
    printf("\nNumbers +5:\n");
    for(int i = 0; i < 100; i++) printf("%d ", arr[i] + 5);
    return 0;
}
