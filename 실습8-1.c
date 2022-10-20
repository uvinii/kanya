#include <stdio.h>

int main(void)
{
	int num[5];
	int sum = 0;
	double avg;

	printf("정수 5개 입력 : ");
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &num[i]);
		sum += num[i];
	}
	avg = sum / 5.0;

	for (int i = 0; i < 5; i++) {
		if (avg < num[i])
			printf("%d\n", num[i]);
	}

	printf("\n");

	return 0;
}
