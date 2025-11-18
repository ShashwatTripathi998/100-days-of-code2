#include<stdio.h>
int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {         // Outer loop for rows
        for (j = 1; j <= 5; j++) {     // Inner loop for columns
            printf("*");
        }
        printf("\n");                  // Move to next line after each row
    }

    return 0;
}