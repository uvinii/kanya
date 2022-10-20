#include <stdio.h>

int main(void)
{
	int a;

	printf("연도 입력 : ");
	scanf_s("%d", &a);

	if (a % 4 == 0) {
		if (a % 100 == 0) {
			if (a % 400 == 0) {
				printf("윤년");
			}
			else {
				printf("평년");
			}
		}
		else {
			printf("윤년");
		}
	}
	else {
		printf("평년");
	}

	return 0;
}
