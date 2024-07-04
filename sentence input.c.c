#include<stdio.h>
int main(){
    char str[100];
    printf("enter a sentence: ");
    scanf("%[^\n]s",&str);
    printf("the enteres string is:%s",str);
    return 0;
}