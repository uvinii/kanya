#include <stdio.h>

int main(void)
{
	int a = 0, b;

	printf("하나의 정수 입력 : ");
	scanf_s("%d", &b);

	for (int i = 1; i <= b; i++) {
		for (int j = 0; j <= (b - i); j++) {
			printf(" ");
		}
		for (int k = 0; k <= (i - 1); k++) {
			if (a >= 9) {
				a = a - 9;
				printf("%d ", a);
			}
			else {
				a++;
				printf("%d ", a);
			}
		}
		printf("\n");
	}

	printf("\n");

	return 0;
}