#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int arr[]={1,2,3,2,3,4,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int OddNumber= findOddNumber(arr,size);
    printf("The number whixh has odd number of occurances in the given array is:%d\n",OddNumber);
    return 0;
}

int findOddNumber(int arr[],int size){
    int result=0;
    for(int i=0;i<size;i++){
        result ^=arr[i];
    }
    return result;
}