#include <stdio.h>
#include <string.h>

void deleteWord(char *sentence, const char *word) {
    int sentenceLength = strlen(sentence);
    int wordLength = strlen(word);
    int i, j, k;

    for (i = 0; i <= sentenceLength - wordLength; i++) {
        for (j = 0; j < wordLength; j++) {
            if (sentence[i + j] != word[j]) {
                break;
            }
        }

        if (j == wordLength) {
            for (k = i; k < sentenceLength - wordLength; k++) {
                sentence[k] = sentence[k + wordLength];
            }
            sentence[sentenceLength - wordLength] = '\0';
            sentenceLength -= wordLength;
            i--;
        }
    }
}

int main() {
    char sentence[100];
    char word[20];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Enter the word to delete: ");
    fgets(word, sizeof(word), stdin);

    // Remove newline characters from inputs
    sentence[strcspn(sentence, "\n")] = '\0';
    word[strcspn(word, "\n")] = '\0';

    deleteWord(sentence, word);

    printf("Modified sentence: %s\n", sentence);

    return 0;
}