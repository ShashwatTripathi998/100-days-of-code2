#include <stdio.h>
int main()
{
    int a=5;
    int b=14;

    int temp=a;
    a=b;
    b=temp;

    printf("a=%d, b=%d",a,b);
}