#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int charCount = 0;
    int lineCount = 0;

    // Open the file in read mode
    file = fopen("filename.txt", "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 0;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        charCount++;

        // Check for new line character
        if (ch == '\n') {
            lineCount++;
        }
    }

    // Close the file
    fclose(file);

    printf("Number of characters: %d\n", charCount);
    printf("Number of lines: %d\n", lineCount);

    return 0;
}