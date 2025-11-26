#include <stdio.h>
int main() {
    char str[55];
    int i, j;
    char temp;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }
    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("Reversed string: %s\n", str);
    return 0;
}
