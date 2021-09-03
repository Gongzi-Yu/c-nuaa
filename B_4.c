// 合并两个文件的数据到第三个文件
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void combine(int *a,int *b,int n,int m,int *c)
{
	int i,j,k=0;
	for(i=0,j=0;i<n&&j<m;)
	{
		if(*(a+i)<*(b+j))
			c[k++]=a[i++];
		else c[k++]=b[j++];
	}
	if(i = n)
		for(;j<m;j++) c[k++] = b[j];
	else
		for(;i<n;i++) c[k++] = a[i];
}

int main()
{
	int i=0,j=0,a[20],b[20],c[40];
	int k=0;
	FILE *fp1,*fp2,*fp3;
	if((fp1 = fopen("w1.txt","r"))==NULL)
	{
		printf("Cannot open file w1.txt\n");
		exit(1);
	}
	if((fp2 = fopen("w2.txt","r"))==NULL)
	{
		printf("Cannot open file w2.txt\n");
		exit(1);
	}
	if((fp3 = fopen("w3.txt","w"))==NULL)
	{
		printf("Cannot open file w3.txt\n");
		exit(1);
	}
	while(feof(fp1)==0)
	{
		fscanf(fp1,"%d",&a[i++]);
	}
	while(feof(fp2)==0) fscanf(fp2,"%d",&b[j++]);
	combine(a,b,i,j,c);
	for(;k<(i+j);k++)
		fprintf(fp3,"%d\t",c[k]);
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	return 0;
}