#include <stdio.h>
#include <string.h>
int main() {
    char str[55];
    char ch;
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf("The character '%c' appears %d times in the string.\n", ch, count);
    return 0;
}