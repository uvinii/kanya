
//이름:조유빈                                     //
//학번:2022243051                                //
//코드: 실습 7장                                //
//날자: 2022.10.11                               //



#include<stdio.h>
////////////////////////7장 1번/////////////////////
/*
int main(void) {

	char ch;

	printf("알파벳을 입력 : ");

	scanf_s("%c", &ch);

	printf("%c의 아스키 코드값은 %d 입니다.\n", ch, ch);

	return 0;

}
*/
////////////////////////7장 2번/////////////////////
/*
int main(void) {

	int num;

	printf("정수를 입력 : ");

	scanf_s("%d", &num);

	if (num % 2 == 0) {
		printf("입력한 정수 %d는 짝수입니다.\n", num);
	}
	else printf("입력한 정수 %d는 홀수입니다.\n", num);

	return 0;

}
*/
////////////////////////7장 3번/////////////////////
/*
int main(void) {

	int num1, num2;

	printf("첫번째 정수를 입력 : ");
	scanf_s("%d", &num1);

	printf("두번째 정수를 입력 : ");
	scanf_s("%d", &num2);

	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);

	return 0;

}
*/
////////////////////////7장 4번/////////////////////
/*
int main(void) {

	int num;

	printf("정수를 입력 : ");
	scanf_s("%d", &num);

	for (int i = num; i <= num + 10; i++) {
		printf("%d ", i);
	}

	return 0;

}
*/
////////////////////////7장 5번/////////////////////
/*
int my_sum(int num1, int num2)
{
	return num1 + num2;
}

int main(void) {

	int num1, num2;

	printf("첫번째 정수를 입력 : ");
	scanf_s("%d", &num1);

	printf("두번째 정수를 입력 : ");
	scanf_s("%d", &num2);

	printf("두 수의 합은 %d입니다.\n", my_sum(num1, num2));

	return 0;

}
*/
////////////////////////7장 6번/////////////////////
/*
int my_max(int num1, int num2) {
	return num1 > num2 ? num1 : num2;
}

int main(void) {

	int num1, num2;

	printf("첫번째 정수를 입력 : ");
	scanf_s("%d", &num1);

	printf("두번째 정수를 입력 : ");
	scanf_s("%d", &num2);

	printf("%d와 %d 중 큰 수는 %d입니다.\n", num1, num2, my_max(num1, num2));

	return 0;

}
*/
////////////////////////7장 7번/////////////////////
/*
int main(void) {

	int num;

	printf("1~3 사이의 정수를 입력 : ");
	scanf_s("%d", &num);

	if (num == 1) printf("ONE\n");
	else if (num == 2) printf("TWO\n");
	else if (num == 3) printf("THREE\n");
	else printf("ERROR\n");

	return 0;

}
*/
////////////////////////7장 8번/////////////////////
/*
int main(void) {

	int num;

	printf("정수를 입력 : ");
	scanf_s("%d", &num);

	for (int i = 1; i <= 9; i++) {
		printf("%d X %d = %d\n", num, i, num * i);
	}

	return 0;

}
*/
////////////////////////7장 9번/////////////////////
/*
int main(void) {

	int sec, min, hour;

	printf("초를 입력 : ");
	scanf_s("%d", &sec);

	min = sec / 60;
	hour = min / 60;
	sec = sec % 60;
	min = min % 60;

	printf("%d시 : %d분 : %d초\n", hour, min, sec);

	return 0;

}
*/
////////////////////////7장 10번/////////////////////
/*
int main(void) {

	int num;

	printf("년도를 입력 : ");
	scanf_s("%d", &num);

	switch (num%12)
	{
	case 0:
		printf("원숭이띠\n");
		break;
	case 1:
		printf("닭띠\n");
		break;
	case 2:
		printf("개띠\n");
		break;
	case 3:
		printf("돼지띠\n");
		break;
	case 4:
		printf("쥐띠\n");
		break;
	case 5:
		printf("소띠\n");
		break;
	case 6:
		printf("호랑이띠\n");
		break;
	case 7:
		printf("토끼띠\n");
		break;
	case 8:
		printf("용띠\n");
		break;
	case 9:
		printf("뱀띠\n");
		break;
	case 10:
		printf("말띠\n");
		break;
	default:
		printf("양띠\n");
	}


	return 0;

}
*/
