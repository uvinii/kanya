#include <stdio.h>

int main(void)
{
	int a;

	printf("�µ� �Է� : ");
	scanf_s("%d", &a);

	if (a < 0) {
		printf("�ǳ� Ȱ��");
	}
	else if (a >= 0 && a < 40) {
		printf("�ǿ� Ȱ��");
	}
	else if (a >= 40) {
		printf("�ǳ� Ȱ��");
	}
	

	return 0;
}
