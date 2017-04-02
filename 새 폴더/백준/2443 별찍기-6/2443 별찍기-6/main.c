#include <stdio.h>

int main(void) 
{
	int n, a = 0;
	int i, j, k;

	scanf_s("%d", &n);

	for (i = 1; i < n+1; i++) 
	{
		a++;
		for (k = 0; k < i-1; k++) 
		{
			printf(" ");
		}
		for (j = 0; j < 2 * n - a; j++)
		{
			printf("*");
		}
		a++;
		printf("\n");
	}

	
	system("pause");
	return 0;
}