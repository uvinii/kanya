#include <stdio.h>

int main(void) {
	int num, sum = 0, cnt = 0;
	double avg;

	while (1) {
		printf("정수 입력(종료 0 또는 음수) : ");
		scanf_s("%d", &num);
		if (num <= 0) 
			break;

		if (num >= 100) 
			continue;

		sum += num;
		cnt++;
	}
	avg = (double)sum / cnt;
	printf("합계 : %d 평균 : %.2lf 개수 : %d", sum, avg, cnt);

	printf("\n");
	return 0;
}