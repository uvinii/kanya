#include <stdio.h>

int main(void)
{
	int a;

	printf("���� �Է� : ");
	scanf_s("%d", &a);

	if (a <= 100 && a >= 80) {
		printf("����� : A\n");
	}
	else if (a <= 100 && a >= 60) {
		printf("����� : B\n");
	}
	else if (a <= 100 && a >= 40) {
		printf("����� : C\n");
	}
	else if (a <= 100 && a >= 20) {
		printf("����� : D\n");
	}
	else if (a <= 100 && a >= 0) {
		printf("����� : E\n");
	}
	else {
		printf("�߸� �Է��Ͽ����ϴ�.\n");
	}

	return 0;
}
