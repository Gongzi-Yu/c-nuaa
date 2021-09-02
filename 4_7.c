// 计算1~n的阶乘之和
#include <stdio.h>

int main()
{
	int n,i,j;
	double sum = 0, t;

	printf("请输入一个整数：");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		t = 1;
		for (j = 1; j<= i; j++)
		{
			t *= j;
		}
		sum += t;
	}
	printf("sum = %.2lf", sum);
}