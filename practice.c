#include<stdio.h>
int findNextGreatestElement(int arr[],int size){
    int i,j,next;
  
    for(i=0;i<size;i++){
          next=-1;
          for(j=i+1;j<size;j++){
            if (arr[j]>arr[i]){
                next=arr[j];
                break;
            }
        }
        printf("The next greatest element after %d is %d: \n",arr[i],next);
    }
}

int main(){
    int arr[]={5,3,10,9,6,13};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Next bigger elements are:\n");
    int findNextGreatestElement(arr,size);
    return 0;
}

