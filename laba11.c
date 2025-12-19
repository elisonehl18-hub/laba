#include <stdio.h>
#include <math.h>

double Power1(double A, double B) {
    if (A <= 0) return 0;
    return exp(B * log(A));
}

int main() {
    double P, A, B, C;
    scanf("%lf %lf %lf %lf", &P, &A, &B, &C);
    printf("%.2lf %.2lf %.2lf", Power1(A, P), Power1(B, P), Power1(C, P));
    return 0;
}