#include<stdio.h>
int findMaxSubArray(int arr[],int size){
    int currentsum=arr[0];
    int MaxSum=arr[0];
    for(int i=1;i<size;i++){
        currentsum=(currentsum+arr[i]>arr[i])?currentsum+arr[i]:arr[i];
        MaxSum=(currentsum>MaxSum)?currentsum:MaxSum;
    }
    return MaxSum;
}
int main(){
    int arr[]={1,4,-3,4,8,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int MaxSum=findMaxSubArray(arr,size);
    printf("The maximum sum of the subarray is:%d\n",MaxSum);
    return 0;
}

