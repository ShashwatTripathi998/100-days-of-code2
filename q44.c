#include<stdio.h>
int main() {
    int n, i;
    float numerator = 1, denominator = 2, term, sum = 0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number of terms.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        term = numerator / denominator;
        sum += term;

        numerator += 2;
        denominator += 2;
    }

    printf("Sum of the series up to %d terms is: %.4f\n", n, sum);
    return 0;
}