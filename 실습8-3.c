#include <stdio.h>

int main(void)
{
	int num[5];
	int i, j, temp;

	printf("정수 5개 입력 : ");
	for (i = 0; i < 5; i++)
		scanf_s("%d", &num[i]);

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (num[j] < num[j + 1]) {
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}
	printf("%d\n", num[0]);
	printf("%d\n", num[1]);

	printf("\n");

	return 0;
}
