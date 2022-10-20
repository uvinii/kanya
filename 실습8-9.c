#include <stdio.h>

int main(void)
{
	int num[10], save[10];
	int i, j, index = 0;
	int k = 0;

	printf("10개의 정수 입력 : ");
	for (i = 0; i < 10; i++)
		scanf_s("%d", &num[i]);

	for (i = 0; i < 10; i++) {
		for (j = 0; j < index; j++) {
			if (num[i] == save[j])
				k = 1;
		}
		if (k == 0)
			save[index++] = num[i];
		k = 0;
	}
	for (i = 0; i < index; i++)
		printf(" %d", save[i]);

	printf("\n");

	return 0;
}
