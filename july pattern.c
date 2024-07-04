#include<stdio.h>
int main(){
    
    int i,j;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            printf("  ");
        }
        for(int j=0;j<i;j++){
            printf("%d ",i+j);
        }
        for(int j=i-2;j>=0;j--){
            printf("%d ",i+j);
        }
        printf("\n");
    }
    return 0;
}