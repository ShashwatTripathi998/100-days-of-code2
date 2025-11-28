#include <stdio.h>
int firstoccur(int nums[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            result = mid;
            high = mid - 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}
int lastoccur(int nums[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            result = mid;
            low = mid + 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}
int main() {
    int nums[100], n, target;
    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);
    printf("Enter %d sorted elements (ascending order):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Enter target element: ");
    scanf("%d", &target);
    int first = firstoccur(nums, n, target);
    int last = lastoccur(nums, n, target);
    if (first == -1 || last == -1) {
        printf("Target not found: -1, -1\n");
    } else {
        printf("First occur at index: %d\n", first);
        printf("Last occur at index: %d\n", last);
    }
    return 0;
}