#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int a = num / 100;
    int b = (num / 10) % 10;
    int c = num % 10;
    int result = (a < b && b < c) || (a > b && b > c);
    printf("%d", result);
    return 0;
}