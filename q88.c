#include <stdio.h>
#include <string.h>
int main() {
    char str[55];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }
    printf("Modified string: %s\n", str);
    return 0;
}