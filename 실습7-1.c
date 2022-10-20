#include <stdio.h>

void viewASC(char word);
int main(void)
{
	char word;
	printf("알파벳을 입력 : ");
	scanf_s("%c", &word);
	viewASC(word);

	printf("\n");

	return 0;
}
void viewASC(char word) {
	printf("%c의 아스키코드 값은 %d입니다.", word, word);
}