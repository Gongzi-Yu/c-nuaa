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