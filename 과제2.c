
//�̸�:������                                     //
//�й�:2022243051                                //
//�ڵ�: �ǽ� 5,6��                                //
//����: 2022.09.29                                //



#include<stdio.h>
////////////////////////5�� 1��/////////////////////
/*
int main() {
	int a, b;
	scanf_s("%d", &a);
	b = a % 2;
	if (b == 0) {
		printf("¦��");
	}
	else if (b == 1) {
		printf("Ȧ��");
	}
	return 0;
}
*/
////////////////////////5�� 2��/////////////////////
/*
int main() {
	int a, b;
	printf("���� �� ���� �Է�");
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
////////////////////////5�� 3��/////////////////////
/*
int main() {
	int a, b, c,d;
	printf("���� ���� ���� �Է�:");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("�Էµ� �� ���� : %d %d %d\n", a, b, c);
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
////////////////////////5�� 4��/////////////////////
/*
int main() {
	int a, b, c;
	printf("����� Ȯ���� ���� �Է� :");
	scanf_s("%d", &a);
	b = a % 3;
	c = a % 4;
	if (a == 0) {
		printf("�Է¹��� �� %d�� 3�� ����� 4�� ����� �ƴϴ�.", a);
	}
	else if (b == 0 && c == 0) {
		printf("�Է¹����� %d�� 3�� ����̸鼭 4�� ����̴�.", a);
	}
	else if (b == 0 && c != 0) {
		printf("�Է¹����� %d�� 3�� ����̴�.", a);
	}
	else if(c == 0 && b != 0) {
		printf("�Է¹��� �� %d�� 4�� ����̴�.", a);
	}
	else {
		printf("�Է¹����� %d�� 3�� ����� 4�� ����� �ƴϴ�.",a);
	}
	return 0;
}
*/
////////////////////////5�� 5��/////////////////////
/*
int main() {
	int a;
	float b,c,d;
	printf("1.���� 2.���� 3.���� 4.������\n");
	printf("����?");
	scanf_s("%d", &a);
	printf("�ΰ��� �Ǽ� �Է�:");
	scanf_s("%f %f", &b, &c);
	switch (a) {
	case 1:
		d = b + c;
		printf("�����: %f", d);
		break;
	case 2:
		d = b - c;
		printf("�����: %f", d);
		break;
	case 3:
		d = b * c;
		printf("�����: %f", d);
		break;
	case 4:
		d = b / c;
		printf("�����: %f", d);
		break;
	}
	return 0;
}
*/
////////////////////////5�� 6��/////////////////////
/*
int main() {
	int a;
	printf("�����Է�:");
	scanf_s("%d", &a);
	if (a <= 100 && a >= 80) {
		printf("����� : A");
	}
	else if (a <= 79 && a >= 60) {
		printf("����� : B");
	}
	else if (a <= 59 && a >= 40) {
		printf("����� : C");
	}
	else if (a <= 39 && a >= 20) {
		printf("����� : D");
	}
	else if (a <= 19 && a >= 0) {
		printf("����� : E");
	}
	else {
		printf("�߸� �Է��Ͽ����ϴ�.");
	}
	return 0;
}
*/
////////////////////////5�� 7��/////////////////////
/*
int main() {
	int a, b, c,d;
	printf("���� ���� ���� ���� �Է�:");
	scanf_s("%d %d %d", &a, &b, &c);
	d = (a + b + c)/3;
	if (d <= 100 && d >= 90) {
		printf("����� : A");
	}
	else if (d >= 80) {
		printf("����� : B");
	}
	else if (d >= 70) {
		printf("����� : C");
	}
	else if (d >= 60) {
		printf("����� : D");
	}
	else {
		printf("����� : f");
	}
	return 0;
}
*/
////////////////////////5�� 8��/////////////////////
/*
int main() {
	int a;
	printf("�µ� �Է�");
	scanf("%d", &a);
	if (a <= -1) {
		printf("�ǳ� Ȱ��");
	}
	else if (a >= 0 && a < 40) {
		printf("�ǿ� Ȱ��");
	}
	else if (a >= 40) {
		printf("�ǳ� Ȱ��");
	}
	return 0;
}
*/
////////////////////////5�� 9��/////////////////////
/*
int main() {
	int a,b,c,d;
	printf("�����Է�");
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
////////////////////////5�� 10��/////////////////////
/*
int main() {
	int a, b, c, d;
	printf("���� �Է�");
	scanf_s("%d", &a);
	b = a % 4;
	c = a % 100;
	d = a % 400;
	if (b != 0) {
		printf("���");
	}
	else if (c != 0) {
		printf("����");
	}
	else if (d != 0) {
		printf("���");
	}
	else {
		printf("����");
	}
	return 0;
}
*/
////////////////////////6�� 1��/////////////////////
/*
int main() {
	int a, c;
	int b = 1;
	printf("�����Է�");
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
////////////////////////6�� 2��/////////////////////
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
////////////////////////6�� 3��/////////////////////
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
////////////////////////6�� 4��/////////////////////
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
////////////////////////6�� 5��/////////////////////
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
////////////////////////6�� 6��/////////////////////
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
////////////////////////6�� 7��/////////////////////
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
////////////////////////6�� 8��/////////////////////
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
////////////////////////6�� 9��/////////////////////
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
////////////////////////6�� 10��/////////////////////
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
////////////////////////6�� 11��/////////////////////
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
////////////////////////6�� 12��/////////////////////
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