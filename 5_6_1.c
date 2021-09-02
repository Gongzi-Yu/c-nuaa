// 输出图形
/*
将上述图形看成由*和空格构成的n×n点阵。做一个双重循环，
外循环变量i控制循环n行，内循环变量j控制循环n列，当i>j
时输出空格，其余情况输出*，每行结尾输出换行。
*/
#include <stdio.h>

void printTriangle(int n)
{
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i > j) printf(" \t");
			else printf("*\t");
		}
		printf("\n");
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	printTriangle(n);
	return 0;
}