#include <stdio.h>

int n;
int arr[50][50];
int i = 0, j = 0, k;
int a = 1;
int z = 0;

int x, y;

int main(void) 
{

	scanf_s("%d", &n);

	while (a <= n*n)
	{
			for (; j <n-z; j++) 
			{
				arr[i][j] = a;
				a++;
			}
			j--;
			i++;

			for (; i < n-z; i++) 
			{
				arr[i][j] = a;
				a++;
			}
			i--;
			j--;

			for (; j >= z; j--) 
			{
				arr[i][j] = a;
				a++;
			}
			j++;
			i--;
			z++;

			for (; i >= z; i--) 
			{
				arr[i][j] = a;
				a++;
			}
			i++;
			j++;

			//printf("i: %d, j: %d, z: %d\n", i, j, z);
			
			/*for (x = 0; x < n; x++)
			{
				for (y = 0; y < n; y++)
				{
					printf("%d ", arr[x][y]);
				}
				printf("\n");
			}
			system("pause");
			*/
	}

	//arr[n / 2][n / 2] = n*n;

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