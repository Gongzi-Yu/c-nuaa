// 判断一个字符串是否为回文
#include <stdio.h>
#include <string.h>
void filter(char *a)
{
	char p[100];
	int i, j = 0;
	for (i = 0; i < 100; i++)
	{
		if (a[i] >= 65 && a[i] <= 90)
			p[j++] = a[i];
		if (a[i] >= 97 && a[i] <= 122)
			p[j++] = a[i] - 32;
	}
	p[j] = 0;
	for (i = 0; i < 100; i++)
		a[i] = p[i];
}
int palin(char *a)
{
	char b[100];
	filter(b);
	char* head = b, * tail = b;
	int count = 1;
	for (int i = 0; b[i++] != 0; tail++);
	tail--;
	while (head < tail)
	{
		if (*head++ != *tail--) {
			count = 0;
			break;
		}
	}
	return count;
}
int main()
{
	char a[100];
	scanf("%s", a);
	if (palin(a)) printf("yes");
	else printf("no");
	return 0;
}