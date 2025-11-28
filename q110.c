#include <stdio.h>
int main() {
    int n, k, i, j;
    printf("Enter the number of elements");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter window size k");
    scanf("%d", &k);
    if (k > n || k <= 0) {
        printf("wrong window size\n");
        return 0;
    }
    printf("Maximum elements of each subarray of size %dis\n", k);
    for (i = 0; i <= n - k; i++) {
        int maxx = arr[i];
        for (j = i + 1; j < i + k; j++) {
            if (arr[j] > maxx) {
                maxx = arr[j];
            }
        }
        printf("%d ", maxx);
    }
    printf("\n");
    return 0;
}