#include <stdio.h>

int main(void)
{
	int a;
	double num1, num2;
	double result;

	printf("1.���� 2.���� 3.���� 4.������\n");
	printf("����? ");
	scanf_s("%d", &a);
	printf("�� ���� �Ǽ� �Է� : ");
	scanf_s("%lf %lf", &num1, &num2);

	if (a == 1)
		result = num1 + num2;
	else if (a == 2)
		result = num1 - num2;
	else if (a == 3)
		result = num1 * num2;
	else if (a == 4)
		result = num1 / num2;

	printf("���: %f\n", result);

	return 0;
}
