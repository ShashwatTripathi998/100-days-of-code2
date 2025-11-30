//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>
enum UserRole { ADMIN = 1, USER, GUEST };

int main() {
    enum UserRole role;

    printf("Select a role:\n");
    printf("1. ADMIN\n");
    printf("2. USER\n");
    printf("3. GUEST\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &role);

    switch (role) {
        case ADMIN:
            printf("Role: ADMIN -> You have full access.\n");
            break;
        case USER:
            printf("Role: USER -> You have limited access.\n");
            break;
        case GUEST:
            printf("Role: GUEST -> You have view-only access.\n");
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}