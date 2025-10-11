#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Sum of first n odd numbers is n*n
    sum = n * n;

    // Print the result
    printf("%d\n", sum);

    return 0;
}
