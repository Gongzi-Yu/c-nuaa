#include <stdio.h>

int main()
{
	int a = 1, b = 1, t, i;
	double sum = 0, p;
	for (i = 1; i <= 20; i++)
	{
		p = 1.0 * b / a;
		sum += p;
		t = b;
		b = a + b;
		a = t;
	}
	printf("sum = %lf", sum);
}