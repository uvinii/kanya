#include <stdio.h>

int main(void)
{
	int a;
	int s = 0;

	printf("10�̻��� ���� �Է� : ");
	scanf_s("%d", &a);

	while (a >= 10)
	{
		s = 0;
		while (a) {
			s += a % 10;
			a /= 10;
		}
		a = s;
	}
	printf("�����б��� %d �̴�.", a);

	printf("\n");

	return 0;
}