#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

// ����ü�� ������
typedef struct strudentTag {
	char name[10];
	int age;
	double gpa;				// �������
}student;
int main(void) {
	
	student* s;
	s = (student*)malloc(sizeof(student));

	if (s == NULL) {
		fprintf(stderr, "�޸𸮰� �����ؼ� �Ҵ��� �� �����ϴ�.\n");		// ���� ���� �ٷ� error ���
		exit(1);
	}

	strcpy(s->name, "KIM");				// ����ü�� ����Ű�� �������� ǥ��: -> 
	s->age = 23;
	
	free(s);
	return 0;
}