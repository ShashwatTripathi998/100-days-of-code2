#include <stdio.h>
#include <math.h>
int main() {
    int n, a, b, isPrime;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Prime numbers from 1 to %d are:\n", n);
    for (a = 2; a <= n; a++) {
        isPrime = 1;
        for (b = 2; b <= sqrt(a); b++) {
            if (a % b == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            printf("%d ", a);
        }
    }
    printf("\n");
    return 0;
}