#include <stdio.h>

int main(void) {
	int num, sum = 0, cnt = 0;
	double avg;

	while (1) {
		printf("���� �Է�(���� 0 �Ǵ� ����) : ");
		scanf_s("%d", &num);
		if (num <= 0) 
			break;

		if (num >= 100) 
			continue;

		sum += num;
		cnt++;
	}
	avg = (double)sum / cnt;
	printf("�հ� : %d ��� : %.2lf ���� : %d", sum, avg, cnt);

	printf("\n");
	return 0;
}