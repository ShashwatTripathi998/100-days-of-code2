#include <stdio.h>
int main() {
    int num, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    // Find all proper divisors and sum them
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    // Check if sum of divisors equals the number
    if (sum == num)
        printf("%d is a perfect number.\n", num);
    else
        printf("%d is not a perfect number.\n", num);

    return 0;
}
