// 输出一个m行n列的由*组成边框的长方形
/*
第1行和第m行输出n个*。其他行先输出一个*,再输出n-2个空格，
最后输出一个*。每行结尾输出一个换行符。
*/
#include <stdio.h>

int main()
{
	int i, m, n;
	scanf("%d,%d", &m, &n);
	for (i = 1; i <= m; i++)
	{
		if (i == 1 || i == m)
		{
			int j;
			for (j = 1; j <= n; j++)
				printf("*");
		}
		else
		{
			int j;
			for (j = 1; j <= n; j++)
			{
				if (j == 1 || j == n) printf("*");
				else printf(" ");

			}
		}
		printf("\n");
	}
}