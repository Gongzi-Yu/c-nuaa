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