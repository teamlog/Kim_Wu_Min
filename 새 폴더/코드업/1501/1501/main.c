#include <stdio.h>

int main(void) 
{
	int i, j;
	int arr[3][3] = { 0 };

	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 3; j++) 
		{
			scanf_s("%d", &arr[i][j]);
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}