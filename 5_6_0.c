// 输出图形
/*
i表示行数，其值为1~n。对于第i行，首先输出i-1个空格，
然后输出n-i+1个*，最后输出换行
*/
#include <stdio.h>

void printTriangle(int n)
{
	int i,j;
	for (i = 1; i <= n; i++)
	{
		if (i - 1 != 0)
		{
			for (j = 1; j <= i - 1; j++) printf(" \t");
		}
		for (j = 1; j <= n - i + 1; j++) printf("*\t");
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