#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    while (num > 0) {
        digit = num % 10;   
        sum += digit;         
        num /= 10;            
    }

    printf("Sum of digits is %d\n", sum);
    return 0;
}
