#include <stdio.h>
#include <string.h>

void swap(char *s1,char *s2)
{
	char s3[20];
	strcpy(s3, s2);
	strcpy(s2, s1);
	strcpy(s1, s3);
}
int main()
{
	char str1[20],str2[20],str3[20];
	scanf("%s",str1);
	scanf("%s",str2);
	scanf("%s",str3);
	if(strcmp(str1,str2)>0)
		swap(str1,str2);
	if(strcmp(str1,str3)>0)
		swap(str1,str3);
	if(strcmp(str2,str3)>0)
		swap(str2,str3);
	printf("%s\t%s\t%s",str1,str2,str3);
	return 0;
}