#include<stdio.h>
int main(){
    int num;
    printf("enter a number for which we have to find square root:");
    scanf("%d",&num);
    float sq=sqrt(num);
    
    printf("%.2f", sq);
    return 0;
}