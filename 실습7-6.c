#include <stdio.h>

int a(int num1, int num2);
int main(void)
{
	int num1, num2, max;
	printf("ù��° ������ �Է� : ");
	scanf_s("%d", &num1);
	printf("�ι�° ������ �Է� : ");
	scanf_s("%d", &num2);
	max = a(num1, num2);
	printf("%d�� %d �� ū ���� %d�Դϴ�.", num1, num2, max);

	printf("\n");

	return 0;
}
int a(int num1, int num2) {
	int max;
	max = num1 > num2 ? num1 : num2;
	return max;
}