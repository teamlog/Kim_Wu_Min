#include <stdio.h>

//1����
// [2015 ���� ���� ���� 1������]
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
//�Լ� ���� (�̿�)
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

//2����
//�����ͼ���
/*
void decompose(double x, long *int_part, double *frac_part);
//int_part�� x�� �����κ�
//frac_part�� x�� �Ҽ��κ��� ���Եǵ��� �ϴ� �Լ�

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

// ���� ���� 1������ �����ͷ� Ǯ��� (�̿�)

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

//�ֽĻ��
//�Է¹��� ���鿡�� ���� �缭 ���� �ȸ� ���� ū ������ ������ Ȯ���ϴ� ����!
//�׶��� ��ȭ�� ���
//kadane(Ŀ����)�˰���
//�̿�

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