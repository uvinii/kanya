#include <stdio.h>

void a(int num1, int num2);
int main(void)
{
	int num1, num2;
	printf("ù��° ������ �Է� : ");
	scanf_s("%d", &num1);
	printf("�ι�° ������ �Է� : ");
	scanf_s("%d", &num2);
	a(num1, num2);

	printf("\n");

	return 0;
}
void a(int num1, int num2) {
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
}