#include <stdio.h>

int main(void)
{
	int a, b, c;
	int max1, max2, max3;

	printf("비교할 정수 세개 입력 : ");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a >= b && a >= c) {
		max1 = a;
		if (b >= c) {
			max2 = b;
			max3 = c;
		}
		else {
			max2 = c;
			max3 = b;
		}
	}
	else if(b >= a && b >= c){
		max1 = b;
		if (a >= c) {
			max2 = a;
			max3 = c;
		}
		else {
			max2 = c;
			max3 = a;
		}
	}
	else {
		max1 = c;
		if (a >= b) {
			max2 = a;
			max3 = b;
		}
		else {
			max2 = b;
			max3 = a;
		}
	}

	printf("입력된 세 정수 : %d %d %d\n", a, b, c);
	printf("큰 수부터 정렬 : %d %d %d\n", max1, max2, max3);

	return 0;
}
