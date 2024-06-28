#include<stdio.h> 
int main(){
    int n1,n2;
    printf("enter 2 numbers seperated by comma: ");
    scanf(" %d,%d",&n1,&n2);
    int sum=n1+n2;
    printf("\n the sum of two numbers is: %d",sum);
    int difference;
    if(n1>n2){
        difference=n1-n2;
    }
    else{
        difference=n2-n1;
    }
    printf("\ndifference of two numbers is:%d",difference);

    return 0;
}
