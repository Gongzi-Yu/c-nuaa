// 输入一个考核等级，输出对应的成绩
#include <stdio.h>

int main()
{
	char scare;
	printf("请输入考核等级（A~E）：");
	scanf("%c", &scare);
	if (scare == 'a' || scare == 'A')
		printf("90~100");
	else if (scare == 'b' || scare == 'B')
		printf("80~89");
	else if (scare == 'c' || scare == 'C')
		printf("70~79");
	else if (scare == 'd' || scare == 'D')
		printf("60~69");
	else if (scare == 'e' || scare == 'E')
		printf("0~59");
	else
		printf("error");
}