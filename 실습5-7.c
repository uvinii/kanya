#include <stdio.h>

int main(void)
{
	int kor, eng, math;
	double ave;
	char grade;

	printf("���� ���� ���� ���� �Է� : ");
	scanf_s("%d %d %d", &kor, &eng, &math);

	ave = (double)(kor + eng + math) / 3;

	if (ave >= 90)
		grade = 'A';
	else if (ave >= 80)
		grade = 'B';
	else if (ave >= 70)
		grade = 'C';
	else if (ave >= 60)
		grade = 'D';
	else
		grade = 'F';

	printf("����� %2.f�� %c����Դϴ�.\n", ave, grade);

	return 0;
}
