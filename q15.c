#include <stdio.h>
int main()
{
    char ch;
    printf("enter a character: ");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z'))
    {
        printf("%c is an lowercase alphabet",ch);
    }
    else if(ch >='A' && ch<='Z')
    {
        printf("%c is an uppercase alphabet",ch);
    }
    else if(ch >='0'&& ch<='9')
    {
        printf("%c is a digit",ch);
    }
    else
    {
        printf("%c is a special character",ch);
    }
    return 0;
}

