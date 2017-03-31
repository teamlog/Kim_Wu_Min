#include <stdio.h>

int main(void) 
{
	int n;
	int arr[50][50];
	int i, j;
	int a = 1;


	scanf_s("%d",&n);

	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < n; j++) 
		{
			arr[i][j] = a;
			a++;
		}
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