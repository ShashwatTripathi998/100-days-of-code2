#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char name[100];
    int i;
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    int len = strlen(name);
    int lastSpace = -1;
    for (i = 0; i < len; i++) {
        if (isspace(name[i])) {
            lastSpace = i;
        }
    }
    printf("Formatted name: ");
    if (isalpha(name[0])) {
        printf("%c.", toupper(name[0]));
    }
    for (i = 1; i < len; i++) {
        if (isspace(name[i]) && i < lastSpace && isalpha(name[i + 1])) {
            printf("%c.", toupper(name[i + 1]));
        }
    }
    if (lastSpace != -1) {
        printf("%s", &name[lastSpace + 1]);
    }
    printf("\n");
    return 0;
}