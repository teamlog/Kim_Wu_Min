#include <stdio.h>

int main(void) 
{
	int n, c; //ÆøÁ×À» ÅÍ¶ß¸®´Â ÇĞ»ıÀÇ ¼ön, ÆøÁ×¼î°¡ ³¡³ª´Â ½Ã°£c
	int i, j, k, h;
	int arr[100];
	int count = 0;


	scanf_s("%d %d", &n, &c);

	for (i = 0; i < n; i++) 
	{
		scanf_s("%d", &arr[i]);
	}
	for (h = 1; h < c; h++)
	{
		for (j = 0; j < c; j++)
		{
			for (k = 0; k < n; k++)
			{
				if (h*arr[k] == j)
				{
					count++;
					break;
				}
			}
		}
	}

	printf("%d", count);

	system("pause");
	return 0;
}