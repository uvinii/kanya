#include <stdio.h>

int main(void)
{
	int a;
	double num1, num2;
	double result;

	printf("1.µ¡¼À 2.»¬¼À 3.°ö¼À 4.³ª´°¼À\n");
	printf("¼±ÅÃ? ");
	scanf_s("%d", &a);
	printf("µÎ °³ÀÇ ½Ç¼ö ÀÔ·Â : ");
	scanf_s("%lf %lf", &num1, &num2);

	if (a == 1)
		result = num1 + num2;
	else if (a == 2)
		result = num1 - num2;
	else if (a == 3)
		result = num1 * num2;
	else if (a == 4)
		result = num1 / num2;

	printf("°á°ú: %f\n", result);

	return 0;
}
