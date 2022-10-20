#include <stdio.h>

int main(void)
{
	int a;

	printf("점수 입력 : ");
	scanf_s("%d", &a);

	if (a <= 100 && a >= 80) {
		printf("등급은 : A\n");
	}
	else if (a <= 100 && a >= 60) {
		printf("등급은 : B\n");
	}
	else if (a <= 100 && a >= 40) {
		printf("등급은 : C\n");
	}
	else if (a <= 100 && a >= 20) {
		printf("등급은 : D\n");
	}
	else if (a <= 100 && a >= 0) {
		printf("등급은 : E\n");
	}
	else {
		printf("잘못 입력하였습니다.\n");
	}

	return 0;
}
