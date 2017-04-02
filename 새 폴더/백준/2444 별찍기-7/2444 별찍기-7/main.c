#include <stdio.h>

int main(void) 
{
	int n, a;
	int i, j, k, h;

	scanf_s("%d", &n);

	for (i = 1; i < n + 1; i++) 
	{
		for (j = 0; j < n - i; j++) 
		{
			printf(" ");
		}
		for (k = 0; k < 2 * i - 1; k++) 
		{
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}