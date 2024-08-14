#include <stdio.h>

int maxSubarraySum(int arr[], int n) {
    int maxSum = arr[0];
    int currentSum = arr[0];

    for (int i = 1; i < n; i++) {
        currentSum = (currentSum + arr[i] > arr[i]) ? currentSum + arr[i] : arr[i];
        maxSum = (currentSum > maxSum) ? currentSum : maxSum;
    }

    return maxSum;
}

int main() {
    int arr[] = { -1,-2,1,5,3,8,-10 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxSum = maxSubarraySum(arr, n);
    printf("The largest sum of contiguous subarrays is: %d\n", maxSum);

    return 0;
}