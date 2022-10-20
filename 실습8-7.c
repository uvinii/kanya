#include <stdio.h>

int main(void)
{
	int x[10], y[10], z[10];
	int i, j;

	printf("배열X에 정수 10개 입력 : ");
	for (i = 0; i < 10; i++)
		scanf_s("%d", &x[i]);

	printf("배열Y에 정수 10개 입력 : ");
	for (i = 0; i < 10; i++)
		scanf_s("%d", &y[i]);

	for (i = 0; i < 10; i++)
		z[i] = x[i] + y[i];
	for (i = 0; i < 10; i++)
		printf("두 배열의 %d번째 정수의 합 : %d\n", i, z[i]);

	printf("\n");

	return 0;
}
