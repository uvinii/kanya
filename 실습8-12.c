#include <stdio.h>

int main(void)
{
	char string[100]; 
	int len = 0;
	printf("���ڿ��Է�: "); 
	scanf_s("%s", string, sizeof(string));
	while (string[len] != '\0') 
		len++;
	printf("�Է��ѹ��ڿ��Ǳ��̴�%d \n", len);

	printf("\n");

	return 0;
}
