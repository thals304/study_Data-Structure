#include <stdio.h>
//¹Ø¼ö, Áö¼ö ¹Þ¾Æ °ÅµìÁ¦°ö ±¸ÇÏ±â 
int expon(int x, int y);

int main(void) {
	int x, y;
	scanf("%d", &x);	// ¹Ø
	scanf("%d", &y);	// Áö¼ö
	printf("x ^ y = %d", expon(x, y));
	return 0;
}
int expon(int x, int y) {
	if (x == 1 || y == 0) return 1;
	else return x * expon(x, y - 1);
}