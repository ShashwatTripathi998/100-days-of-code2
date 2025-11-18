#include <stdio.h>

int main() {
    char ch;     
    printf("Enter a binary number: ");

    while ((ch = getchar()) != '\n' && ch != EOF) {  
        if (ch == '0') {          
            putchar('1');          
        } else if (ch == '1') {      
            putchar('0');    
        } else {      
            printf("\nInvalid input\n");
            return 1; 
        }
    }
    putchar('\n');
    return 0;
}