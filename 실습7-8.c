#include <stdio.h>

void a(int num1);
int main(void)
{
	int num1;
	printf("정수를 입력 : ");
	scanf_s("%d", &num1);
	a(num1);

	printf("\n");

	return 0;
}
void a(int num1) {
	for (int i = 1; i <= 9; i++) {
		printf("%2d x %2d = %2d\n", num1, i, num1 * i);
	}
}