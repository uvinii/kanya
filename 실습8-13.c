#include <stdio.h>

int main(void)
{
	char arr[100];
	int len = 0, i;
	char temp;

	printf("영어 단어 입력 : ");
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

	printf("거꾸로 된 단어 : %s\n", arr);

	printf("\n");

	return 0;
}
