#include <stdio.h>
#include <string.h>
#include <math.h>

	/*���ڿ� �迭*/

//str == &str[0] //TRUE

// *<string.h> �����ϱ�
/*
int strlen(char *str);
	//���ڿ��� ���� ���ϱ�

void strcpy(char *form, char *to);
	//form���� to�� ���ڿ� ��ü ����

int strcmp(char *str1, char *str2);
	//str1�� str2�� �Ϻ��� ���� ���ڿ����� �˻�

int strchr(char *str, char chr);
	//str�ȿ� chr�� ���° ���ҷ� �����ϴ��� ��ȯ
	//�� ù��° ��ġ 1���� ���ϸ� �ȴ�

int main(){
	char str1[100] = {0};
	char str2[100] = {0};
	char chr;

	gets(str1);
	gets(str2);
	scanf("%c", &chr);

	printf("%d\n", strlen(str1));//strlen ����
	strcpy(str1, str2);//strcpy ����
	printf("\n");
	printf("%d\n", strcmp(str1, str2));//strcmp ������ ���ٸ� 0�� �ƴϸ� 1�� ���
	printf("%d\n", strchr(str1, chr));//strchr ���� ���Ұ� ������ -1�� ���

	return 0;
}
int strlen(char *str){
	int i;
	int cnt = 0;

	for (i = 0; i < 99; ++i){
		if (str[i] == 0 || str[i] == NULL)
			return cnt;
		cnt++;
	}
	return cnt;
}

void strcpy(char *form, char *to){
	char temp[100];
	int i;

	for (i = 0; i < 99; ++i)
		to[i] = form[i];

	for (i = 0; i < 99; ++i){
		printf("%c", to[i]);
		if (to[i] == NULL)
			return;
	}
	printf("\n");
}

int strcmp(char *str1, char *str2){
	int i;

	for (i = 0; i < 99; ++i){
		if (str1[i] != str2[i])
			return 1;
	}

	return 0;
}

int strchr(char *str, char chr){
	int i;

	for (i = 0; i < 99; ++i){
		if (str[i] == chr)
			return i;
	}

	return -1;
}
*/

//2015 �������� �ʵ�� 2�� ���⹮��
//���� �б�
//https://www.acmicpc.net/problem/10798

/*
int main(){
	char str[5][16] = {0};
	int i, j;

	for (i = 0; i < 5; ++i){
		scanf("%s", &str[i]);
	}

	for (j = 0; j < 15; ++j){
		for (i = 0; i < 5; ++i){
			if (str[i][j] == NULL)
				continue;
			printf("%c", str[i][j]);
		}
	}

	return 0;
}
*/

//���� ��Ī(pattern matching)

//Brute - force ��� ()

/*
int main(){
	char str[100];
	char pattern[100];
	int cnt = 0;
	int i, j;

	scanf("%s", str);
	scanf("%s", pattern);

	for (i = 0; i < strlen(str) - strlen(pattern); ++i){
		for (j = 0; j < strlen(pattern); ++j){
			if (str[i + j] == pattern[i + j]){
				cnt++;
			}
			else
				break;
		}
		if (cnt == strlen(pattern)){
			printf("%d", i + j - 1);
			break;
		}
		cnt = 0;
	}
	
	return 0;
}
*/

//Knuth - Morris - Pratt �˰��� (KMP)
/*�������� �ٽ� ����!*/

/*
char GeneratePi(int *P, int *pi);

int main(){
	char str[10];
	char pi[10];
	char P[10];
	int i, j;

	scanf("%s", str);
	scnaf("%s", P);
	
	GeneratePi(P, pi);
}

char GeneratePi(int *P,int *pi){
	pi[0] = 0;
	int m = strlen(P);
	int k = 0;
	int q;

	for (q = 1; q < m - 1; ++q){
		while (k > 0 && P[k] != P[q]){
			k = pi[k - 1];
			if (P[k] == P[q])
				k++;
		}
		pi[q] = k;
	}
}
*/

//369����

// 3�̳� 6�̳� 9�� ���� ��
// 3�� ���
// ���� 20150523���� ���� ������
// 1<=a<=b<=10�� 10����

