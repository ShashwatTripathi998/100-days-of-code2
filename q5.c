#include<stdio.h>
int main() {
    float c;
    printf("Enter the temp in celsius:");
    scanf("%f", &c);
    float f;
    f=(c*9/5)+32;
    printf("Temp in Fahrenheit=%f", f);
    return 0;
}