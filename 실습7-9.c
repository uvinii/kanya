#include <stdio.h>

void a(int num1);
int main(void)
{
	int num1;
	printf("초를 입력 : ");
	scanf_s("%d", &num1);
	a(num1);

	printf("\n");

	return 0;
}
void a(int num1) {
	int hour, min, sec;

	sec = num1 % 60;
	min = num1 / 60;
	hour = min / 60;
	min = min % 60;
	printf("%d시 : %d분 : %d초", hour, min, sec);
}