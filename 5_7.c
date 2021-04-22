#include <stdio.h>

void pr_rev(int x)
{
	if (x / 10 == 0) printf("%d", x);
	else
	{
		printf("%d", x % 10);
		pr_rev(x / 10);
	}
}

int main()
{
	int x;
	scanf("%d", &x);
	pr_rev(x);
	return 0;
}