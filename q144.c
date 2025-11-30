//Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// function that accepts a structure and prints its members
void printStudent(struct Student s) {
    printf("\n--- Student Details ---\n");
    printf("Name     : %s\n", s.name);
    printf("Roll No  : %d\n", s.roll_no);
    printf("Marks    : %.2f\n", s.marks);
}

int main() {
    struct Student s1;

    // read student data
    printf("Enter student's name: ");
    scanf("%49s", s1.name);

    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    // pass structure to function
    printStudent(s1);

    return 0;
}