/*
调用求随机数的系统库函数产生n（n≤10000）个范围在[1,10]
中的随机数存入数组。然后分别统计其中1~5和6~10出现的次数
及概率。
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 10000
int main()
{
	int a[10000],i,p=0,q=0;
	double randnumber;

	srand(time(NULL));
	for(i=0;i<n;i++)
	{
		randnumber=rand();
		a[i]=(int)randnumber%10+1;
		if(a[i]>=1&&a[i]<=5) p++;
		else q++;
	}
	printf("1~5 %d,%.2lf%%\n",p,100.0*p/n);
	printf("6~10 %d,%.2lf%%\n",q,100.0*q/n);

}