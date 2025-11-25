#include <stdio.h>
int main() {
    int i, j, k;
    int n = 5;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (k = 6 - i; k <= 5; k++) {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}