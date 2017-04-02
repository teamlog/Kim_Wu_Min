#include <stdio.h>

int main(void) 
{
	int n;
	int i, j;

	scanf_s("%d",&n);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i + 1; j++) 
		{
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}