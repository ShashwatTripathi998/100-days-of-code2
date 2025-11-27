#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[200];
    char longest[50];
    int maxLen = 0, currentLen = 0;
    int i, j = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    char word[50];
    for (i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i])) {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            currentLen = strlen(word);
            if (currentLen > maxLen) {
                maxLen = currentLen;
                strcpy(longest, word);
            }
            j = 0;
        }
    }
    word[j] = '\0';
    currentLen = strlen(word);
    if (currentLen > maxLen) {
        maxLen = currentLen;
        strcpy(longest, word);
    }
    if (maxLen > 0) {
        printf("Longest word: %s\n", longest);
        printf("Length: %d\n", maxLen);
    } else {
        printf("No words found.\n");
    }
    return 0;
}