#include <stdio.h>

int main(void)
{
	char ch[10];
	int i, cnt = 0;

	printf("문자 10개 입력 : ");

	for (i = 0; i < 10; i++) {
		scanf_s("%c", &ch[i]);
	}
	for (i = 0; i < 8; i++) {
		if (ch[i] == 'c' && ch[i + 1] == 'a' && ch[i + 2] == 't')
			cnt++;
	}

	printf("%d\n", cnt);

	printf("\n");

	return 0;
}
