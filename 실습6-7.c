#include <stdio.h>

int main(void)
{
	int a;
	int cnt = 0;

	printf("�ϳ��� ���� �Է� : ");
	scanf_s("%d", &a);

	for (int i = 1; i <= a; i++) {
		for (int j = i; j > 0; j /= 10) {
			if (j % 10 == 3) {
				cnt++;
			}
		}
	}
	printf("����3�� �� %d�� ����", cnt);

	printf("\n");

	return 0;
}