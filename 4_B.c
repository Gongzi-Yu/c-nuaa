// 输出所有四位数中的逆序数
#include <stdio.h>

int main()
{
	int i, gws, sws, bws, qws, count = 0;
	for (i = 1000; i < 10000; i++)
	{
		gws = i % 10;
		sws = (i / 10) % 10;
		bws = (i / 100) % 10;
		qws = i / 1000;
		if ((gws == qws) && (sws == bws))
		{
			printf("%d\t", i);
			count += 1;
			if (count % 6 == 0)
				printf("\n");
		}
		
	}
	printf("count = %d", count);
}