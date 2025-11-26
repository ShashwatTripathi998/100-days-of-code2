#include <stdio.h>
int main() {
    int n, i;   // l = largest and sl = second largest
    int l, sl;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    if (n < 2) {
        printf("Array must contain at least two elements.\n");
        return 0;
    }
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if (arr[0] > arr[1]) {
        l = arr[0];
        sl = arr[1];
    } else {
        l = arr[1];
        sl = arr[0];
    }
    for (i = 2; i < n; i++) {
        if (arr[i] > l) {
            sl = l;
            l = arr[i];
        } else if (arr[i] > sl && arr[i] != l) {
            sl = arr[i];
        }
    }
    printf("The second largest element is: %d\n", sl);
    return 0;
}