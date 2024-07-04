#include<stdio.h>

int main() {
    int matrix1[2][2] = {{1, 2}, {1, 2}};
    int matrix2[2][2] = {{3, 4}, {3, 4}};
    int sum[2][2]; // Declare sum variable outside the loop

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}