#include <stdio.h>

int main(void)
{
	int a, sum = 0;

	do
	{
		printf("합을 구할 정수 입력(반복종료 조건 0) : ");
		scanf_s("%d", &a);

		sum += a;
	} while (a != 0);

	printf("합 : %d\n", sum);

	return 0;
}