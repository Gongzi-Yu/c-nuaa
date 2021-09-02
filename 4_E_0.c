// 求出并输出所有的 “水仙花数”
/*
做一个单循环，循环变量num的取值范围从100到999；
在循环体内，将num的各位数字分解到变量a、b、c中，
即a代表百位、b代表十位、c代表个位，然后判断是否
满足 “水仙花数” 的条件，若满足，则输出num的值。
*/
#include <stdio.h>

int main()
{
	int num, gws, sws, bws;
	for (num = 100; num < 1000; num++)
	{
		gws = num % 10;
		sws = (num / 10) % 10;
		bws = num / 100;
		if (num == gws * gws * gws + sws * sws * sws + bws * bws * bws)
			printf("%d\t", num);
	}
}