// 计算sum=1!+2!+3!+4!+…+n!
#include <stdio.h>

int fact(int x)
{
	int i, fact = 1;
	for (i = 2; i <= x; i++)
	{
		fact *= i;
	}
	return fact;
}

int main()
{
	int i, n, sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum += fact(i);
	}
	printf("sum = %d", sum);
}