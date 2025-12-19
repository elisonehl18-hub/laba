#include <stdio.h>

double SumCol(double A[100][100], int M, int N, int K) {
    if (K > N || K < 1) return 0;
    double sum = 0;
    for (int i = 0; i < M; i++) {
        sum += A[i][K-1];
    }
    return sum;
}

int main() {
    int M, N, K1, K2, K3;
    scanf("%d %d", &M, &N);
    double A[100][100];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%lf", &A[i][j]);
        }
    }
    scanf("%d %d %d", &K1, &K2, &K3);
    printf("%.2lf %.2lf %.2lf", 
           SumCol(A, M, N, K1), 
           SumCol(A, M, N, K2), 
           SumCol(A, M, N, K3));
    return 0;
}