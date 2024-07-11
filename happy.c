#include <stdio.h>

int isHappyNumber(int num) {
    int sum = 0, digit;
    
    while (num != 0) {
        digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    
    if (sum == 1) {
        return 1;
    } else if (sum == 4) {
        return 0;
    } else {
        return isHappyNumber(sum);
    }
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isHappyNumber(num)) {
        printf("%d is a happy number.\n", num);
    } else {
        printf("%d is not a happy number.\n", num);
    }
    
    return 0;
}