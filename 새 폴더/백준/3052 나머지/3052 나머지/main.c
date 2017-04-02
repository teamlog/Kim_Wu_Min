#include <stdio.h>

int main(void) {

	int arr[10];
	int i, j, k, h;
	int temp[10];
	int count = 0;
	int check[1001];



	for (i = 0; i < 10; i++) 
	{
		scanf_s("%d", &arr[i]);
	}

	for (j = 0; j < 10; j++) 
	{
		temp[j] = arr[j] % 42;
	}
	
	for (k = 0; k <10; k++)
	{
		for (h = 0; h <10; h++ )
		{
			if (temp[k] == temp[h])
			{
				if (check[temp[k]] != 1) {
					check[temp[k]] = 1;
					count++;
				}
			}
		}
	}


	
	printf("%d", count);


	system("pause");
	return 0;
}