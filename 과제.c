///////////////////////////
// 이름:조유빈           //
// 학번:2022243051    //
// 코드: 실습 3장,4장    //
// 날짜: 2022.09.22     //
// ////////////////////////
#include<stdio.h>

/////////////////////// 3-1////////////////////////////////////

int main() {
	int a, b;
	printf("생일 월 입력:");
	scanf_s("%d", &a);
	printf("생일 일 입력:");
	scanf_s("%d", &b);
	printf("입력 월: %d\n", a);
	printf("입력 일: %d\n", b);
	printf("생일은 %d월 %d일 입니다.", a, b);
	return 0;
}

/////////////////////// 3-2////////////////////////////////////
/*
int main() {
	int a, b;
	printf("생일 입력\n");
	printf("입력 월일:");
	scanf_s("%d %d", &a, &b);
	printf("생일은 %d월 %d일 입니다.", a, b);
	return 0;
}
*/
/////////////////////// 3-3////////////////////////////////////
/*
int main() {
	int a;
	printf("정수입력:");
	scanf("%d", &a);
	if (a >= 2 && a <= 9) {
		printf("%d%d%d%d%d%d\n", a, a, a, a, a, a);
		printf("%d    %d", a, a);
		printf("%d    %d", a, a);
		printf("%d%d%d%d%d%d\n", a, a, a, a, a, a);
	}
	else {
		printf("오류입니다 2~9사이로 입력해 주세요");
	}
	return 0;
}
*/
/////////////////////// 3-4////////////////////////////////////
/*
int main() {
	int a, b, c;
	printf("덧셈 할 두개의 정수 입력:");
	scanf_s("%d %d", &a, &b);
	c = a + b;
	printf("덧셈결과:%d + %d = %d", a, b, c);
	return 0;
}
*/
/////////////////////// 3-5////////////////////////////////////
/*
int main() {
	int a, b, i;
	printf("구구단의 단을 하나 입력하시오 :");
	scanf_s("%d", &a);
	for (int i = 1; i < 10; i++) {
		b = a * i;
		printf("%d * %d = %d\n", a, i, b);
	}
	return 0;
 }
 */
 /////////////////////// 4-1////////////////////////////////////
 /*
 int main()
 {
	 int a, b, c, d, e, f, g;
	 printf("사칙연산할 정수 두개 입력:");

	 scanf_s("%d %d", &a, &b);
	 c = a + b;
	 printf("%d + %d = %d\n", a, b, c);
	 d = a - b;
	 printf("%d - %d = %d\n", a, b, d);
	 e = a * b;
	 printf("%d * %d = %d\n", a, b, e);
	 f = a / b;
	 printf("%d / %d = %d\n", a, b, f);
	 g = a % b;
	 printf("%d %% %d = %d\n", a, b, g);

	 return 0;
 }
 */
 /////////////////////// 4-2////////////////////////////////////
 /*
 int main() {
	 int a, b,c;
	 printf("청소년 수 입력:");
	 scanf_s("%d", &a);
	 printf("성인 수 입력:");
	 scanf_s("%d", &b);
	 c = (a * 5000) + (b * 8000);
	 printf("전체 입장료 : %d", c);
	 return 0;

 }
 */
 /////////////////////// 4-3 ////////////////////////////////////
 /*
 int main()
 {
	 int a, b, c,d;
	 double e;
	 printf("정수 세 개 입력:");
	 scanf_s("%d %d %d", &a, &b, &c);
	 d = a + b + c;
	 e = (d / 3.0);
	 printf("합은 %d 이고 평균은 %.2f 이다.", d, e);
	 return 0;
 }
 */
 /////////////////////// 4-4 //////////////// ////////////////////
 /*
 int main()
 {
	 int a, b, c, d;
	 printf("사과 갯수 입력 :");
	 scanf_s("%d", &a);
	 b = 10-(a % 10);
	 c = a + b;
	 d= c / 10;
	 printf("필요한 바구니 수: %d", b);
	 return 0;
 }
 */
 /////////////////////// 4-5 /////////////////////////////////////
 /*
 int main()
 {
	 int a, b, c;
	 printf("정수입력 :");
	 scanf_s("%d", &a);
	 b = a / 100;
	 c = b * 100;
	 printf("%d", c);
	 return 0;
 }
 */