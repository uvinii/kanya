
//�̸�:������                       //
//�й�:2022243051                  //
//�ڵ�:8��                          //
//��¥:2022.10.13                   //

 #include<stdio.h>
/////////////8-1////////////
/*
int main() {
	int b=0;
	int a[5];
	printf("���� 5�� �Է�:");
	for (int i = 0; i <= 4; i++) {
		scanf_s("%d", &a[i]);
		b = b + a[i];
	}
	for (int i = 0; i <= 4; i++) {
		if (b / 5 <= a[i]) {
			printf("%d\n", a[i]);
		}
	}
	return 0;
}
*/
/////////////8-2////////////
/*
int main() {
	int b = 0;
	char a[10];
	printf("���� 10�� �Է� :");
	for (int i = 0; i < 10; i++) {
		scanf_s("%c\n", &a[i]);
	}
	for (int i = 0; i <= 9; i++) {
		if (a[i] == 'c') {
			if (a[i + 1] == 'a') {
				if (a[i + 2] == 't') {
					b++;
				}
			}
		}
	}
	printf("%d", b);
	return 0;
}
*/
/////////////8-3////////////
/*
int main() {
	int a[5],b;
	printf("���� 5�� �Է� :");
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (a[i] < a[j]) {
				b = a[i];
				a[i] = a[j];
				a[j] = b;
			}
		}
	}
	printf("%d\n%d", a[4], a[3]);
	return 0;
}
*/
/////////////8-4////////////
/*
int main() {
	char a[5],b;
	printf("���� ���� 5�� �Է�: ");
	for (int i = 0; i < 5; i++) {
		scanf_s("%c", &a[i]);
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%c", a[j]);
		}
		printf("\n");
		b = a[0];
		a[0] = a[4];
		a[4] = a[3];
		a[3] = a[2];
		a[2] = a[1];
		a[1] = b;
	}
	return 0;
}
*/
/////////////8-5////////////
/*
int main() {
	int a[10],b[10]={0},c=0;
	printf("10���� ���� �Է�:");
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < 10; i++) {
		if (b[i] > 0) {
			continue;
		}
		for (int j = 0; j < 10; j++) {
			if (a[j] == a[i]) {
				c++;
				b[j] += 1;
			}
		}
		printf("%d %d��\n", a[i], c);
		c = 0;
	}
	return 0;
}
*/
/////////////8-6////////////
/*
int main() {
	int a[5],b;
	printf("���� 5�� �Է�: ");
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (a[i] < a[j]) {
				b = a[i];
				a[i] = a[j];
				a[j] = b;
			}
		}
	}
	printf("%d\n%d\n%d\n%d\n%d", a[0], a[1],a[2],a[3],a[4]);
}
*/
/////////////8-7////////////
/*
int main() {
	int x[10], y[10], z[10];
	printf("�迭x�� ���� 10�� �Է� : ");
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &x[i]);
	}
	printf("�迭y�� ���� 10�� �Է� : ");
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &y[i]);
	}
	for (int k = 0; k < 10; k++) {
		z[k] = x[k] + y[k];
		printf("�� �迭�� %d��° ������ �� : %d\n", k, z[k]);
	}
	return 0;
}
*/
/////////////8-8////////////
/*
int main() {
	int a[10],b=0;
	printf("���� 10�� �Է� : ");
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (a[i] < a[j]) {
				b++;
			}
		}
		printf("%d���� ū ������ ���� : %d\n", a[i], b);
		b = 0;
	}
	return 0;
}
*/
/////////////8-9////////////
/*
int main() {
	int a[10], b[10] = { 0 }, c = 0;
	printf("10���� ���� �Է�:");
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < 10; i++) {
		if (b[i] > 0) {
			continue;
		}
		for (int j = 0; j < 10; j++) {
			if (a[j] == a[i]) {
				b[j] += 1;
			}
		}
		printf("%d ", a[i]);
	}
	return 0;
}
*/
/////////////8-10////////////
/*
int main() {
	int a[10],b,c=1,d;
	scanf_s("%d", &b);
	for (int i = 0; i < 10; i++) {
		if (c <= b) {
			d = (b / c) % 10;
			a[i] = d;
			printf("%d ", a[i]);
			c = c * 10;
		}
		else {
			break;
		}
	}
	return 0;
}
*/
/////////////8-11////////////
/*
int main() {
	int a[5],b=0;
	for (int i = 0; i < 5; i++) {
		printf("%d���� ��� ����� �� : ",i+1);
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < 5; i++) {
		b = b + a[i];
	}
	printf("���� �����ϴ� �� �ο� : %d", b);
	return 0;
}
*/
/////////////8-12////////////
/*
int main() {
	char a[100];
	printf("���ڿ� �Է� : ");
	gets(a);
	for (int i = 0; i < 100; i++) {
		if (a[i] ==  0) {
			printf("�Է��� ���ڿ��� ���̴� %d", i);
			break;
		}
	}
	return 0;
}
*/
/////////////8�� 13��////////////
/*
int main() {
	char a[100],b[100];
	printf("���� �ܾ� �Է� : ");
	gets(a);
	printf("�Ųٷ� �� �ܾ� : ");
	for (int i = 0; i < 100; i++) {
		b[i] = a[i];
		if (a[i] == 0) {
			for (int j = i; j >= 0; j--) {
				printf("%c", b[j]);
			}
			break;
		}
	}
	return 0;
}
*/