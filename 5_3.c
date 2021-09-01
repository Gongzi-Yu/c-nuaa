#include <stdio.h>

int fact(int x)
{
	if (x == 1) return 1;
	else return fact(x - 1)*x;
}

int com(int m, int r)
{
	return fact(m) / (fact(r) * fact(m - r));
}
int main()
{
	int m, r, i;
	for (i = 1; i <= 3; i++)
	{
		scanf("%d,%d", &m, &r);
		printf("%d\n", com(m, r));
	}
	return 0;
}
