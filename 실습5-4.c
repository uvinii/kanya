#include <stdio.h>

int main(void)
{
	int a;

	printf("배수를 확인할 정수 입력 : ");
	scanf_s("%d", &a);

	if (a == 0) {
		printf("입력받은 값 %d는 3의배수도 4의배수도 아니다.\n", a);
	}
	else if (a % 3 == 0 && a % 4 == 0) {
		printf("입력받은 값 %d는 3의배수이면서 4의배수이다.\n", a);
	}
	else if (a % 3 == 0) {
		printf("입력받은 값 %d는 3의배수이다.\n", a);
	}
	else if (a % 4 == 0) {
		printf("입력받은 값 %d는 4의배수이다.\n", a);
	}
	else if (a % 3 != 0 && a % 4 != 0) {
		printf("입력받은 값 %d는 3의배수도 4의배수도 아니다.\n", a);
	}

	return 0;
}
