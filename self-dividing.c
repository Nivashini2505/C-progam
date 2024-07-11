#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main(){
    int left,right;
    printf("enter the strating 3 digit number: ");
    scanf("%d",&left);
    printf("enter the ending 3 digit number: ");
    scanf("%d",&right);
    for(int i=left;i<=right;i++){
          int temp = i;
          bool isSelfDividing = true;
          while (temp > 0) {
              int digit = temp % 10;
              if (digit == 0 || i % digit != 0) {
                  isSelfDividing = false;
                  break;
              }
              temp /= 10;
          }
          if (isSelfDividing) {
              printf("%d\n", i); // Print each self-dividing number found
          }
    }
    return 0;
}