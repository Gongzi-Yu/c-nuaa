#include<stdio.h>
#include<stdlib.h>
int main()
{
	int s,a,num=0,sales=0;
	FILE *fp1,*fp2;
	if((fp1=fopen("nums.txt","r"))==NULL)
	{
		printf("cannot open file\n");
		exit(1);
	}
	if((fp2=fopen("sales.txt","w"))==NULL)
	{
		printf("cannot open file\n");
		exit(1);
	}
	fprintf(fp2,"\tnum\t\tsales\n");
	while(feof(fp1)==0)
	{
		fscanf(fp1,"%d",&a);
		if(a<10)
			s=25*a;
		else if(a<50)
			s=24*a;
		else if(a<100)
			s=22*a;
		else
			s=20*a;
		fprintf(fp2,"\t%d\t\t%d\n",a,s);
		num+=a;
		sales+=s;
	}
	fprintf(fp2,"\ntotal num =%d\n",num);
	fprintf(fp2,"total sales =%d",sales);
	fclose(fp1);
	fclose(fp2);
	return 0;
}