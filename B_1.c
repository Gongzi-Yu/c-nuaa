// 将1~100的平方、平方根输出到文件table.txt中
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i;
	FILE *fp;

	if((fp=fopen("table.txt","w"))==NULL)
	{
		printf("Cannot open file table.txt\n");
		exit(1);
	}
	fprintf(fp,"Number\t\tSquare\t\tSquare root\n");
	for(i=1;i<=100;i++)
		fprintf(fp,"%6d\t\t%6d\t\t%6.3lf\n",i,i*i,sqrt((float)i));

	return 0;
}

