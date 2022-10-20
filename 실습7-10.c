#include <stdio.h>

void a(int num1);
int main(void)
{
	int num1;
	printf("³âµµ¸¦ ÀÔ·Â : ");
	scanf_s("%d", &num1);
	a(num1);

	printf("\n");

	return 0;
}
void a(int num1) {
	switch (num1 % 12)
	{
	case 0:
		printf("¿ø¼şÀÌ¶ì");
		break;
	case 1:
		printf("´ß¶ì");
		break;
	case 2:
		printf("°³¶ì");
		break;
	case 3:
		printf("µÅÁö¶ì");
		break;
	case 4:
		printf("Áã¶ì");
		break;
	case 5:
		printf("¼Ò¶ì");
		break;
	case 6:
		printf("È£¶ûÀÌ¶ì");
		break;
	case 7:
		printf("Åä³¢¶ì");
		break;
	case 8:
		printf("¿ë¶ì");
		break;
	case 9:
		printf("¹ì¶ì");
		break;
	case 10:
		printf("¸»¶ì");
		break;
	case 11:
		printf("¾ç¶ì");
		break;
	}
}