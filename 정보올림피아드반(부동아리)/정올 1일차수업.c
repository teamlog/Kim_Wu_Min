#include <stdio.h>

//�Ҽ� ����

//n�� �Ҽ��� 1��ȯ
//�ƴϸ� 0��ȯ

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

//�ݶ��� ����

/*
�ݶ��� ������ ������ �ڿ����� ���� ������ ���� �׻� 1�� �ȴٴ� �����̴�.
¦����� 2�� ������.
Ȧ����� 3�� ���ϰ� 1�� ���Ѵ�.
1�̸� ������ ���߰�, 1�� �ƴϸ� ù ��° �ܰ�� ���ư���.*/

//�Է� : ���� ���� n
//��� : n���� �����ϴ� �ݶ��� ������ 1�� �����ϱ� ���� �ɸ� Ƚ��

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

// �Լ��� �Ű������� const(���) ����
// ����ȭ ���� �߿���
// �Լ� ���°� ����
// ǻ���Լ� ��ǻ���Լ�
// �� �Լ����� �� ����� �����ϴ°ɷ� �����
// main�Լ��� int���� reuturn �� 0���� ��ȯ�� ǥ��


//ī��Ʈ �ٿ��� ����ϴ� �Լ�
//�Է��� 10�� ��� 10 9 8 7 6 5 4 3 2 1 �� ���
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
//void���̿��� �ȿ��� return�� ����ؼ� �Լ��� ������ ����.


//x�� n���� ���ϴ� �Լ�
//��ͷ�

/*
int power(const unsigned int x, const unsigned int n);

int main(){

int x, n;

scanf("%d %d", &x, &n);

printf("%d", power(x, n));

return 0;
}

int power(const unsigned int x, const unsigned int n){
if (n == 0)//0��ó�� ������ �ϱ�!!
return 1;

if (n == 1)
return x;
else
return x * power(x, n - 1);
}
*/
//��� �Լ����� �������ٿ� ���ȣ���� ����ϸ� ����ȭ ���� tail recursion
//return �� �ȿ����� �������� ȣ��
//ex) return n * fact(n - 1);


//�Ǻ���ġ ����
//��ͷ� ����, �ݺ������� ����

//��ͷ� ����
/*
int count;//�Ǻ���ġ �Լ��� ��� �Ҹ�����

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


// �ݺ������� ����

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
//n�� ����� ��� ����ϴ� �Լ�

void prime_factor(const unsigned int n);
//n�� ���μ����� ����� ���
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


//�ִ����� ���ϱ�
//��Ŭ���� �˰���
//gcd(a, b) = gcd(b, a mod b), mod�� ��������� ��
//gcd(a, 0) = a

//2�� ¥���� �ƴ϶� ���� ���� ���Ҷ���
//ex) gcd(a,b,c) = gcd(a, gcd(b,c)) �̷��� �ϱ� 4�� �ټ���¥���� �ϳ��� �ø��� ��

int gcd(const int a, const int b);
//��ͷ� ����

int gcd_iteration(const int a, const int b);
//�ݺ������� ����

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