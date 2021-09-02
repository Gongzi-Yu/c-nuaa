// 输入一个点的坐标，判断其位于第几象限或者位于坐标轴
#include <stdio.h>

int main()
{
	double x, y;
	scanf("%lf,%lf", &x, &y);
	if (x > 0 && y > 0)
		printf("1");
	else if (x < 0 && y>0)
		printf("2");
	else if (x < 0 && y < 0)
		printf("3");
	else if (x > 0 && y < 0)
		printf("4");
	else
		printf("5");
	return 0;
}