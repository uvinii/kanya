#include <stdio.h>

void viewASC(char word);
int main(void)
{
	char word;
	printf("���ĺ��� �Է� : ");
	scanf_s("%c", &word);
	viewASC(word);

	printf("\n");

	return 0;
}
void viewASC(char word) {
	printf("%c�� �ƽ�Ű�ڵ� ���� %d�Դϴ�.", word, word);
}