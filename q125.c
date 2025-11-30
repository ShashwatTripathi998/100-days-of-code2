//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>
int main() {
    char filename[100];
    char newLine[256];
    FILE *fp;
    printf("Enter filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }
    getchar();  
    printf("Enter a new line of text: ");
    fgets(newLine, sizeof(newLine), stdin);
    fprintf(fp, "%s", newLine);
    fclose(fp);
    printf("Text successfully appended to %s\n", filename);
    return 0;
}