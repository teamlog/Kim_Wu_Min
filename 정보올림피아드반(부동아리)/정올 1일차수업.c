#include <stdio.h>

//소수 구분

//n이 소수면 1반환
//아니면 0반환

/*
int is_prime(const int n);

int main(){
int n;

scanf("%d", &n);
printf("%d", is_prime(n));

return 0;
}

int is_prime(const int n){
int i;
int count = 0;

for (i = 2; i < n; i++){
if (n%i == 0)
count++;
}

if (count > 0)
return 0;
else
return 1;
}
*/

//콜라츠 추측

/*
콜라츠 추측은 임의의 자연수가 다음 조작을 거쳐 항상 1이 된다는 추측이다.
짝수라면 2로 나눈다.
홀수라면 3을 곱하고 1을 더한다.
1이면 조작을 멈추고, 1이 아니면 첫 번째 단계로 돌아간다.*/

//입력 : 양의 정수 n
//출력 : n에서 시작하는 콜라츠 수열이 1에 도달하기 까지 걸린 횟수

/*
int collazt(const int n);

int main() {
	int n;

	scanf("%d", &n);

	printf("%d", collazt(n));
}

int collazt(const int n) {

	int a;
	int count = 0;

	a = n;

	while (1) {
		if (a % 2 == 0)
			a /= 2;

		else if (a % 2 != 0)
			a = a * 3 + 1;
		count++;

		if (a == 1)
			return count;
	}
}
*/

// 함수의 매개변수로 const(상수) 쓰기
// 최적화 ㅈㄴ 중요함
// 함수 쓰는거 좋음
// 퓨어함수 언퓨어함수
// 한 함수에는 한 기능을 수행하는걸로 만들기
// main함수는 int형과 reuturn 값 0으로 반환이 표준


//카운트 다운을 출력하는 함수
//입력이 10일 경우 10 9 8 7 6 5 4 3 2 1 을 출력
/*
void print_int(int i);

int main(){

int n;
scanf("%d", &n);

print_int(n);
return 0;
}

void print_int(int i){

while (i > 0){
printf("%d ", i);
--i;
}
}
*/
//void형이여도 안에서 return을 사용해서 함수를 끝낼수 있음.


//x의 n승을 구하는 함수
//재귀로

/*
int power(const unsigned int x, const unsigned int n);

int main(){

int x, n;

scanf("%d %d", &x, &n);

printf("%d", power(x, n));

return 0;
}

int power(const unsigned int x, const unsigned int n){
if (n == 0)//0승처리 무조건 하기!!
return 1;

if (n == 1)
return x;
else
return x * power(x, n - 1);
}
*/
//재귀 함수에서 마지막줄에 재귀호출을 사용하면 최적화 개꿀 tail recursion
//return 값 안에서도 마지막에 호출
//ex) return n * fact(n - 1);


//피보나치 수열
//재귀로 구현, 반복문으로 구현

//재귀로 구현
/*
int count;//피보나치 함수가 몇번 불리는지

int fibo(const unsigned int n);

int main(){
int n;

scanf("%d", &n);

printf("%d", fibo(n));
printf("%d", count);

return 0;
}


int fibo(const unsigned int n){
count++;

if (n == 1){
return 0;
}
else if (n == 2){
return 1;
}
else{
return fibo(n - 2) + fibo(n - 1);
}
}
*/


// 반복문으로 구현

/*
int main() {
	int i;
	int n;
	int a = 0, b = 1;
	int tmp;

	scanf("%d", &n);

	if (n == 1) {
		b = 0;
	}
	else {
		for (i = 0; i < n - 2; i++) {
			tmp = b;
			b = a + b;
			a = tmp;
		}
	}
	printf("%d", b);

	return 0;
}
*/


/*
void divisor(const unsigned int n);
//n의 약수를 모두 출력하는 함수

void prime_factor(const unsigned int n);
//n의 소인수분해 결과를 출력
//100 -> 2 2 5 5

int main(){
int n;
scanf("%d", &n);

divisor(n);

printf("\n");

prime_factor(n);

return 0;
}

void divisor(const unsigned int n){
int i;

for (i = 1; i <= n; ++i){
if (n%i == 0){
printf("%d ", i);
}
}
}

void prime_factor(unsigned int n){
int i;
int count;

while (1){
count = 0;
for (i = 2; i <= n; ++i){
if (n%i == 0){
printf("%d ", i);
n /= i;
++count;
break;
}
}

if (count == 0){
return;
}
}
}
*/


//최대공약수 구하기
//유클리드 알고리즘
//gcd(a, b) = gcd(b, a mod b), mod는 나머지라는 뜻
//gcd(a, 0) = a

//2개 짜리가 아니라 많은 개수 구할때는
//ex) gcd(a,b,c) = gcd(a, gcd(b,c)) 이렇게 하기 4개 다섯개짜리는 하나씩 늘리면 됨

int gcd(const int a, const int b);
//재귀로 구현

int gcd_iteration(const int a, const int b);
//반복문으로 구현

int main() {
	int a, b;
	int tmp;

	scanf("%d %d", &a, &b);
	if (b > a) {
		tmp = a;
		a = b;
		b = tmp;
	}
	printf("%d\n", gcd(a, b));
	printf("%d", gcd_iteration(a, b));

	return 0;
}

int gcd(const int a, const int b) {
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

int gcd_iteration(const int a, const int b) {
	int i;
	int gcd = 0;

	if (b == 0)
		return a;

	for (i = 1; i <= a; i++) {
		if (a%i == 0 && b%i == 0)
			if (i > gcd)
				gcd = i;
	}

	return gcd;
}