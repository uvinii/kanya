#include <stdio.h>

void a(int num1);
int main(void)
{
	int num1;
	printf("1~3 사이의 정수를 입력 : ");
	scanf_s("%d", &num1);
	a(num1);

	printf("\n");

	return 0;
}
void a(int num1) {
	switch (num1)
	{
	case 1:
		printf("ONE");
		break;
	case 2:
		printf("TWO");
		break;
	case 3:
		printf("THREE");
		break;
	default:
		printf("ERROR!!!");
		break;
	}
}