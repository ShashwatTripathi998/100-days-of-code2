#include<stdio.h>
int main() {
    float P, R, T, SI, CI;
    printf("Enter the value of Priciple:");
    scanf("%f", &P);
    printf("Enter the value of Rate:");
    scanf("%f", &R);
    printf("Enter the value of Time:");
    scanf("%f", &T);
    SI=(P*R*T)/100;
    CI=P*pow((1+R/100), T) -P;
    printf("Simple intrest is: %f and Compound intrest is: %f" SI , CI);
    return 0;
    }