#include<stdio.h>
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nafetr swapping numbers in function:\na=%d b=%d",a,b);
}
int main(){
    int a,b;
    printf("enter a:");
    scanf("%d",&a);
    printf("Enetr b:");
    scanf("%d",&b);
    printf("before swapping:\n a=%d,b=%d",a,b);
    swap(a,b);
    printf("\nafter swapping numbers in main:\na=%d,b=%d",a,b);
    return 0;


}