#include<stdio.h>
int main(){
    int num,fact=1;
    printf("enter the number for which ypou have to find factorial:");
    scanf("%d",&num);
    for(int i=num;i>0;i--){
        fact=fact*i;
    }
    printf("the factorial is:%d",fact);
    return 0;
}