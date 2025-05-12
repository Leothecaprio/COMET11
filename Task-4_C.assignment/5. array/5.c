#include <stdio.h>
int main() {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    float arr[size];
    for(int i = 0; i < size; i++) scanf("%f", &arr[i]);
    for(int i = 0; i < size; i++) printf("%.2f ", arr[i]);
    return 0;
}
