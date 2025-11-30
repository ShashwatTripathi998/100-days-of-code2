//Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/
#include <stdio.h>

// define Date structure
struct Date {
    int day;
    int month;
    int year;
};

// define Employee structure with nested Date
struct Employee {
    char name[50];
    int emp_id;
    struct Date joining_date;
};

int main() {
    struct Employee e;
    printf("Enter employee name: ");
    scanf("%49s", e.name);

    printf("Enter employee ID: ");
    scanf("%d", &e.emp_id);

    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d %d %d", &e.joining_date.day, &e.joining_date.month, &e.joining_date.year);

    // Print employee details
    printf("\n--- Employee Details ---\n");
    printf("Name          : %s\n", e.name);
    printf("Employee ID   : %d\n", e.emp_id);
    printf("Joining Date  : %02d-%02d-%04d\n",
           e.joining_date.day, e.joining_date.month, e.joining_date.year);

    return 0;
}
