#include <stdio.h>
#include <string.h>

void reverseWords(char sentence[]) {
    char words[100][100]; // array to store words
    int wordCount = 0;
    int sentenceLength = strlen(sentence);
    int wordStart = 0;

    // Split sentence into words
    for (int i = 0; i < sentenceLength; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            int wordLength = i - wordStart;
            strncpy(words[wordCount], sentence + wordStart, wordLength);
            words[wordCount][wordLength] = '\0';
            wordCount++;
            wordStart = i + 1;
        }
    }

    // Print words in reverse order
    for (int i = wordCount - 1; i >= 0; i--) {
        printf("%s ", words[i]);
    }
}

int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0'; // remove trailing newline character
    reverseWords(sentence);
    return 0;
}