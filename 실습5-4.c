#include <stdio.h>

int main(void)
{
	int a;

	printf("����� Ȯ���� ���� �Է� : ");
	scanf_s("%d", &a);

	if (a == 0) {
		printf("�Է¹��� �� %d�� 3�ǹ���� 4�ǹ���� �ƴϴ�.\n", a);
	}
	else if (a % 3 == 0 && a % 4 == 0) {
		printf("�Է¹��� �� %d�� 3�ǹ���̸鼭 4�ǹ���̴�.\n", a);
	}
	else if (a % 3 == 0) {
		printf("�Է¹��� �� %d�� 3�ǹ���̴�.\n", a);
	}
	else if (a % 4 == 0) {
		printf("�Է¹��� �� %d�� 4�ǹ���̴�.\n", a);
	}
	else if (a % 3 != 0 && a % 4 != 0) {
		printf("�Է¹��� �� %d�� 3�ǹ���� 4�ǹ���� �ƴϴ�.\n", a);
	}

	return 0;
}
