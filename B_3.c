// 从文件中读取数据，存入数组，转为升序，存入另一个数组
#include<stdio.h>
#include<stdlib.h>
void sort(double *a,int n);
void sort(double *a,int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
		for(j=0;j<n-1-i;j++)
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
}
int main()
{
	FILE *fp;
	double a[100];
	int i=0,n;
	if((fp=fopen("input.txt","r"))==NULL)
	{
		printf("Cannot open file input.txt\n");
		exit(1);
	}
	while(feof(fp)==0)
		fscanf(fp,"%lf",&a[i++]);
	n=i;
	sort(a,n);
	if((fp=fopen("output.txt","w"))==NULL)
	{
		printf("Cannot open file output.txt\n");
		exit(1);
	}
	for(i=0;i<n;i++)
		fprintf(fp,"%.2lf ",a[i]);
	fclose(fp);
	return 0;
}