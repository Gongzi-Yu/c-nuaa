#include <stdio.h>

int main()
{
	int i,count1=0,count2=0,count3=0,count4=0,count5=0;
	char s[30];
	gets(s);
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]>=65&&s[i]<=90) count1++;
		else if(s[i]>=97&&s[i]<=122) count2++;
		else if(s[i]>=48&&s[i]<=57) count3++;
		else if(s[i]==32) count4++;
		else count5++;
	}
	printf("%d,%d,%d,%d,%d",count1,count2,count3,count4,count5);
}