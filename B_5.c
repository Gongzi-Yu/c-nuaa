#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	FILE *fp1,*fp2;
	char infile[30],outfile[30],ch;
	printf("Please enter an input file name:");
	gets(infile);
	if((fp1 = fopen(infile,"r"))==NULL)
	{
		printf("Can not open the file infile\n");
		exit(1);
	}
	printf("Please enter an output file name:");
	gets(outfile);
	if((fp2 = fopen(outfile,"w"))==NULL)
	{
		printf("Can not open the file outfile\n");
		exit(1);
	}
	while((ch = fgetc(fp1))!=EOF)
		fputc(ch,fp2);
	fclose(fp1);
	fclose(fp2);
	return 0;
}