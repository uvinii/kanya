#include <stdio.h>

int main(void)
{
	int a, b, c = 1;
	int z = 0;

	printf("�� ���� �Է� : ");
	scanf_s("%d %d", &a, &b);

	/*for (int i = 1; i <= a; i++) {
		if (a % i == 0 && b % i == 0) {
			z = i;
		}
	}*/
	while (c <= a)
	{
		if (a % c == 0 && b % c == 0) {
			z = c;
		}
		c++;
	}
	printf("�ִ� �������� : %d", z);

	printf("\n");

	return 0;
}