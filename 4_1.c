// 循环输入自变量，输出因变量（为分段函数）
#include <stdio.h>

int main()
{
	int t;
	double x, y;

	t = scanf("%lf", &x);

	while (t == 1)
	{
		if (x <= 2.5)
			y = 1.5 * x + 7.5;
		else
			y = 9.32 * x - 34.2;

		printf("y=%.2lf\n", y);

		t = scanf("%lf", &x);

	}

}