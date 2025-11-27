#include <stdio.h>
#include <string.h>
#include <ctype.h>
int areAnagrams(char str1[], char str2[]) {
    int freq[26] = {0};
    int i;
    for (i = 0; str1[i] != '\0'; i++) {
        if (isalpha(str1[i])) {
            freq[tolower(str1[i]) - 'a']++;
        }
    }
    for (i = 0; str2[i] != '\0'; i++) {
        if (isalpha(str2[i])) {
            freq[tolower(str2[i]) - 'a']--;
        }
    }
    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    if (areAnagrams(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }
    return 0;
}