#include<stdio.h>
int main(){
    int  matrix1[2][2]={{1,2},{3,4}};
    int matrix2[2][2]={{5,6},{7,8}};
    int multiply[2][2];

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            multiply[i][j]=matrix1[i][j]*matrix2[i][j];
        }
    }
    printf("matrix 1 :\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",matrix1[i][j]);        }
    }
    printf("\n");

printf("matrix 2:\n");
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("%d ",matrix2[i][j]);
    }
    printf("\n");
}

printf("multiplied matrix:\n");
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("%d ",multiply[i][j]);
    }
    printf("\n");
}
return 0;
}