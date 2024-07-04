#include<stdio.h>
int main(){
    char arr[5][10]={"name","place","char","huh","hmm"};
    printf("elements in array:\n");
    for(int i=0;i<5;i++){
        printf("%s ",arr[i]);
    }
    return 0;
}
