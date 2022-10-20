#include <stdio.h>

int a(int num1, int num2);
int main(void)
{
	int num1, num2, sum;
	printf("첫번째 정수를 입력 : ");
	scanf_s("%d", &num1);
	printf("두번째 정수를 입력 : ");
	scanf_s("%d", &num2);
	sum = a(num1, num2);
	printf("두 수의 합은 %d입니다.", sum);

	printf("\n");

	return 0;
}
int a(int num1, int num2) {
	int sum = num1 + num2;

	return sum;
}