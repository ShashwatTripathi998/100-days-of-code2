#include <stdio.h>
#define M 100
int main() {
    int matrix[M][M];
    int n;
    printf("Enter the size of the square matrix (n): ");
    scanf("%d", &n);
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nDiagonal Traversal of the matrix:\n");
    for (int col = 0; col < n; col++) {
        int i = 0, j = col;
        while (i < n && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }
    for (int row = 1; row < n; row++) {
        int i = row, j = n - 1;
        while (i < n && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }
    return 0;
}