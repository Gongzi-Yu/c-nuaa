#include <stdio.h>

int main()
{
	int i,f[20]={1,1},sum=f[0]+f[1];
	for(i=2;i<20;i++)
	{
		f[i]=f[i-2]+f[i-1];
		sum+=f[i];
	}
	for(i=0;i<20;i++)
	{
		printf("%d\t",f[i]);
		if((i+1)%5==0) printf("\n");
	}
	printf("sum=%d\n",sum);
	return 0;
}
