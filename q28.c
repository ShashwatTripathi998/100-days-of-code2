#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    int product = 1;
    for(int i=2;i<=n;i+=2)
    {
        product = product*i;
    }
    printf("product of first %d even numbers is: %d",n,product);
    return 0;
}
