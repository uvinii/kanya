#include <stdio.h>

int main(void) {
	int a, sum = 0;

	printf("���� �Է� : ");
	scanf_s("%d", &a);

	for (int i = 1;; i++) {
		sum += i;
		if (i == a)
			break;
	}
	printf("%d", sum);

	printf("\n");
	return 0;
}