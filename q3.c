#include<stdio.h>
int main() {
    int length, width, area, perimeter;
    printf("Enter the Length:");
    scanf("%d", &length);
    printf("Enter the Width:");
    scanf("%d", &width);
    area=length*width;
    perimeter=2*(length+width);
    printf("Area=%d and Perimeter=%d", area , perimeter);
    return 0;
}