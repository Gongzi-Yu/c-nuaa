// 字符串逆向存放
#include <stdio.h>

void reverse(char s[])
{
	int i,n;
	for(i=0;s[i]!=0;i++);
	n=i;
	for(i=0;s[i]!=0;i++)
	{
		char t;
		if(i>=n-i-1) break;
		t=s[i];
		s[i]=s[n-i-1];
		s[n-i-1]=t;
	}
}

int main()
{
	char s[20]; 
	scanf("%s",s);
	printf("%s\n",s);
	reverse(s);
	printf("%s",s);
}