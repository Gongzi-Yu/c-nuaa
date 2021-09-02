// 定义描述颜色的枚举类型，输出这 3 种颜色的全排列
#include <stdio.h>

enum color {RED,GREEN,BLUE};

void print(enum color c)
{
	switch (c)
	{
	case RED:printf("red\t"); break;
	case GREEN:printf("green\t"); break;
	case BLUE:printf("blue\t"); break;
	}
}
int main()
{
	enum color i, j, k;
	int count = 0;
	for (i = RED; i <= BLUE; i = (enum color)((int)i + 1))
		for (j = RED; j <= BLUE; j = (enum color)((int)j + 1))
			for (k = RED; k <= BLUE; k = (enum color)((int)k + 1))
				if ((i != j) && (k != j) && (k != i))
				{
					printf("%d\t", ++count);
					print(i);
					print(j);
					print(k);
					printf("\n");
				}
	printf("combination:%d\n", count);
	return 0;
}
