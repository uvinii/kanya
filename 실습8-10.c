#include <stdio.h>

int main(void)
{
	int num, save[10];
	int i, index = 0;

	printf("���� �Է� : ");
	scanf_s("%d", &num);
	while (num) {
		save[index++] = num % 10;
		num /= 10;
	}
	for (i = 0; i < index; i++)
		printf(" %d", save[i]);

	printf("\n");

	return 0;
}
