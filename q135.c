//Q135: Assign explicit values starting from 10 and print them.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
A=10
B=11
C=12

*/
#include <stdio.h>
enum Numbers {
    FIRST = 10,
    SECOND = 20,
    THIRD = 30,
    FOURTH = 40,
    FIFTH = 50
};
int main() {
    printf("Enum values with explicit assignments:\n");
    printf("FIRST  = %d\n", FIRST);
    printf("SECOND = %d\n", SECOND);
    printf("THIRD  = %d\n", THIRD);
    printf("FOURTH = %d\n", FOURTH);
    printf("FIFTH  = %d\n", FIFTH);
    return 0;
}