#include <stdio.h>
int main()
{
    int marks;
    printf("enter your marks: ");
    scanf("%d",&marks);
    if(marks>=90)
    {
        printf("A Grade\n");
    }
    else if(marks>=70)
    {
        printf("B Grade\n");
    }
    else if(marks>=50)
    {
        printf("C Grade\n");
    }
    else if(marks>=33)
    {
        printf("D Grade\n");
    }
    else if(marks<33)
    {
        printf("Failed\n");
    }
    return 0;
}
