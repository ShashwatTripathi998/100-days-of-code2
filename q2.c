#include <stdio.h>

int main() {
    float num1, num2;

    // Ask user for input
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform operations
    float sum = num1 + num2;
    float difference = num1 - num2;
    float product = num1 * num2;

    // Check for division by zero
    if (num2 != 0) {
        float division = num1 / num2;
        printf("Division: %.2f\n", division);
    } else {
        printf("Division: Cannot divide by zero!\n");
    }

    // Display results
    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", difference);
    printf("Product: %.2f\n", product);

    return 0;
}