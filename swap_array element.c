#include <stdio.h>

void swapElements(int arr[], int k) {
    int temp = arr[k];
    arr[k] = arr[k+1];
    arr[k+1] = temp;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int k = 2; // Index of the element to swap

    printf("Before swapping: ");
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        printf("%d ", arr[i]);
    }

    swapElements(arr, k);

    printf("\nAfter swapping: ");
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}