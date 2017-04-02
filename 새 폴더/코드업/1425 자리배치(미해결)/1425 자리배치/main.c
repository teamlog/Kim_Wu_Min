#include <stdio.h>

int main(void) 
{
	int n, c;//첫번째 줄의 학생수n,한줄에 앉을 수 있는 자리수c
	int i, j, k;
	int arr[99];
	int temp, tmp;
	int a = 0;

	scanf_s("%d %d", &n, &c);

	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (arr[j] < arr[i]) 
			{
				temp = arr[j];
				tmp = arr[i];
				arr[i] = temp;
				arr[j] = tmp;
			}
		}
	}
	for (k = 0; k < n; k++)
	{
		printf("%d ",arr[k]);
	}
	

	
	while (1) 
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", arr[j]);
			a++;
		}
		if (a == n)
			break;
		printf("\n");
	}
	



	system("pause");
	return 0;
}