#include <stdio.h>

int main()
{
	int n, i, t;
	double t1, t2, pi;
	do {
		printf("请输入一个整数：");
		t = scanf("%d", &n);
		pi = 1;
		for (i = 1; i <= n; i++)
		{
			t1 = 2.0 * i / (2.0 * i - 1);
			t2 = 2.0 * i / (2.0 * i + 1);
			pi *= t1 * t2;
		}
		printf("PI的值为：%lf\n", 2 * pi);	
	} while (t == 1);
}