#include <stdio.h>

int main()
{
	char scare;
	printf("�����뿼�˵ȼ���A~E����\n");
	scanf("%c", &scare);
	switch (scare)
	{
	case 'a':printf("90~100"); break;
	case 'A':printf("90~100"); break;
	case 'b':printf("80~89"); break;
	case 'B':printf("80~89"); break;
	case 'c':printf("70~79"); break;
	case 'C':printf("70~79"); break;
	case 'd':printf("60~69"); break;
	case 'D':printf("60~69"); break;
	case 'e':printf("0~59"); break;
	case 'E':printf("0~59"); break;
		default:printf("error");
	}
	return 0;
}