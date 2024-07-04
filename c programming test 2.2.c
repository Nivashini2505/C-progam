#include <stdio.h>
#include <string.h>

void reverseSentence(char sentence[]) {
    int length = strlen(sentence);
    int start = 0;
    int end = length - 1;

    // Reverse the whole sentence
    while (start < end) {
        char temp = sentence[start];
        sentence[start] = sentence[end];
        sentence[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove the newline character from fgets
    sentence[strcspn(sentence, "\n")] = '\0';

    reverseSentence(sentence);

    printf("Reversed sentence: %s\n", sentence);

    return 0;
}