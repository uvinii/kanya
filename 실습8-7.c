#include <stdio.h>

int main(void)
{
	int x[10], y[10], z[10];
	int i, j;

	printf("�迭X�� ���� 10�� �Է� : ");
	for (i = 0; i < 10; i++)
		scanf_s("%d", &x[i]);

	printf("�迭Y�� ���� 10�� �Է� : ");
	for (i = 0; i < 10; i++)
		scanf_s("%d", &y[i]);

	for (i = 0; i < 10; i++)
		z[i] = x[i] + y[i];
	for (i = 0; i < 10; i++)
		printf("�� �迭�� %d��° ������ �� : %d\n", i, z[i]);

	printf("\n");

	return 0;
}
