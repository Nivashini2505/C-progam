//2 digit number that is 3 times the sum of its digits
#include<stdio.h>

int main(){
    int num,sum,rem,q;
    for(num=10;num<100;num++){
        rem=num%10;
        q=num/10;
        sum=rem+q;
         if(num==3*sum){
            printf("%d\n",num);
        }
    }
    
    return 0;
}

