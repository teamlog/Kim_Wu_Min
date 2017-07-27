#include <stdio.h>

/*����(sorting)*/

//���� 2750�� ���� �������ϱ� �� ������//�������� ������� Ǯ�� ������

// 1. ��ǰ����(Bubble sort)
// ������ �μ����� ���ؼ� ��ȯ�ϴ� ������� ����
// n�� ���� �������μ��� ���� ū���� �ð��̹Ƿ�(����������� ���Ľ�) �״��������� n-1�� �״��������� n-2�� ������ȴ�.
// ��ǰ ������ ���� Ƚ�� = ({n * (n - 1)} / 2)

/*
int i, j;
int temp[10];
int arr[10];

void bubble_sort(){
	for (j = 0; j < 9; j++){
		for (i = 0; i < 9 - j; i++){
			if (arr[i] > arr[i + 1]){
				temp[i] = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp[i];
			}
		}
	}
}

int main(){

	for (i = 0; i < 10; i++){
		scanf("%d", &arr[i]);
		temp[i] = arr[i];
	}

	bubble_sort();

	for (i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}

	return 0;
}
*/

// 2. Quick sort (�� ��Ʈ)
// �� ������ n���� �����͸� ������ ��, �־��� ��쿡�� O(n * n)���� �񱳸� �����ϰ�, ��������� O(n log n)���� �񱳸� �����Ѵ�.

/*
int Partition(int *arr, int p, int r){
	int temp;
	int pivot = arr[r];
	int j , k;
	int i = p - 1; 
	for (j = p; j < r; ++j){
		if (arr[j] < pivot){
			++i;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	temp = arr[i + 1];
	arr[i + 1] = arr[r];
	arr[r] = temp;

	return i + 1;

}

void quick_sort(int *arr, int p, int r){
	int q;
	
	if (p >= r)
		return;
	q = Partition(arr, p, r);

	quick_sort(arr, p, q - 1);
	quick_sort(arr, q + 1, r);
}

int main(){
	int arr[10];
	int i, j;

	for (i = 0; i < 10; i++){
		scanf("%d", &arr[i]);
	}

	quick_sort(arr, 0, 9);

	for (i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}

	return 0;
}
*/

/* �ܿ�� �� ��Ʈ ���
#include <stdlib.h>

qsort(void *base, unsigned int nel, unsigned int width, int(*compare) (const void *, const void *))

int compare(const void* a, const void* b) {
	return (*(int)a) - (*(int*)b);
}
int main(int argc, char *argv[]){
	int arr[100];
	int arr_size = sizeof(arr)/sizeof(int);

	qsort(arr, arr_size, sizeof(int), compare);
}
*/

/*Quick Select (������跮)*/

int Partition(int *arr, int p, int r){
	int temp;
	int pivot = arr[r];
	int j, k;
	int i = p - 1;
	for (j = p; j < r; ++j){
		if (arr[j] < pivot){
			++i;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	temp = arr[i + 1];
	arr[i + 1] = arr[r];
	arr[r] = temp;

	return i + 1;

}

int quick_select(int *arr, int p, int r, int a){
	int q = Partition(arr, p, r);
	if (q == 10-a)//�ε������� ��
		return arr[p];
	if (q > 10 - a)
		return quick_select(arr, q + 1, r, a);
	else
		return quick_select(arr, p, q - 1, a);
	
}

int main(){
	int i, j;
	int arr[10];
	int q;
	int a;

	for (i = 0; i < 10; i++){
		scanf("%d", &arr[i]);
	}

	scanf("%d", &a);

	int result = quick_select(arr, 0, 9, a);

	printf("%d",result);
	
	return 0;
}
//Deterministic selection
//(��������)
