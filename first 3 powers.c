#include<stdio.h>
#include<math.h>
int main(){
    int num;
    
    printf("enter a integer:");
    scanf("%d",&num);
    for(int i=1;i<=3;i++){
        int power;
        power=pow(num,i);
        printf(" %d",power);
    }
    return 0;
}