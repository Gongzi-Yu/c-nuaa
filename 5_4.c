#include <stdio.h>

int gcd(int x, int y)
{
	return (x % y == 0) ? y : gcd(y, x % y);
}

int main()
{
	int i, j;
	scanf("%d,%d", &i, &j);
	printf("%d\n", gcd(i, j));
}