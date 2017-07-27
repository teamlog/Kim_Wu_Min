#include <stdio.h>

/*정렬(sorting)*/

//백준 2750번 문제 수정렬하기 와 동일함//여러가지 방식으로 풀순 있지만

// 1. 거품정렬(Bubble sort)
// 인접한 인수끼리 비교해서 교환하는 방식으로 정렬
// n번 돌면 마지막인수가 가장 큰수가 올것이므로(작은순서대로 정렬시) 그다음번에는 n-1번 그다음번에는 n-2번 돌리면된다.
// 거품 정렬의 정렬 횟수 = ({n * (n - 1)} / 2)

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

// 2. Quick sort (퀵 소트)
// 퀵 정렬은 n개의 데이터를 정렬할 때, 최악의 경우에는 O(n * n)번의 비교를 수행하고, 평균적으로 O(n log n)번의 비교를 수행한다.

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

/* 외우기 퀵 소트 방법
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

/*Quick Select (순서통계량)*/

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
	if (q == 10-a)//인덱스끼리 비교
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
//(결정적인)
