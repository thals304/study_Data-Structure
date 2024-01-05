#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

// 구조체와 포인터
typedef struct strudentTag {
	char name[10];
	int age;
	double gpa;				// 평균평점
}student;
int main(void) {
	
	student* s;
	s = (student*)malloc(sizeof(student));

	if (s == NULL) {
		fprintf(stderr, "메모리가 부족해서 할당할 수 없습니다.\n");		// 버퍼 없이 바로 error 출력
		exit(1);
	}

	strcpy(s->name, "KIM");				// 구조체를 가리키는 포인터의 표기: -> 
	s->age = 23;
	
	free(s);
	return 0;
}