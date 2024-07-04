#include<stdio.h>
#include<ctype.h>

int main(){
    char str[100];
    printf("enter a sentence:");
    scanf("%[^\n]s", str);
    
    int i = 0;
    while (str[i] != '\0') {
        if (isalpha(str[i])) {
            if (i == 0 || str[i-1] == ' ') {
                if (islower(str[i])) {
                    printf("%c", toupper(str[i]));
                } else {
                    printf("%c", str[i]);
                }
            } else {
                printf("%c", str[i]);
            }
        } else {
            printf("%c", str[i]);
        }
        i++;
    }
    
    return 0;
}