#include <stdio.h>
int main() {
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int totalSum = 0;
    for (i = 0; i < n; i++) {
        totalSum += arr[i];
    }
        int leftSum = 0;
    int pivotIndex = -1;
    for (i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];
        if (leftSum == rightSum) {
            pivotIndex = i;
            break;
        }
        leftSum += arr[i];
    }
    printf("Pivot Index = %d\n", pivotIndex);
    return 0;
}