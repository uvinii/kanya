#include <stdio.h>

int main(void)
{
	int num[10];
	int i, j, cnt;

	printf("정수 10개 입력 : ");
	for (i = 0; i < 10; i++)
		scanf_s("%d", &num[i]);
	for (i = 0; i < 10; i++) {
		cnt = 0;
		for (j = 0; j < 10; j++) {
			if (num[i] < num[j])
				cnt++;
		}
		printf("%d보다 큰 정수의 개수 : %d\n", num[i], cnt);
	}

	printf("\n");

	return 0;
}
