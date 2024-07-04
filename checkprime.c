#include<stdio.h>
int main(){
    int num,count=0;
    printf("enter a number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
       
       if(num%i==0){
        count++;
       }
      
    } if( count==2){
        printf("%d is a prime number",num);
    
       }
       else{
        printf("it is not a prime number");
        
       }
    
    return 0;
    
    
    }