#include <stdio.h>

int main() {
    int a, b, max;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Please enter positive integers only.\n");
        return 1;
    }

    max = (a > b) ? a : b;

    while (1) {
        if (max % a == 0 && max % b == 0) {
            printf("LCM of %d and %d is %d\n", a, b, max);
            break;
        }
        max++;
    }

    return 0;
}