#include <stdio.h>
#include <math.h>

int main() {
    double X, sum = 0;
    int N;
    scanf("%lf %d", &X, &N);
    for (int i = 1; i <= N; i++) {
        double term = pow(-1, i-1) * pow(X, i) / i;
        sum += term;
    }
    printf("%lf", sum);
    return 0;
}