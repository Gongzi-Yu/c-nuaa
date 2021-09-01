#include <stdio.h>

int main()
{
	int i, sum;
	for (i = 1, sum = 0; i <= 100; i++)
		if (i % 2 == 1)
			sum += i;
	printf("sum=%d", sum);
	return 0;
}