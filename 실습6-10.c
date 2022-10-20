#include <stdio.h>

int main(void) {
	int num = 10;
	int i, j, k;

	for (i = 1; i < 7; i++) {
		for (j = 1; j < 7; j++) {
			for (k = 1; k < 7; k++) {
				if ((i + j + k) == num)
					printf("%d %d %d\n", i, j, k);
			}
		}
	}

	printf("\n");
	return 0;
}