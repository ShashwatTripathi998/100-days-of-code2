//Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char s[1000];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    size_t len = strlen(s);
    if (len > 0 && s[len-1] == '\n') {
        s[len-1] = '\0';
    }
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = tolower((unsigned char)s[i]);
    }
    for (int i = 0; s[i] != '\0'; i++) {
        if (!isspace((unsigned char)s[i])) {
            s[i] = toupper((unsigned char)s[i]);
            break;
        }
    }

    printf("Sentence case: %s\n", s);
    return 0;
}