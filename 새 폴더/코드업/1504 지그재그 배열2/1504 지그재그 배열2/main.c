#include <stdio.h>

int main(void) 
{
	int n;
	int arr[100][100];
	int i, j = 0, k;
	int a = 1;

	scanf_s("%d", &n);


	while (a < n*n)
	{
		for (i = 0; i < n; i++) 
		{
			arr[i][j] = a;
			a++;
		}	

		j++;

		for (k = n-1; k >= 0; k--) 
		{
			arr[k][j] = a;
			a++;
		}
		j++;
	}

	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < n; j++) 
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}