#include <stdio.h>

int main(void)
{
	int num[10];
	int i, j, cnt;

	printf("���� 10�� �Է� : ");
	for (i = 0; i < 10; i++)
		scanf_s("%d", &num[i]);
	for (i = 0; i < 10; i++) {
		cnt = 0;
		for (j = 0; j < 10; j++) {
			if (num[i] < num[j])
				cnt++;
		}
		printf("%d���� ū ������ ���� : %d\n", num[i], cnt);
	}

	printf("\n");

	return 0;
}
