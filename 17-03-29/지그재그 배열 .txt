#include <stdio.h>

int main(void)
{
	int n;
	int arr[50][50];
	int i = 0, j = 0;
	int a = 1;

	scanf_s("%d", &n);

	while (a < n*n)
	{
		for (j = 0; j < n; j++) 
		{
			arr[i][j] = a;
			a++;
		}
		i++;
		j--;
		for (1; j >= 0; j--)
		{
			arr[i][j] = a;
			a++;
		}
		i++;
	}

	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < n; j++) 
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}