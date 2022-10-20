#include <stdio.h>

int main(void)
{
	int kor, eng, math;
	double ave;
	char grade;

	printf("국어 영어 수학 점수 입력 : ");
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

	printf("평균은 %2.f로 %c등급입니다.\n", ave, grade);

	return 0;
}
