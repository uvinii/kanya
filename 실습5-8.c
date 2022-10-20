#include <stdio.h>

int main(void)
{
	int a;

	printf("온도 입력 : ");
	scanf_s("%d", &a);

	if (a < 0) {
		printf("실내 활동");
	}
	else if (a >= 0 && a < 40) {
		printf("실외 활동");
	}
	else if (a >= 40) {
		printf("실내 활동");
	}
	

	return 0;
}
