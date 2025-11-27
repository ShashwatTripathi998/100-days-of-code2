#include <stdio.h>
#include <string.h>
int main() {
    char str[55];
    int freq[20] = {0};
    int i;
    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if (freq[str[i] - 'a'] == 2) {
                printf("first repeating lowercaase alphabet: %c\n", str[i]);
                return 0;
            }
        }
    }
    printf("no repeating lowercase alphabet found.\n");
    return 0;
}