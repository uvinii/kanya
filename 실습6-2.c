#include <stdio.h>

int main(void)
{
	int a, sum = 0;

	do
	{
		printf("���� ���� ���� �Է�(�ݺ����� ���� 0) : ");
		scanf_s("%d", &a);

		sum += a;
	} while (a != 0);

	printf("�� : %d\n", sum);

	return 0;
}