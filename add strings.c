#include<stdio.h>
#define TRUE 1
#define FALSE 0
int is_prime(int a){
   if(a<=1) return FALSE;
   if(a==2) return TRUE;
   if(a%2==0) return FALSE;
   for(int i=3;i<= sqrt(a);i+=2){
    if(a%i==0) return FALSE;

   }
   return TRUE;
}
void prime(int x,int y){
    for(int i=x;i<=y;i++){
       if( is_prime(i)){
        printf("%d ",i);
       }
    }
printf("\n");
}
int main(){
    int x,y;
    printf("enter strating number:");
    scanf("%d",&x);
    printf("enter the ending number:");
    scanf("%d",&y);
    prime(x,y);
    return 0;


}















    
