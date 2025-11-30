//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>
#include <stdlib.h>

// Define Employee structure
struct Employee {
    char name[50];
    int emp_id;
    float salary;
};

int main() {
    struct Employee employees[3], temp;
    FILE *fp;
    int i;

    // Input employee data
    for (i = 0; i < 3; i++) {
        printf("Enter details for employee %d:\n", i + 1);

        printf("Name: ");
        scanf("%49s", employees[i].name);

        printf("Employee ID: ");
        scanf("%d", &employees[i].emp_id);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        printf("\n");
    }

    // Write employee data to binary file
    fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }

    fwrite(employees, sizeof(struct Employee), 3, fp);
    fclose(fp);

    // Read employee data back from binary file
    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    printf("\n--- Employee Records from File ---\n");
    for (i = 0; i < 3; i++) {
        fread(&temp, sizeof(struct Employee), 1, fp);
        printf("Employee %d:\n", i + 1);
        printf("  Name     : %s\n", temp.name);
        printf("  ID       : %d\n", temp.emp_id);
        printf("  Salary   : %.2f\n\n", temp.salary);
    }

    fclose(fp);
    return 0;
}