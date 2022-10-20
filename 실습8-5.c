#include <stdio.h>

int main(void)
{
	int num[10], temp[10];
	int i, j, k = 0;
	int cnt, index = 0;

	printf("10개의 정수 입력 : ");
	for (i = 0; i < 10; i++)
		scanf_s("%d", &num[i]);

	for (i = 0; i < 10; i++) {
		for (j = 0; j < index; j++) {
			if (num[i] == temp[j])
				k = 1;
		}
		if (k == 0)
			temp[index++] = num[i];
		k = 0;
	}

	for (i = 0; i < index; i++) {
		cnt = 0;
		for (j = 0; j < 10; j++) {
			if (temp[i] == num[j])
				cnt++;
		}
		printf("%d %d번\n", temp[i], cnt);
	}

	printf("\n");

	return 0;
}
