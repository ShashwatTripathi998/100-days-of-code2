//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>

// define the structure
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// function to find and return the top student
struct Student findTopStudent(struct Student students[], int n) {
    int i, maxIndex = 0;

    for (i = 1; i < n; i++) {
        if (students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }

    return students[maxIndex]; 
}

int main() {
    struct Student students[5];
    int i;
    for (i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf("%49s", students[i].name);

        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        printf("\n");
    }

    // get the top student
    struct Student topper = findTopStudent(students, 5);

    // Print top student details
    printf("\n--- Top Student ---\n");
    printf("Name     : %s\n", topper.name);
    printf("Roll No  : %d\n", topper.roll_no);
    printf("Marks    : %.2f\n", topper.marks);

    return 0;
}