#include <stdio.h>
#include <math.h>

double square(int x)
{
	return 1.0*x*x;
}

double distance(int x1,int y1,int x2,int y2)
{
	return sqrt(square(x1-x2)+square(y1-y2));
}

int main()
{
	int x1,x2,y1,y2;
	scanf("%d,%d,%d,%d",&x1,&y1,&x2,&y2);
	printf("%.2lf",distance(x1,y1,x2,y2));
	return 0;
}