#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// ���� CPU �ð� ���
int main(void)
{
	clock_t start, stop;
	double duration;
	start = clock();	// ���� ����

	for (int i = 0; i < 1000000; i++)	//�ǹ� ���� �ݺ� ����
		;
	stop = clock();	// ���� ����
	duration = (double)(stop - start) / CLOCKS_PER_SEC;
	printf("����ð��� %f�� �Դϴ�", duration);
	return 0;
}