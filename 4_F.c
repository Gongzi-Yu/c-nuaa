#include <stdio.h>
#include <math.h>

int main()
{
	int n, i, j;
	for (n = 90; n <= 100; n += 2)
	{
		for (i = 3; i <= n / 2; i += 2)
		{
			int k, p = 1;
			for (k = 2; k <= sqrt(i); k++)
			{
				if (i % k == 0)
				{
					p = 0;
					break;
				}
			}
			if (p == 1)
			{
				j = n - i;
				for (k = 2; k <= sqrt(j); k++)
				{
					if (j % k == 0)
					{
						p = 0;
						break;
					}
				}
				if (p == 1)
					printf("%d = %d + %d\t", n, i, j);
			}
		}
		printf("\n");
	}
}