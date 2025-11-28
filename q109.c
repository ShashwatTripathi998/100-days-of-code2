#include <stdio.h>
int main() {
    int n, k, i;
    printf("Enter the number of elements");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter subarray size k: ");
    scanf("%d", &k);
    if (k > n || k <= 0) {
        printf("Invalid subarray size!\n");
        return 0;
    }
    int summ = 0;
    for (i = 0; i < k; i++) {
        summ += arr[i];
    }
    int maxSum = summ;
    for (i = k; i < n; i++) {
        summ += arr[i] - arr[i - k];
        if (summ > maxSum) {
            maxSum = summ;
        }
    }
    printf("maximum sum of subarrays of size %d is %d\n", k, maxSum);
    return 0;
}