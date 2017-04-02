#include <stdio.h>

double funtion(double x) 
{
	if (x < 0)
		return -x;
	else
		return x;
}

int main(void) 
{
	double n;

	scanf_s("%lf", &n);
	printf("%.10g", funtion(n));



















































































	system("pause");
	return 0;
}