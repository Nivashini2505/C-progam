#include <stdio.h>

int findPeakElement(int arr[], int size) {
    if (size == 1) {
        return 0; // Only one element, it's the peak
    }

    if (arr[0] >= arr[1]) {
        return 0; // First element is a peak
    }

    if (arr[size - 1] >= arr[size - 2]) {
        return size - 1; // Last element is a peak
    }

    for (int i = 1; i < size - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            return i; // Found a peak element
        }
    }

    return -1; // No peak element found (shouldn't happen with valid input)
}

int main() {
    int arr[] = {1, 3, 20, 4, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    int peakIndex = findPeakElement(arr, size);
    if (peakIndex != -1) {
        printf("Peak element is at index %d with value %d\n", peakIndex, arr[peakIndex]);
    } else {
        printf("No peak element found\n");
    }

    return 0;
}