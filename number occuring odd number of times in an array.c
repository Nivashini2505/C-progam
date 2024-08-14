#include<stdio.h>
#include<conio.h>
#include<math.h>
int findOddNumber(int arr[], int size) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        result ^= arr[i];
    }
    return result;
}

int main() {
    int arr[] = {1, 2, 3, 2, 1, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int oddNumber = findOddNumber(arr, size);
    printf("The number occurring an odd number of times is: %d\n", oddNumber);
    return 0;
}