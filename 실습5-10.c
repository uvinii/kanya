#include <stdio.h>

int main(void)
{
	int a;

	printf("���� �Է� : ");
	scanf_s("%d", &a);

	if (a % 4 == 0) {
		if (a % 100 == 0) {
			if (a % 400 == 0) {
				printf("����");
			}
			else {
				printf("���");
			}
		}
		else {
			printf("����");
		}
	}
	else {
		printf("���");
	}

	return 0;
}
