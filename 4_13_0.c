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