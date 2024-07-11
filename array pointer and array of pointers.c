#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    int *arr[3]; // Array of 3 pointers to int

    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;

    for (int i = 0; i < 3; i++) {
        printf("Value pointed by arr[%d] = %d\n", i, *arr[i]);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30}; // An array of 3 integers
    int (*ptr)[3] = &arr;      // Pointer to an array of 3 integers

    for (int i = 0; i < 3; i++) {
        printf("Value at arr[%d] = %d\n", i, (*ptr)[i]);
    }

    return 0;
}

