#include <stdio.h>

void a(int num);
int main(void)
{
	int num;
	printf("������ �Է� : ");
	scanf_s("%d", &num);
	a(num);

	printf("\n");

	return 0;
}
void a(int num) {
	if (num % 2 == 0) {
		printf("�Է��� ���� %d�� ¦���Դϴ�.", num);
	}
	else {
		printf("�Է��� ���� %d�� Ȧ���Դϴ�.", num);
	}
}