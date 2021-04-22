#include <stdio.h>

int main()
{
	double pi = 0, t = 0;
	int i = 1, b = 1;
	do{
		pi += t * b;
		if (i % 2 == 1)
			b = 1;
		else
			b = -1;
		t = 1.0 / (2.0 * i - 1);
		i++;
	} while (t >= 1.0e-6);
	printf("PIµÄÖµÎª£»%lf", 4 * pi);
	
}