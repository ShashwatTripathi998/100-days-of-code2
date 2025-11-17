#include <stdio.h>

void binary(int unsigned n) {           
                                    
    if (n > 1)
        binary(n / 2);               
                                      
                                      
    printf("%d", n % 2);
}

int main() {                            
     int unsigned num;                
    printf("Enter a number: ");        
    scanf("%u", &num);               
    
    binary(num);                 
    printf(" is binary representation of %d\n",num);
    return 0;
}
