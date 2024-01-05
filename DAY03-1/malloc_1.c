#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define SIZE 10
// malloc을 이용해 정수 10을 저장할 수 있는 동적 메모리를
//할당하고 free를 이용해 메모리 반납
int main(void) {
	int *p;
	p = (int*)malloc(SIZE * sizeof(int));	// 동적 메모리 할당

	if (p == NULL) {
		fprintf(stderr, "메모리가 부족해서 할당할 수 없습니다.\n");
		exit(1);
	}

	for (int i = 0; i < SIZE; i++) {	// 동적 메모리 사용
		p[i] = i;
	}
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", p[i]);
	}

	free(p);							// 동적 메모리 반납
	return 0;
}