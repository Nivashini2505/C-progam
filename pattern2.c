#include<stdio.h>
int main(){
        for(int i=1;i<=5;i++){
                int num=i;
                for(int j=0;j<i;j++){
                        printf("%d",num++);
                }
                printf("\n");
        }
        return 0;
}