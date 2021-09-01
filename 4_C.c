#include <stdio.h>

int main()
{
	int i, t, s, count = 0;
	for (i = 1; i < 600; i++)
	{
		t = i;
		do {
			s = t % 10;
			if (s == 5)
				break;
			t /= 10;
		} while (t != 0);
		if ((s == 5) && (i % 3 == 0))
		{
			printf("%d\t", i);
			count += 1;
			if (count % 8 == 0) printf("\n");
		}
	}
	printf("count = %d", count);
	
	return 0;
}