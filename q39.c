#include <stdio.h>
int main() {
    int num, digit, product = 1;
    int hasOdd = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    if (num == 0) {
        printf("Product of odd digits is 0\n");
        return 0;
    }

    while (num > 0) {
        digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;
    }

    if (hasOdd)
        printf("Product of odd digits is %d\n", product);
    else
        printf("No odd digits found. Product is undefined.\n");

    return 0;
}
