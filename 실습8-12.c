#include <stdio.h>

int main(void)
{
	char string[100]; 
	int len = 0;
	printf("문자열입력: "); 
	scanf_s("%s", string, sizeof(string));
	while (string[len] != '\0') 
		len++;
	printf("입력한문자열의길이는%d \n", len);

	printf("\n");

	return 0;
}
