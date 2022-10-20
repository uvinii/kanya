#include <stdio.h>

int main(void)
{
	int a, i = 1;

	printf("하나의 정수 입력 : ");
	scanf_s("%d", &a);

	while (i <= a) {
		if (a % i == 0) {
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");

	return 0;
}