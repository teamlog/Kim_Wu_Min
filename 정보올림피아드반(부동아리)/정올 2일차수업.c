#include <stdio.h>

//1교시
// [2015 전국 정올 예선 1번문제]
/*
int main(){
	int arr[20];
	int temp[20];
	int a, b;
	int i, j;

	for (i = 0; i < 20; i++){
		arr[i] = i + 1;
		temp[i] = i + 1;
	}
	for (i = 0; i < 10; i++){
		scanf("%d %d", &a, &b);
		for (j = 0; j <= b - a; j++){
			arr[a + j - 1] = temp[b - j - 1];
		}
		for (j = 0; j < 20; j++){
			temp[j] = arr[j];
		}
	}

	for (i = 0; i < 20; i++){
		printf("%d ", arr[i]);
	}

	return 0;
}
*/
//함수 버전 (미완)
/*
void reverse(int *arr, const int size, const int a, const int b);

int main(){
	int arr[20];
	int a, b;
	int i, j;

	for (i = 0; i < 20; i++){
		arr[i] = i + 1;
	}
	
	for (i = 0; i < 20; i++){
		scanf("%d %d", &a, &b);
		reverse(arr[i], (b - a) * 4, a, b);
	}

	for (i = 0; i < 20; i++){
		printf("%d", arr[i]);
	}

	return 0;
}

void reverse(int *arr, const int size, const int a, const int b){
	int temp;
	int i;

	for (i = 0; i <= b - a; i++){
		temp = arr[b - i - 1];
		arr[b - i - 1] = arr[a + i - 1];
		arr[a + i - 1] = temp;
	}

}
*/

//2교시
//포인터수업
/*
void decompose(double x, long *int_part, double *frac_part);
//int_part는 x의 정수부분
//frac_part는 x의 소수부분이 대입되도록 하는 함수

int main(){
	double x = 5.66;
	long i;
	double f;


	decompose(x, &i, &f);


	printf("%d %lf", i, f);
	

	return 0;
}

void decompose(double x, long *int_part, double *frac_part){
	*int_part = x;
	*frac_part = x - *int_part;
}
*/

// 지역 예선 1번문제 포인터로 풀어보기 (미완)

/*
void reverse(int arr[], const int a, const int b);

int main(){
	int arr[20];
	int a, b;
	int i, j;

	for (i = 0; i < 20; i++){
		arr[i] = i + 1;
	}

	for (i = 0; i < 10; i++){
		scanf("%d %d", &a, &b);
		reverse(arr, a, b);
	}

	for (i = 0; i < 20; i++){
		printf("%d ", arr[i]);
	}

	return 0;
}

void reverse(int *arr, const int a, const int b){
	int temp;
	int i;

	for (i = 0; i <= b - a; i++){
		temp = *(arr + b - i - 1);
		*(arr + a - i - 1) = temp;
		*(arr + b - i - 1) = temp;
	}

}
*/

//주식사기
//입력받은 값들에서 언제 사서 언제 팔면 가장 큰 이익을 보는지 확인하는 문제!
//그때의 변화량 출력
//kadane(커데인)알고리즘
//미완

int MaxSub_array(int *arr, int i, int j);

int main(){
	int arr[10];
	int i, j;
	int result;

	for (i = 0; i < 10; i++){
		scanf("%d", &arr[i]);
	}
	
	for (i = 0; i < 9; i++){
		for (j = 0; j < 10; j++){
			if (result < MaxSub_array(arr, i, j));
				result = MaxSub_array(arr, i, j);

		}
	}


	return 0;
}

int MaxSub_array(int *arr, int i, int j) {
	
}