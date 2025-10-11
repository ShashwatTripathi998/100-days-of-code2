#include <stdio.h>
int main()
{
    int units,bill;
    printf("enter the number of units consumed: ");
    scanf("%d",&units);
    if(units<=100)
    {
        bill = 5*units;
        printf("the electricity bill is: %d",bill);
    }
    else if(units>100 && units<=200)
    {
        bill = 7*units;
        printf("the electricity bill is: %d",bill);
    }
    else if(units>200 && units<=300)
    {
        bill = 10*units;
        printf("the electricity bill is: %d",bill);
    }
    else
    {
        bill = 12*units;
        printf("the electricity bill is: %d",bill);
    }
    return 0;
}
