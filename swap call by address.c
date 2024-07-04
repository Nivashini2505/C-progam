#include<stdio.h>
void swap(int*a,int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("After swapping values in function:\n a=%d,b=%d",*a,*b);

}int main(){
    int a,b;
    printf("enetr value 1:");
    scanf("%d",&a);
    printf("enetr value 2:");
    scanf("%d",&b);
    printf("before swapping:a=%d,b=%d\n",a,b);
    swap(&a,&b);
    printf("\nafter swapping in main funtion:a=%d,b=%d",a,b);
    return 0;
}