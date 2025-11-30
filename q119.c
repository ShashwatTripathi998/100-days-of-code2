//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (with exactly one repeated):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int visited[n];
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    int repeated = -1;
    for (int i = 0; i < n; i++) {
        if (visited[arr[i]] == 1) {
            repeated = arr[i];
            break;
        } else {
            visited[arr[i]] = 1;
        }
    }

    if (repeated != -1) {
        printf("Repeated element = %d\n", repeated);
    } else {
        printf("No repetition found\n");
    }
    return 0;
}