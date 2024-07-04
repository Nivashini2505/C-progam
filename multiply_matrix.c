#include<stdio.h>
int main(){
    int m1[2][2]={{2,3},{6,5}};
    int m2[2][2]={{4,6},{8,1}};
    int mul[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            mul[i][j]=0;
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
             for(int k=0;k<2;k++){
        mul[i][j]+=m1[i][k]*m2[k][j];
        
    }
        }
     
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}