#include <stdio.h>

int main(void)
{
	int a;

	scanf_s("%d", &a);

	if (a % 2 == 0) {
		printf("¦��\n");
	}
	else {
		printf("Ȧ��\n");
	}

	return 0;
}
