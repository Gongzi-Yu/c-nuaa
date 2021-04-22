#include <stdio.h>
#include <math.h>

int isPrime(int x)
{
	int i, p = 1;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			p = 0;
			break;
		}
	}
	return p;
}

int main()
{
	int i, count = 0;
	for (i = 100; i <= 200; i++)
	{
		if (isPrime(i) == 1)
		{
			printf("%d\t", i);
			count += 1;
		}
		if (count % 8 == 0 && count != 0)
		{
			printf("\n");
		}		
	}
}