//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>
int main() {
    FILE *fp;
    int n, i;
    char name[50];
    int roll;
    float marks;
    printf("Enter number of students: ");
    scanf("%d", &n);
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not create file.\n");
        return 1;
    }
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", name);
        printf("Roll Number: ");
        scanf("%d", &roll);
        printf("Marks: ");
        scanf("%f", &marks);
        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }
    fclose(fp);
    printf("\nRecords saved successfully to students.txt\n");
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }
    printf("\n--- Student Records ---\n");
    while (fscanf(fp, "%s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}