#include <stdio.h>
//�ؼ�, ���� �޾� �ŵ����� ���ϱ� 
int expon(int x, int y);

int main(void) {
	int x, y;
	scanf("%d", &x);	// ��
	scanf("%d", &y);	// ����
	printf("x ^ y = %d", expon(x, y));
	return 0;
}
int expon(int x, int y) {
	if (x == 1 || y == 0) return 1;
	else return x * expon(x, y - 1);
}