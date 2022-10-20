#include <stdio.h>

int main(void)
{
	int a;
	int cnt = 0;

	printf("하나의 정수 입력 : ");
	scanf_s("%d", &a);

	for (int i = 1; i <= a; i++) {
		for (int j = i; j > 0; j /= 10) {
			if (j % 10 == 3) {
				cnt++;
			}
		}
	}
	printf("숫자3이 총 %d번 나옴", cnt);

	printf("\n");

	return 0;
}