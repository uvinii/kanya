#include <stdio.h>

void a(int num1);
int main(void)
{
	int num1;
	printf("�ʸ� �Է� : ");
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
	printf("%d�� : %d�� : %d��", hour, min, sec);
}