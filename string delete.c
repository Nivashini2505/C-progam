#include <stdio.h>
#include <string.h>

void removeWord(const char *str, const char *word) {
    int strLen = strlen(str);
    int wordLen = strlen(word);
    int i = 0;
    
    while (i < strLen) {
        int match = 1; 
        for (int j = 0; j < wordLen; j++) {
            if (str[i + j] != word[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            i += wordLen; 
        } else {
            printf("%c", str[i]);
            i++;
        }
    }
}

int main() {
    char str[100];
    char word[10];
    printf("Enter a sentence: ");
    
    fgets(str, sizeof(str), stdin);
    printf("Enter a word to remove: ");
    scanf("%s", word);
    
    
    removeWord(str, word);
    
    return 0;
}
