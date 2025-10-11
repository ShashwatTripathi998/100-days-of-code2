#include <stdio.h>
int main()
{
    int n;
    printf("enter any number: ");
    scanf("%d", &n);
    int rev=0;
    while(n!=0)
    {
        int digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    printf("reversed number is: %d\n", rev);
    return 0;
}
