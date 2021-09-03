// 实现文本文件的显示，通过键盘输入文件名
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	FILE *fp1;
	char infile[30],ch;
	printf("Please enter an input file name:");
	gets(infile);
	if((fp1 = fopen(infile,"r"))==NULL)
	{
		printf("Can not open the file %s\n",infile);
		exit(1);
	}
	while((ch = fgetc(fp1))!=EOF)
		putchar(ch);
	fclose(fp1);
	return 0;
}