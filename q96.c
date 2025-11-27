#include <stdio.h>
#include <string.h>
#include <ctype.h>
void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    char *wordStart = NULL;
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i]) && wordStart == NULL) {
            wordStart = &str[i];
        }
        if ((isspace(str[i]) || str[i+1] == '\0') && wordStart != NULL) {
            char *wordEnd;
            if (isspace(str[i]))
                wordEnd = &str[i-1];
            else
                wordEnd = &str[i];
            reverseWord(wordStart, wordEnd);
            wordStart = NULL;
        }
    }
    printf("Sentence after reversing each word: %s\n", str);
    return 0;
}