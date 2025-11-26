#include <stdio.h>
#define MAX 100
int main() {
    int matrix[MAX][MAX];
    int n, i, j;
    int sum = 0;
    printf("Enter the size of the square matrix (n): ");
    scanf("%d", &n);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        sum += matrix[i][i];
    }
    printf("Sum of main diagonal elements = %d\n", sum);
    return 0;
}