#include <stdio.h>
#include <math.h>
int main()
{
    float p,r,t;
    printf("enter the principle amount: ");
    scanf("%f",&p);
    printf("enter the rate of interest: ");
    scanf("%f",&r);
    printf("enter the time period: ");
    scanf("%f",&t);
     
    float si=(p*r*t)/100;
    printf("Simple Interst: %f\n",si);

    float  ci=p*(pow((1+r/100),t) - 1);
    printf("Compound Interest: %f",ci);

    return 0;
}