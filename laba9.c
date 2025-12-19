#include <stdio.h>
#include <limits.h>

int main() {
    int M, N;
    scanf("%d %d", &M, &N);
    int matrix[M][N];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int min_col = 0, max_col = 0;
    int min_val = INT_MAX, max_val = INT_MIN;
    for (int j = 0; j < N; j++) {
        for (int i = 0; i < M; i++) {
            if (matrix[i][j] < min_val) {
                min_val = matrix[i][j];
                min_col = j;
            }
            if (matrix[i][j] > max_val) {
                max_val = matrix[i][j];
                max_col = j;
            }
        }
    }
    if (min_col != max_col) {
        for (int i = 0; i < M; i++) {
            int temp = matrix[i][min_col];
            matrix[i][min_col] = matrix[i][max_col];
            matrix[i][max_col] = temp;
        }
    }
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}