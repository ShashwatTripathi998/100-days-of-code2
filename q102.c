#include <stdio.h>
int shashwat(int arr[], int n, int x) {     // here  i made a function named shashwat that finds ceil index of x  
    int low = 0, high = n - 1;
    int result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return result;
}
int main() {
    int arr[100], n, x;
    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);
    printf("Enter %d sorted elements (ascending order):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter x: ");
    scanf("%d", &x);
    int index = shashwat(arr, n, x);
    if (index == -1) {
        printf("-1\n");
    } else {
        printf("Ceil of %d is arr[%d] = %d\n", x, index, arr[index]);
    }
    return 0;
}