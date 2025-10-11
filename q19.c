#include <stdio.h>
int main()
{
    int side1,side2,side3;
    printf("enter the first side:");
    scanf("%d",&side1);
    printf("enter the second side:");
    scanf("%d",&side2);
    printf("enter the third side:");
    scanf("%d",&side3);
    if(side1 == side2 && side2 == side3)
    {
        printf("the triangle is an eqilateral triangle");
    }
    else if(side1 == side2 || side2 == side3 || side1 == side3)
    {
        printf("the triangle is an isosceles triangle");
    }
    else
    {
        printf("the triangle is a scalene triangle");
    }
    return 0;
}

