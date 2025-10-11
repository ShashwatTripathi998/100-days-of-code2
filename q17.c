#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;

    // Input coefficients
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Check for valid quadratic equation
    if (a == 0) {
        printf("Invalid input: Not a quadratic equation.\n");
        return 1;
    }

    // Calculate discriminant
    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        printf("Roots are real and distinct.\n");
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else if (discriminant == 0) {
        printf("Roots are real and equal.\n");
        root1 = -b / (2*a);
        printf("Root = %.2lf\n", root1);
    } else {
        printf("Roots are complex and imaginary.\n");
        realPart = -b / (2*a);
        imagPart = sqrt(-discriminant) / (2*a);
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}
 