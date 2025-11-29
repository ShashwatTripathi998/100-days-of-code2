/*Write a program to take an integer array arr and an integer k as inputs. 
The task is to find the first negative integer in each subarray of size k moving from left to right.
If no negative exists in a window, print "0" for that window. Print the results separated by
spaces as output.*/
#include <stdio.h>
#define MAX 1000
void printFirstNegatives(int arr[], int n, int k) {
    int queue[MAX];
    int front = 0, rear = 0;
    for (int i = 0; i < k; i++) {
        if (arr[i] < 0) {
            queue[rear++] = i;
        }
    }
    for (int i = k; i <= n; i++) {
        if (front != rear) {
            printf("%d ", arr[queue[front]]);
        } else {
            printf("0 ");
        }
        while (front != rear && queue[front] <= i - k) {
            front++;
        }
        if (i < n && arr[i] < 0) {
            queue[rear++] = i;
        }
    }
}
int main() {
    int n, k;
    int arr[MAX];
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter window size k: ");
    scanf("%d", &k);
    printFirstNegatives(arr, n, k);
    return 0;
}