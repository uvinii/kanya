#include <stdio.h>

void a(int num1);
int main(void)
{
	int num1;
	printf("������ �Է� : ");
	scanf_s("%d", &num1);
	a(num1);

	printf("\n");

	return 0;
}
void a(int num1) {
	for (int i = num1; i <= num1 + 10; i++) {
		printf("%d ", i);
	}
}