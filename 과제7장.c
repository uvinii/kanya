
//�̸�:������                                     //
//�й�:2022243051                                //
//�ڵ�: �ǽ� 7��                                //
//����: 2022.10.11                               //



#include<stdio.h>
////////////////////////7�� 1��/////////////////////
/*
int main(void) {

	char ch;

	printf("���ĺ��� �Է� : ");

	scanf_s("%c", &ch);

	printf("%c�� �ƽ�Ű �ڵ尪�� %d �Դϴ�.\n", ch, ch);

	return 0;

}
*/
////////////////////////7�� 2��/////////////////////
/*
int main(void) {

	int num;

	printf("������ �Է� : ");

	scanf_s("%d", &num);

	if (num % 2 == 0) {
		printf("�Է��� ���� %d�� ¦���Դϴ�.\n", num);
	}
	else printf("�Է��� ���� %d�� Ȧ���Դϴ�.\n", num);

	return 0;

}
*/
////////////////////////7�� 3��/////////////////////
/*
int main(void) {

	int num1, num2;

	printf("ù��° ������ �Է� : ");
	scanf_s("%d", &num1);

	printf("�ι�° ������ �Է� : ");
	scanf_s("%d", &num2);

	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);

	return 0;

}
*/
////////////////////////7�� 4��/////////////////////
/*
int main(void) {

	int num;

	printf("������ �Է� : ");
	scanf_s("%d", &num);

	for (int i = num; i <= num + 10; i++) {
		printf("%d ", i);
	}

	return 0;

}
*/
////////////////////////7�� 5��/////////////////////
/*
int my_sum(int num1, int num2)
{
	return num1 + num2;
}

int main(void) {

	int num1, num2;

	printf("ù��° ������ �Է� : ");
	scanf_s("%d", &num1);

	printf("�ι�° ������ �Է� : ");
	scanf_s("%d", &num2);

	printf("�� ���� ���� %d�Դϴ�.\n", my_sum(num1, num2));

	return 0;

}
*/
////////////////////////7�� 6��/////////////////////
/*
int my_max(int num1, int num2) {
	return num1 > num2 ? num1 : num2;
}

int main(void) {

	int num1, num2;

	printf("ù��° ������ �Է� : ");
	scanf_s("%d", &num1);

	printf("�ι�° ������ �Է� : ");
	scanf_s("%d", &num2);

	printf("%d�� %d �� ū ���� %d�Դϴ�.\n", num1, num2, my_max(num1, num2));

	return 0;

}
*/
////////////////////////7�� 7��/////////////////////
/*
int main(void) {

	int num;

	printf("1~3 ������ ������ �Է� : ");
	scanf_s("%d", &num);

	if (num == 1) printf("ONE\n");
	else if (num == 2) printf("TWO\n");
	else if (num == 3) printf("THREE\n");
	else printf("ERROR\n");

	return 0;

}
*/
////////////////////////7�� 8��/////////////////////
/*
int main(void) {

	int num;

	printf("������ �Է� : ");
	scanf_s("%d", &num);

	for (int i = 1; i <= 9; i++) {
		printf("%d X %d = %d\n", num, i, num * i);
	}

	return 0;

}
*/
////////////////////////7�� 9��/////////////////////
/*
int main(void) {

	int sec, min, hour;

	printf("�ʸ� �Է� : ");
	scanf_s("%d", &sec);

	min = sec / 60;
	hour = min / 60;
	sec = sec % 60;
	min = min % 60;

	printf("%d�� : %d�� : %d��\n", hour, min, sec);

	return 0;

}
*/
////////////////////////7�� 10��/////////////////////
/*
int main(void) {

	int num;

	printf("�⵵�� �Է� : ");
	scanf_s("%d", &num);

	switch (num%12)
	{
	case 0:
		printf("�����̶�\n");
		break;
	case 1:
		printf("�߶�\n");
		break;
	case 2:
		printf("����\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("���\n");
		break;
	case 5:
		printf("�Ҷ�\n");
		break;
	case 6:
		printf("ȣ���̶�\n");
		break;
	case 7:
		printf("�䳢��\n");
		break;
	case 8:
		printf("���\n");
		break;
	case 9:
		printf("���\n");
		break;
	case 10:
		printf("����\n");
		break;
	default:
		printf("���\n");
	}


	return 0;

}
*/
