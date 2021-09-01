#include <stdio.h>

void my_strcpy(char s1[], char s2[])
{
	int i;
	for(i=0;s2[i]!=0;i++) s1[i]=s2[i];
	s1[i]=0;
}

int main()
{
	char s1[20],s2[20];
	printf("please input s2:\n");
	scanf("%s",s2);
	printf("s2=%s\n",s2);
	my_strcpy(s1,s2);
	printf("s1=%s",s1);
}
