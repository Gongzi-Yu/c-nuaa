#include <stdio.h>

int main()
{
	int num, gws, sws, bws;
	for (num = 100; num < 1000; num++)
	{
		gws = num % 10;
		sws = (num / 10) % 10;
		bws = num / 100;
		if (num == gws * gws * gws + sws * sws * sws + bws * bws * bws)
			printf("%d\t", num);
	}
}