#include <stdio.h>

int main(void)
{
	int a, b, c;

	scanf_s("%d %d %d", &a, &b, &c);

	if (c <= a)
	{
		if (b <= a)
		{
			if (c <= b)
				printf("%d", b);
			else if (b <= c)
				printf("%d", c);
		}
		else if (a <= b)
			printf("%d", a);
	}
	else if (c <= b)
	{
		if (a <= b)
		{
			if (a <= c)
				printf("%d", c);
			else if (c <= a)
				printf("%d", a);
		}
		else if (b <= a)
			printf("%d", b);
	}
	else if (a <= c)
	{
		if (b <= c)
		{
			if (a <= b)
				printf("%d", b);
			else if (b <= a)
				printf("%d", a);
		}
		else if (c <= b)
			printf("%d", c);
	}

	system("pause");
	return 0;
}