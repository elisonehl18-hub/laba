#include <stdio.h>

int main() {
    int A,B, temp;
    printf("ВВедите значение A:");
    scanf("%d", &B);

    temp = A;
    A = B;
    B = temp;

    printf("После обмена:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    return 0;
}