#include <stdio.h>

int a(int num1, int num2);
int main(void)
{
	int num1, num2, max;
	printf("첫번째 정수를 입력 : ");
	scanf_s("%d", &num1);
	printf("두번째 정수를 입력 : ");
	scanf_s("%d", &num2);
	max = a(num1, num2);
	printf("%d와 %d 중 큰 수는 %d입니다.", num1, num2, max);

	printf("\n");

	return 0;
}
int a(int num1, int num2) {
	int max;
	max = num1 > num2 ? num1 : num2;
	return max;
}