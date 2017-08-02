#include <stdio.h>

//Queue(ť)
//ť ����

/*
int arr[10];
int idx;
int cnt;

void enqueue();
void dequeue();

int main(void){
	int n;

	while (1){
		scanf("%d", &n);

		if (n == 1){
			printf("�� �Է� = ");
			enqueue();
			printf("\n");
			for (int i = 0; i < 10; i++){
				printf("%d ", arr[i]);
			}
		}
		else if (n == 2){
			dequeue();
			printf("\n");
			for (int i = 0; i < 10; i++){
				printf("%d ", arr[i]);
			}
		}
		else if (n == 9){
			return 0;
		}
	}

}

void enqueue(){
	if (arr[idx] != 0 || idx >= 10){
		printf("��\n");
		idx = 0;
		cnt = 0;
	}
	scanf("%d", &arr[idx++]);
}

void dequeue(){
	if (arr[cnt] = 0){
		printf("������");
		return;
	}
	arr[cnt++] = 0;
}
*/

//Tree(Ʈ��) �˰���
//*������ ����
//����Ʈ��(binary tree)
//-> ��������Ʈ��

//Heap(��)
//Max - heap, Min - heap

/*
// *Max - heap ����
int i = 1;

void Heapify(int *tree);
// 4, 16, 10, 14, 7, 9, 3, 2, 8, 1 �Է°�
// 16 14 10 8 7 9 3 2 4 1 ��°�

int main(){
	int tree[11] = {0};
	int i;

	for (i = 1; i < 11; i++){
		scanf("%d", &tree[i]);
	}

	Heapify(tree);

	for (i = 1; i < 11; i++){//���
		printf("%d ", tree[i]);
	}
}

void Heapify(int *tree){
	int s;
	while (1){
		if (tree[2 * i] > 16 || tree[2 * i + 1] > 16){
			return;
		}

		if (tree[i] < tree[2 * i]){
			if (tree[2 * i] > tree[2 * i + 1]){
				s = tree[2 * i];
				tree[2 * i] = tree[i];
				tree[i] = s;
				i = 2 * i;
			}
			else{
				s = tree[2 * i + 1];
				tree[2 * i + 1] = tree[i];
				tree[i] = s;
				i = 2 * i + 1;
			}
		}
		else if (tree[i] < tree[2 * i + 1]){
			s = tree[2 * i + 1];
			tree[2 * i + 1] = tree[i];
			tree[i] = s;
			i = 2 * i + 1;
		}
		else
			return;
	}
}
*/

/*
	// *�������� § Heapify�Լ� �ڵ�

	void max_heapify(int *tree, const unsigned int i, const unsigned int heap_size){
	int l = left(i);
	int r = right(i);
	int largest;

	if( l <= heap_size && tree[l] > tree[i] )
		largest = l;
	else
		largest = i;

	if( r <= heap_size && tree[r] > tree[largest])
		largest = r;

	if( largest != i ){
		swap(&tree[i], &tree[largest]);
		max_heapify(tree, largest, heap_size);
		}
	}
*/

//Build_max_heap ����

/*
int i = 1;
void Heapify(int *tree);

int main(){
	int tree[11] = { 0 };
	int i;

	for (i = 1; i < 11; i++){
		scanf("%d", &tree[i]);
	}

	for (int j = 5; j > 0; --j){
		i = j;
		Heapify(tree);
	}

	for (i = 1; i < 11; i++){
		printf("%d ", tree[i]);
	}
}

void Heapify(int *tree){
	int s;

	while (1){

		if (tree[2 * i] > 16 || tree[2 * i + 1] > 16){
			return;
		}

		if (tree[i] < tree[2 * i]){
			if (tree[2 * i] > tree[2 * i + 1]){
				s = tree[2 * i];
				tree[2 * i] = tree[i];
				tree[i] = s;
				i = 2 * i;
			}
			else{
				s = tree[2 * i + 1];
				tree[2 * i + 1] = tree[i];
				tree[i] = s;
				i = 2 * i + 1;
			}
		}
		else if (tree[i] < tree[2 * i + 1]){
			s = tree[2 * i + 1];
			tree[2 * i + 1] = tree[i];
			tree[i] = s;
			i = 2 * i + 1;
		}
		else
			return;
	}
}
*/


//Heap sort
//Heap�˰����� �̿��� ����

/*
int i = 1;
int cnt;
void Heapify(int *tree);
void sort(int *tree);

int main(){
	int tree[11] = { 0 };
	int i;

	for (i = 1; i < 11; i++){
		scanf("%d", &tree[i]);
	}

	for (int j = 5; j > 0; --j){//build_heap
		i = j;
		Heapify(tree);
	}

	for (int j = 1; j < 11; j++){//sort
		sort(tree);
		i = 1;
		Heapify(tree);
	}

	for (i = 1; i < 11; i++){
		printf("%d ", tree[i]);
	}
}

void sort(int *tree){
	int temp;
	printf("\n%d\n", cnt);
	if (cnt > 8){
		return;
	}

	for (int j = 1; j < 11; j++){
		printf("%d ", tree[j]);
	}

	temp = tree[10 - cnt];
	tree[10 - cnt] = tree[1];
	tree[1] = temp;
	
	for (int j = 1; j < 11; j++){
		printf("%d ", tree[j]);
	}
	printf("\n");

	cnt++;
}

void Heapify(int *tree){
	int s;

	while (1){

		if (tree[2 * i] > 16 || tree[2 * i + 1] > 16){
			return;
		}

		if (tree[i] < tree[2 * i]){
			if (tree[2 * i] > tree[2 * i + 1]){
				s = tree[2 * i];
				tree[2 * i] = tree[i];
				tree[i] = s;
				i = 2 * i;
			}
			else{
				s = tree[2 * i + 1];
				tree[2 * i + 1] = tree[i];
				tree[i] = s;
				i = 2 * i + 1;
			}
		}
		else if (tree[i] < tree[2 * i + 1]){
			s = tree[2 * i + 1];
			tree[2 * i + 1] = tree[i];
			tree[i] = s;
			i = 2 * i + 1;
		}
		else
			return;
	}
}
*/

//���� 7578�� ����
//Fenwick tree �˰���

/*
	//�������� § �ڵ� (Fenwick tree)

int sum(int *tree, int i){
	int ret = 0;
	while (i > 0){
		ret += tree[i];
		i -= (i & -i);
	}
	return ret;
}

void update(int *tree, int i, const int num, const unsigned int size){
	while (i <= size){
		tree[i] += num;
		i += (i & -i);
	}
}
*/

//�������� Ǯ��
/*
#include <stdio.h>
#define MACHINES 500001
#define N 1000001

int up[MACHINES];
int down[MACHINES];
int temp[MACHINES];
int tree[N];
int hash[N];

int sum(int *tree, int i){
	int ret = 0;
	while (i > 0){
		ret += tree[i];
		i -= (i & -i);
	}
	return ret;
}

void update(int *tree, int i, const int num, const unsigned int size){
	while (i <= size){
		tree[i] += num;
		i += (i & -i);
	}
}

int main(){
	int i, n;
	int ret = 0;

	scanf("%d", &n);

	for (i = 1; i <= n; ++i){
		scanf("%d", &up[i]);
		hash[up[i]] = i;
	}

	for (i = 1; i <= n; ++i){
		scanf("%d", &down[i]);
		update(tree, hash[down[i]], 1, N);
		ret += sum(tree, N) - sum(tree, hash[down[i]]);
	}

	printf("%d", ret);

}
*/
