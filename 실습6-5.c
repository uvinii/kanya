#include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= (5 - i); j++) {
			printf(" ");
		}
		for (int k = 1; k <= (2 * i - 1); k++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 1; i < 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf(" ");
		}
		for (int k = 1; k <= (2 * (5 - i) - 1); k++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n");

	return 0;
}