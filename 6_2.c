#include <stdio.h>
#include <math.h>

#define square(x) (x)*(x)
#define distance(x1,y1,x2,y2) sqrt(square(x1-x2)+square(y1-y2))

int main()
{
	double x1,y1,x2,y2;
	scanf("%lf,%lf,%lf,%lf",&x1,&y1,&x2,&y2);
	printf("%.2lf",distance(x1,y1,x2,y2));
}