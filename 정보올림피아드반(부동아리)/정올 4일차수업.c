#include <stdio.h>
#include <string.h>
#include <math.h>

	/*문자열 배열*/

//str == &str[0] //TRUE

// *<string.h> 구현하기
/*
int strlen(char *str);
	//문자열의 길이 구하기

void strcpy(char *form, char *to);
	//form에서 to로 문자열 전체 복사

int strcmp(char *str1, char *str2);
	//str1과 str2가 완벽히 같은 문자열인지 검사

int strchr(char *str, char chr);
	//str안에 chr이 몇번째 원소로 등장하는지 반환
	//맨 첫번째 위치 1개만 구하면 된다

int main(){
	char str1[100] = {0};
	char str2[100] = {0};
	char chr;

	gets(str1);
	gets(str2);
	scanf("%c", &chr);

	printf("%d\n", strlen(str1));//strlen 길이
	strcpy(str1, str2);//strcpy 복사
	printf("\n");
	printf("%d\n", strcmp(str1, str2));//strcmp 완전히 같다면 0을 아니면 1을 출력
	printf("%d\n", strchr(str1, chr));//strchr 같은 원소가 없으면 -1을 출력

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

//2015 지역본선 초등부 2번 기출문제
//세로 읽기
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

//패턴 매칭(pattern matching)

//Brute - force 방식 ()

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

//Knuth - Morris - Pratt 알고리즘 (KMP)
/*다음번에 다시 설명!*/

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

//369게임

// 3이나 6이나 9가 들어가는 수
// 3의 배수
// 답을 20150523으로 나눈 나머지
// 1<=a<=b<=10의 10만승

