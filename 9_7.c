#include <stdio.h>

void getDigits(char *s1, char *s2)
{
	int i,j;
	char *p = s1,*s = s2;
	while(*p != 0)
	{
		if(*p >= 48&&*p<=57)
			*s++ = *p++;
		else *p++;
	}
	*s = 0;
}
int main()
{
	char s1[20],s2[20];
	scanf("%s",s1);
	getDigits(s1,s2);
	printf("%s",s2);
	return 0;
}
