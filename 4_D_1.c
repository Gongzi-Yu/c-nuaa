// 输出一个m行n列的由*组成边框的长方形
/*
将其看成由*和空格构成的长方形点阵。
做一个双重循环，外循环m行，内循环n列，当行号为1或
行号为m或列号为1或列号n时输出*，其他情况输出空格。
每行结尾输出一个换行符。
*/
#include <stdio.h>

int main()
{
	int i, j, m, n;
	scanf("%d,%d", &m, &n);
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if ((i == 1) || (i == m) || (j == 1) || (j == n))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}