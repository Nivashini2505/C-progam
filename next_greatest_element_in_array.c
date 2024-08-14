#include <stdio.h>

void findNextGreatest(int arr[], int size) {
    int i, j, next;

    for (i = 0; i < size; i++) {
        next = -1;
        for (j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                next = arr[j];
                break;
            }
        }
        printf("Next bigger element of %d in the element is:%d\n", arr[i], next);
    }
}

int main() {
    int arr[] = {5,3,10,9,6,13};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Next Bigger Elemnts are:\n");

    findNextGreatest(arr, size);

    return 0;
}