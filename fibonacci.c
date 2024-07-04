#include<stdio.h>
int main(){
    int num1=0,num2=1,sum=0;
    printf("0 ");
    for(int i=1;i<20;i++){
      sum=num1+num2;
      printf("%d ",sum);
      num2=num1;
      num1=sum;
      
    }
}