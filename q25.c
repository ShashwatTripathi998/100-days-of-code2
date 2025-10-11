#include <stdio.h>
int main()
{
    int a,b;
    int operator;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    printf("enter operator(1 for +, 2 for -, 3 for *, 4 for /, 5 for %%):");
    scanf("%d",&operator);

    switch(operator)
    {
        case 1: printf("result:%d",a+b);
                break;
        case 2: printf("result:%d\n",a-b);
                break;
        case 3: printf("result:%d\n",a*b);
                break;
        case 4: if(b!=0)
                printf("result:%d\n",a/b);
                else
                printf("division by zero is not possible\n");
                break;
        case 5: if(b!=0)
                printf("result:%d\n",a%b);
                else
                printf("modulus by zero is not possible\n");
                break;
    }
    return 0;
}
