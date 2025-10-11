#include <stdio.h>
int main()
{
    int fine,days;
    printf("Enter the number of days the book is late: ");
    scanf("%d",&days);
    if(days<=5)
    {
        fine=2*days;
        printf("the fine is %d",fine);
    }
    else if(days>5 && days<=10)
    {
        fine = 4*days;
        printf("the fine is %d",fine);
    }
    else if(days>10 && days<=30)
    {
        fine = 6*days;
        printf("the fine is %d",fine);
    }
    else
    {
        printf("the membership is cancelled");
    }

    return 0;
}

