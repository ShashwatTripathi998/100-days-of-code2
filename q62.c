#include <stdio.h>
int main() {
    int arr[100], n, i, x;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n/2; i++) {
        x = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = x;
    }
    printf("Reversed array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}