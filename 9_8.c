// 将输入的英文单词中第一个字母变为大写
#include <stdio.h>

int isLetter(char c)
{
	if((c>=65&&c<=90)||(c>=97&&c<=122))
		return 1;
	else return 0;
}
char toUpper(char c)
{
	if(c >= 65&&c<=90)
		return c;
	else
	{
		int  s = c - 32;
		return s;
	}
}
void firstUpper(char *s)
{
	char *p = s;
	int count = 0;
	while(*p!=0)
	{
		if(isLetter(*p)&&(count == 0))
		{
			*p = toUpper(*p);
			*p++;
			count = 1;
		}
		if(!isLetter(*p++))
			count = 0;
	}
}
int main()
{
	char s[] = "there are five apples in the basket";
	firstUpper(s);
	printf("%s",s);
}
