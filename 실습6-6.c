#include <stdio.h>

int main(void)
{
	int a = 1;

	for (int i = 0; i < 10; i++) {
		for (int j = i+1; j <= i+10; j++) {
			if (j >= 10) {
				a = j - 10;
				printf("%d ", a);
			}
			else {
				a = j;
				printf("%d ", a);
			}
		}
		printf("\n");
	}

	printf("\n");

	return 0;
}