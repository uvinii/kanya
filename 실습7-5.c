#include <stdio.h>

int a(int num1, int num2);
int main(void)
{
	int num1, num2, sum;
	printf("ù��° ������ �Է� : ");
	scanf_s("%d", &num1);
	printf("�ι�° ������ �Է� : ");
	scanf_s("%d", &num2);
	sum = a(num1, num2);
	printf("�� ���� ���� %d�Դϴ�.", sum);

	printf("\n");

	return 0;
}
int a(int num1, int num2) {
	int sum = num1 + num2;

	return sum;
}