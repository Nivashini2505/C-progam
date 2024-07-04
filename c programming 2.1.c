#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    gets(str1);
  

    printf("Enter the second string: ");
    gets(str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 > len2) {
        printf("The first string cannot occur at the end of the second string.\n");
    } else {
        if (strcmp(str1, &str2[len2 - len1]) == 0) {
            printf("The first string occurs at the end of the second string.\n");
        } else {
            printf("The first string does not occur at the end of the second string.\n");
        }
    }

    return 0;
}