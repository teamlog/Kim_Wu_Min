#include <stdio.h>
#include <Windows.h>

int main(void)
{
	int n, b;//n은 배열에 들어갈 수의 개수, b는 배열의 중앙값
	int arr[100000];
	int i;

	scanf_s("%d %d", &n, &b);

	for (i = 0; i < n; i++) 
	{
		scanf_s("%d ", arr[i]);
	}




	system("pause");
	return 0;
}