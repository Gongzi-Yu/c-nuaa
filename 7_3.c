#include <stdio.h>
#include <math.h>

void input(int a[],int n)
{
	int i=0;
	for(;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}

double aver(int a[],int n)
{
	double sum=0;
	int i;
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	return sum/n;
}

double stddev(int a[],int n)
{
	double x=0;
	int i;
	for(i=0;i<n;i++)
	{
		x+=(a[i]-aver(a,n))*(a[i]-aver(a,n));
	}
	return sqrt(x/n);
}

int main()
{
	int a[100],n;
	printf("ÇëÊäÈënµÄÖµ£¨n<=100£©:\n");
	scanf("%d",&n);
	input(a,n);
	printf("%lf",stddev(a,n));
}
