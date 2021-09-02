// 求Hermite多项式的第n项的值
#include <stdio.h>

double hermite(int n, double x)
{
	if (n == 0) return 1;
	else if (n == 1) return 2 * x;
	else
		return 2.0 * x * hermite(n - 1, x) - 2.0 * (n - 1) * hermite(n - 2, x);
}

int main()
{
	int n, i;
	double x;
	scanf("%d,%lf", &n, &x);
	for (i = 0; i <= n; i++)
	{
		printf("H(%d, %lf) = %.2lf\n", i, x, hermite(i, x));
	}
	return 0;
}