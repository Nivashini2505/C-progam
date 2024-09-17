#include<stdio.h>
void bubblesort(int arr[],int n){
    for (int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int arr[]={2,5,1,9};
    int n =sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    printf("sorted array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("first smallest element: %d",arr[0]);
    printf("secoond smallest element: %d",arr[1]);
    return 0;

}