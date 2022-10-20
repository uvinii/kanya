#include <stdio.h>

int main(void)
{
	int a;
	int s = 0;

	printf("10이상의 정수 입력 : ");
	scanf_s("%d", &a);

	while (a >= 10)
	{
		s = 0;
		while (a) {
			s += a % 10;
			a /= 10;
		}
		a = s;
	}
	printf("디지털근은 %d 이다.", a);

	printf("\n");

	return 0;
}