#include <stdio.h>

int main(void)
{
	int a;

	scanf_s("%d", &a);

	if (a % 2 == 0) {
		printf("Â¦¼ö\n");
	}
	else {
		printf("È¦¼ö\n");
	}

	return 0;
}
