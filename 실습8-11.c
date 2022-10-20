#include <stdio.h>

int main(void)
{
	int arr[5]; 
	int total, i;

	for (i = 0; i < 5; i++) { 
		printf("%d층에사는사람의수: ", i + 1); 
		scanf_s("%d", &arr[i]); 
	}
	total = arr[0] + arr[1] + arr[2] + arr[3] + arr[4]; 
	printf("현재거주하는총인원: %d\n", total);

	printf("\n");

	return 0;
}
