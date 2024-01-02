#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
// 반복문 사용한 팩토리얼
int main(void) {
	int n,i,result = 1;
	scanf("%d", &n);
	
	for (i = n; i >= 1; i--) {
		result = result * i;
	}
	printf("%d! = %d\n", n, result);
	return 0;
}