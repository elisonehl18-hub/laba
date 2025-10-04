#include <stdio.h>
 
int main(void) {
	int a, P;
	scanf("%d", &a); //берем от пользователя сторону
	P = 4 * a;
	printf("Периметр квадрата: %d", P);
	return 0;
}