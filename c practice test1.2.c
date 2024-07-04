//numbers btwn 32 and 99 that satisfies 45*45=2025 20+25=45
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int num,product,sum,fnum,snum;
    for(num=32;num<100;num++){
       product=num*num;
       fnum=product/100;
       snum=product%100;
       sum=fnum+snum;
       if(sum==num){
        printf("%d\n",num);
       }
      }
      return 0;
}