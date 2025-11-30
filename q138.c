//Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/
#include <stdio.h>
// Define an enumeration
enum Status {
    SUCCESS = 1,
    FAILURE,
    TIMEOUT
};

// Array of enum names (strings)
const char* StatusNames[] = {
    "SUCCESS",
    "FAILURE",
    "TIMEOUT"
};

int main() {
    enum Status s;

    printf("Enum names and their integer values:\n");
    for (s = SUCCESS; s <= TIMEOUT; s++) {
        printf("%s = %d\n", StatusNames[s - 1], s);
    }

    return 0;
}