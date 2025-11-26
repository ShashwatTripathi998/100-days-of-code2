#include <stdio.h>
#include <stdbool.h>
#define MAX 100
bool checkDistinctDiagonal(int matrix[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                return false;
            }
        }
    }
    return true;
}
int main() {
    int n;
    int matrix[MAX][MAX];
    printf("Enter the size of the square matrix (n): ");
    scanf("%d", &n);
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    if (checkDistinctDiagonal(matrix, n)) {
        printf("All diagonal elements are distinct.\n");
    } else {
        printf("Diagonal elements are NOT distinct.\n");
    }
    return 0;
}
