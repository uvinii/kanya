#include <stdio.h>

void a(int num1);
int main(void)
{
	int num1;
	printf("�⵵�� �Է� : ");
	scanf_s("%d", &num1);
	a(num1);

	printf("\n");

	return 0;
}
void a(int num1) {
	switch (num1 % 12)
	{
	case 0:
		printf("�����̶�");
		break;
	case 1:
		printf("�߶�");
		break;
	case 2:
		printf("����");
		break;
	case 3:
		printf("������");
		break;
	case 4:
		printf("���");
		break;
	case 5:
		printf("�Ҷ�");
		break;
	case 6:
		printf("ȣ���̶�");
		break;
	case 7:
		printf("�䳢��");
		break;
	case 8:
		printf("���");
		break;
	case 9:
		printf("���");
		break;
	case 10:
		printf("����");
		break;
	case 11:
		printf("���");
		break;
	}
}