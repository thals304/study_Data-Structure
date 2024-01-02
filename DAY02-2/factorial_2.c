#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int factorial(int n);

int main(void) {
	int n;
	scanf("%d", &n);
	printf("%d! = %d", n, factorial(n));
	return 0;
}

int factorial(int n) {
	if (n == 1) return 1;
	else return (n*factorial(n - 1));
}