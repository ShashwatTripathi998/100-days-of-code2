//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>
enum Status { SUCCESS, FAILURE, TIMEOUT };
int main() {
    enum Status result;
    for (result = SUCCESS; result <= TIMEOUT; result++) {
        switch (result) {
            case SUCCESS:
                printf("Status: SUCCESS -> Operation completed successfully.\n");
                break;
            case FAILURE:
                printf("Status: FAILURE -> Operation failed.\n");
                break;
            case TIMEOUT:
                printf("Status: TIMEOUT -> Operation timed out.\n");
                break;
        }
    }
    return 0;
}