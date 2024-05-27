#include<stdio.h>
int main(){
    int num,count=0;
    printf("enter a number:");
    scanf("%d",&num);
    if(num==1){
        printf("the given number is neither prime nor composite");
    }else{
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
 }}
    if(count==2){
        printf("the given number is prime");
    }
    else{printf("the given number is not prime");}
    return 0;
}