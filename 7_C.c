// 将两个字符串交叉复制，构成一个新的字符串
#include <stdio.h>

void interCross(char s1[], char s2[], char s3[])
{
	int i,j;
	for(i=0,j=0;(s1[i]!=0)&&(s2[i]!=0);j++)
	{
		if (j % 2 == 0) s3[j] = s1[i];
		else {
				s3[j] = s2[i];
				i++;
		}
	}
	if (s1[i] == 0)
		for (; s2[i] != 0; j++, i++) s3[j] = s2[i];
	if (s2[i] == 0)
		for (; s1[i] != 0; j++, i++) s3[j] = s1[i];
	s3[j] = 0;
}
int main()
{
	char s1[20], s2[20], s3[50];
	scanf("%s", s1);
	scanf("%s", s2);
	interCross(s1, s2, s3);
	printf("s1=%s,s2=%s\n", s1, s2);
	printf("s3=%s", s3);
}
