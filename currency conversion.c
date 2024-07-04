#include<stdio.h>
void convert(float*US,float*indian){
  
    *indian=83.53*(*US);
      
}
int main(){
    float US,indian;
    printf("enetr the amount in dollars:");
    scanf("%f",&US);
    convert(&US,&indian);
  printf("value in Indian rupees is:%.2f",indian);
    
    return 0;
}