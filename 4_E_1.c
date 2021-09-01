#include <stdio.h>

int main()
{
	int a, b, c, i;
	for (a = 1; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				i = a * 100 + b * 10 + c;
				if (i == a * a * a + b * b * b + c * c * c)
					printf("%d\t", i);
			}
		}
	}
}