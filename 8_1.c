#include <stdio.h>
#include <math.h>

struct Point
{
	double x, y;

};
struct Point Input()
{
	struct Point point;
	printf("请输入一个坐标点的值：\n");
	scanf("%lf,%lf", &point.x, &point.y);
	return point;
}
void Output(struct Point p)
{
	printf("(%lf,%lf)\n", p.x, p.y);
}
double Distance(struct Point p1, struct Point p2)
{
	double dte = sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
	return dte;
}

int main()
{
	struct Point p1, p2;
	p1 = Input();
	p2 = Input();
	Output(p1);
	Output(p2);
	printf("%lf\n", Distance(p1, p2));
	return 0;
}
