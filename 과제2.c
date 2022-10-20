
//이름:조유빈                                     //
//학번:2022243051                                //
//코드: 실습 5,6장                                //
//날자: 2022.09.29                                //



#include<stdio.h>
////////////////////////5장 1번/////////////////////
/*
int main() {
	int a, b;
	scanf_s("%d", &a);
	b = a % 2;
	if (b == 0) {
		printf("짝수");
	}
	else if (b == 1) {
		printf("홀수");
	}
	return 0;
}
*/
////////////////////////5장 2번/////////////////////
/*
int main() {
	int a, b;
	printf("비교할 두 정수 입력");
	scanf_s("%d %d", &a, &b);
	if (a > b) {
		printf("%d", a);
	}
	else {
		printf("%d", b);
	}
	return 0;
}
*/
////////////////////////5장 3번/////////////////////
/*
int main() {
	int a, b, c,d;
	printf("비교할 정수 세개 입력:");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("입력된 세 정수 : %d %d %d\n", a, b, c);
	if (b >= a && b >= c) {
		d = a;
		a = b;
		b = d;
	}
	else if (c >= a && c >= b) {
		d = a;
		a = c;
		c = d;
	}
	if (c > b) {
		d = b;
		b = c;
		c = d;
	}
	printf("%d %d %d", a, b, c);
}*/
////////////////////////5장 4번/////////////////////
/*
int main() {
	int a, b, c;
	printf("배수를 확인할 정수 입력 :");
	scanf_s("%d", &a);
	b = a % 3;
	c = a % 4;
	if (a == 0) {
		printf("입력받은 값 %d는 3의 배수도 4의 배수도 아니다.", a);
	}
	else if (b == 0 && c == 0) {
		printf("입력받은값 %d는 3의 배수이면서 4의 배수이다.", a);
	}
	else if (b == 0 && c != 0) {
		printf("입력받은값 %d는 3의 배수이다.", a);
	}
	else if(c == 0 && b != 0) {
		printf("입력받은 값 %d는 4의 배수이다.", a);
	}
	else {
		printf("입력받은값 %d는 3의 배수도 4의 배수도 아니다.",a);
	}
	return 0;
}
*/
////////////////////////5장 5번/////////////////////
/*
int main() {
	int a;
	float b,c,d;
	printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈\n");
	printf("선택?");
	scanf_s("%d", &a);
	printf("두개의 실수 입력:");
	scanf_s("%f %f", &b, &c);
	switch (a) {
	case 1:
		d = b + c;
		printf("결과값: %f", d);
		break;
	case 2:
		d = b - c;
		printf("결과값: %f", d);
		break;
	case 3:
		d = b * c;
		printf("결과값: %f", d);
		break;
	case 4:
		d = b / c;
		printf("결과값: %f", d);
		break;
	}
	return 0;
}
*/
////////////////////////5장 6번/////////////////////
/*
int main() {
	int a;
	printf("점수입력:");
	scanf_s("%d", &a);
	if (a <= 100 && a >= 80) {
		printf("등급은 : A");
	}
	else if (a <= 79 && a >= 60) {
		printf("등급은 : B");
	}
	else if (a <= 59 && a >= 40) {
		printf("등급은 : C");
	}
	else if (a <= 39 && a >= 20) {
		printf("등급은 : D");
	}
	else if (a <= 19 && a >= 0) {
		printf("등급은 : E");
	}
	else {
		printf("잘못 입력하였습니다.");
	}
	return 0;
}
*/
////////////////////////5장 7번/////////////////////
/*
int main() {
	int a, b, c,d;
	printf("국어 영어 수학 점수 입력:");
	scanf_s("%d %d %d", &a, &b, &c);
	d = (a + b + c)/3;
	if (d <= 100 && d >= 90) {
		printf("등급은 : A");
	}
	else if (d >= 80) {
		printf("등급은 : B");
	}
	else if (d >= 70) {
		printf("등급은 : C");
	}
	else if (d >= 60) {
		printf("등급은 : D");
	}
	else {
		printf("등급은 : f");
	}
	return 0;
}
*/
////////////////////////5장 8번/////////////////////
/*
int main() {
	int a;
	printf("온도 입력");
	scanf("%d", &a);
	if (a <= -1) {
		printf("실내 활동");
	}
	else if (a >= 0 && a < 40) {
		printf("실외 활동");
	}
	else if (a >= 40) {
		printf("실내 활동");
	}
	return 0;
}
*/
////////////////////////5장 9번/////////////////////
/*
int main() {
	int a,b,c,d;
	printf("정수입력");
	scanf_s("%d", &a);
	b = a % 2;
	c = a % 3;
	d = a % 5;
	if (b == 0 && c == 0 && d == 0) {
		printf("A");
	}
	else if (b == 0 && c == 0 && d != 0) {
		printf("B");
	}
	else if (b == 0 && c != 0 && d == 0) {
		printf("C");
	}
	else if (b != 0 && c == 0 && d == 0) {
		printf("D");
	}
	else if (b != 0 && c != 0 && d != 0) {
		printf("N");
	}
	else {
		printf("E");
	}
	return 0;
}
*/
////////////////////////5장 10번/////////////////////
/*
int main() {
	int a, b, c, d;
	printf("연도 입력");
	scanf_s("%d", &a);
	b = a % 4;
	c = a % 100;
	d = a % 400;
	if (b != 0) {
		printf("평년");
	}
	else if (c != 0) {
		printf("윤년");
	}
	else if (d != 0) {
		printf("평년");
	}
	else {
		printf("윤년");
	}
	return 0;
}
*/
////////////////////////6장 1번/////////////////////
/*
int main() {
	int a, c;
	int b = 1;
	printf("정수입력");
	scanf_s("%d", &a);
	while (b <= a) {
		c = a % b;
		if (c == 0) {
			printf("%d\n", b);
		}
		b = b + 1;
	}
	return 0;
}
*/
////////////////////////6장 2번/////////////////////
/*
int main() {
	int a;
	int c = 0, b = 0;
	do {
		scanf_s("%d", &a);
		b = b + a;
	} while (a != 0);
	printf("%d", b);
	return 0;
}
*/
////////////////////////6장 3번/////////////////////
/*
int main() {
	for (int i=2; i <= 10; i++) {
		printf("%d! =", i);
		int a = 1;
		for (int s=1; s <= i; s++) {
			printf("%d", s);
			if (s!=i) {
				printf("*");
			}
		}
		for (int j = 1; j <= i; j++) {
			a = a * j;
		}

		printf("= %d\n", a);
		a = 0;
	}
}
*/
////////////////////////6장 4번/////////////////////
/*
int main() {
	int a, b,f,e,c,h;
	int g = 0, d = 0;
	scanf_s("%d %d", &a, &b);
	for (c = 1; c <= a; c++) {
		while (d <= c) {
			d = d + 1;
			f = b % d;
		}
		while (g <= c) {
			g = g + 1;
			e = a % g;
		}
		if (f == 0 && e == 0) {
			h = g;
		}
	}
	printf("%d", h);
	return 0;
}
*/
////////////////////////6장 5번/////////////////////
/*
int main() {
	int d=5,e=0,g=0;
	double f = 5;
	for (int a = 1; a <= 9; a=a+2) {
		for (int c = 1; c <= d;d--) {
			printf(" ");
		}
		for (int b = 1; b <= a; b++) {
			printf("*");
		}
		printf(" \n");
		d = 5;
		e = e + 1;
		d = d - e;
	}
	for (int a = 7; a >= 1; a = a - 2) {
		for (int c = 4; c <= f; f--) {
			printf(" ");
		}
		for (int b = 1; b <= a; b++) {
			printf("*");
		}
		printf(" \n");
		f = 5;
		g = g + 1;
		f = f + g;
	}
	return 0;
}
*/
////////////////////////6장 6번/////////////////////
/*
int main() {
	int b = 9,c=0,d=0;
	for (int a=1; a <= 10;a++) {
		for (int i=1; i <= 10; i++) {
			if (c <= 9){
				printf("%d ", c);
				c++;
			}
			else{
				printf("0 ");
				c = 1;
			}
		}
		printf("\n");
		c = 1;
		d++;
		c = c + d;
	}
	return 0;
}
*/
////////////////////////6장 7번/////////////////////
/*
int main() {
	int a,c,d;
	int b = 0, e = 0;
	scanf_s("%d", &a);
	while (b <= a) {
		c = (b / 10) * 10;
		d = b - c;
		if (d == 3) {
			e=e+1;
		}
		if (b >= 30 && b <= 39) {
			e = e + 1;
		}
		b++;
	}
	printf("%d", e);
	return 0;
}
*/
////////////////////////6장 8번/////////////////////
/*
int main() {
	int a=1,b=1,c=1;
	for (int i = 1; i <= 7; i++) {
		for (int j = 6; j >= c; j--) {
			printf(" ");
		}
		while (b<=i) {
			if (a <= 9) {
				printf("%d ", a);
				a++;
			}
			else {
				printf("0 ");
				a = 1;
			}
			b++;
		}
		printf("\n");
		b = 1;
		c = c + 1;
	}
	return 0;
}
*/
////////////////////////6장 9번/////////////////////
/*
int main() {
	int a,b=1,c=0;
	scanf_s("%d", &a);
	while (b <= a*10) {
		if (c <= 9) {
			c =c + (a / b) % 10;
		}
		b = b * 10;
		while (c >= 10) {
			c = (c / 10) + (c % 10);
		}
	}
	printf("%d", c);
	return 0;
}
*/
////////////////////////6장 10번/////////////////////
/*
int main() {
	int num;
	for (int a = 1; a <= 6; a++) {
		for (int b = 1; b <= 6; b++) {
			for (int c = 1; c <= 6; c++) {
				num = a + b + c;
				if (num == 10) {
					printf("%d %d %d\n", a, b, c);
				}
			}
		}
	
	}
	return 0;
}
*/
////////////////////////6장 11번/////////////////////
/*
int main() {
	int a,b=0,c=0;
	scanf_s("%d", &a);
	for (;;) {
		c++;
		b = b + c;
		if (c == a) {
			break;
		}
		
	}
	printf("%d", b);
	return 0;
}
*/
////////////////////////6장 12번/////////////////////
/*
int main() {
	int a;
	float d;
	double b = 0, c = 0;
	while (1) {
		scanf_s("%d", &a);
		b = b + a;
		c++;
		if (a <= 0) {
			break;
		}
	}
	d = b / c;
	printf("%.0lf %.2lf %.0lf", b, d, c);
	return 0;

}
*/