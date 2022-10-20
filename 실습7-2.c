#include <stdio.h>

void a(int num);
int main(void)
{
	int num;
	printf("정수를 입력 : ");
	scanf_s("%d", &num);
	a(num);

	printf("\n");

	return 0;
}
void a(int num) {
	if (num % 2 == 0) {
		printf("입력한 정수 %d는 짝수입니다.", num);
	}
	else {
		printf("입력한 정수 %d는 홀수입니다.", num);
	}
}