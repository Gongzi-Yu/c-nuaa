// 宏定义及宏的嵌套调用——求四个数的最小者
#include <stdio.h>

#define min2(x,y) (x)<=y?(x):y
#define MIN4(w,x,y,z) min2(min2(min2(w,x),y),z)
int main()
{
	int w,x,y,z;
	scanf("%d,%d,%d,%d",&w,&x,&y,&z);
	printf("%d",MIN4(w,x,y,z));
	return 0;
}