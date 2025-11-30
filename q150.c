//Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/
#include <stdio.h>
#include <stdlib.h>

// define the structure
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    // dynamically allocate memory for one Student
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // modify structure members using -> operator
    printf("Enter student's name: ");
    scanf("%49s", s->name);

    printf("Enter roll number: ");
    scanf("%d", &s->roll_no);

    printf("Enter marks: ");
    scanf("%f", &s->marks);

    // display structure members using -> operator
    printf("\n--- Student Details ---\n");
    printf("Name     : %s\n", s->name);
    printf("Roll No  : %d\n", s->roll_no);
    printf("Marks    : %.2f\n", s->marks);

    // free allocated memory
    free(s);
    return 0;
}