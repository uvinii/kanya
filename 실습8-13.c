#include <stdio.h>

int main(void)
{
	char arr[100];
	int len = 0, i;
	char temp;

	printf("���� �ܾ� �Է� : ");
	scanf_s("%s", arr, sizeof(arr));

	while (arr[len] != '\0') {
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[len - i - 1];
		arr[len - i - 1] = temp;
	}

	printf("�Ųٷ� �� �ܾ� : %s\n", arr);

	printf("\n");

	return 0;
}
