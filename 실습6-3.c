#include <stdio.h>

int main(void)
{
	int a = 1;

	for (int i = 2; i <= 10; i++) {
		printf("%d! = ", i);
		a = i;
		
		for (int j = 1; j < i; j++) {
			printf("%d*",j);
			a *= j;
		}
		printf("%d = %d\n", i, a);
	}

	printf("\n");

	return 0;
}