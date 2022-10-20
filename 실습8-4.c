#include <stdio.h>

int main(void)
{
	char temp, ch[5];
	int i, j;

	printf("영어 문자 5개 입력 : ");

	for (i = 0; i < 5; i++)
		scanf_s("%c", &ch[i]);
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			printf("%c", ch[j]);
		printf("\n");
		temp = ch[4];
		ch[4] = ch[3];
		ch[3] = ch[2];
		ch[2] = ch[1];
		ch[1] = ch[0];
		ch[0] = temp;
	}

	printf("\n");

	return 0;
}
